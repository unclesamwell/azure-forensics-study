resource "azurerm_linux_virtual_machine" "vm_all" {
  name                  = var.vm_name_all
  location              = var.azure_region
  resource_group_name   = azurerm_resource_group.rg.name
  network_interface_ids = [azurerm_network_interface.interface_all.id]
  size                  = "Standard_B1s"
  depends_on            = [azurerm_network_interface_security_group_association.nsg_if_all]

  os_disk {
    name                 = "allOSDisk"
    caching              = "ReadWrite"
    storage_account_type = "Premium_LRS"
    disk_size_gb = 64
    
  }

  source_image_reference {
    publisher = "Canonical"
    offer     = "UbuntuServer"
    sku       = "18.04-LTS"
    version   = "latest"
  }

  computer_name                   = var.vm_account_name
  admin_username                  = var.vm_account_name
  disable_password_authentication = true

  admin_ssh_key {
    username   = "securaall"
    public_key = file("../../assets/keys/ssh_key.pub")
  }

  boot_diagnostics {
    storage_account_uri = azurerm_storage_account.storage_all.primary_blob_endpoint
  }

  provisioner "local-exec" {
    command = "az snapshot create --resource-group ${azurerm_resource_group.rg.name} --name ${var.snapshot_name} --source ${azurerm_linux_virtual_machine.vm_all.os_disk[0].name}"
  }
}

resource "azurerm_virtual_machine_extension" "vm_agent_log_analytics" {
  name = var.vm_agent_log_analytics_name
  virtual_machine_id = azurerm_linux_virtual_machine.vm_all.id
  publisher = "Microsoft.EnterpriseCloud.Monitoring"
  type = "OmsAgentForLinux"
  type_handler_version = "1.14"
  auto_upgrade_minor_version = true

  settings = <<SETTINGS
    {
      "workspaceId" : "${azurerm_log_analytics_workspace.log_workspace_all.workspace_id}"
    }
  SETTINGS

  protected_settings = <<PROTECTED_SETTINGS
    {
      "workspaceKey" : "${azurerm_log_analytics_workspace.log_workspace_all.primary_shared_key}"
    }
  PROTECTED_SETTINGS

}

resource "azurerm_virtual_machine_extension" "vm_agent_dependency" {
  name = var.vm_agent_dependency_name
  virtual_machine_id = azurerm_linux_virtual_machine.vm_all.id
  publisher = "Microsoft.Azure.Monitoring.DependencyAgent"
  type = "DependencyAgentLinux"
  type_handler_version = "9.10"
  auto_upgrade_minor_version = true
  automatic_upgrade_enabled = true
}