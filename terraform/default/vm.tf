resource "azurerm_linux_virtual_machine" "vm_default" {
  name                  = var.vm_name_default
  location              = var.azure_region
  resource_group_name   = azurerm_resource_group.rg.name
  network_interface_ids = [azurerm_network_interface.interface_default.id]
  size                  = "Standard_B1s"
  depends_on            = [azurerm_network_interface_security_group_association.nsg_if_default]

  os_disk {
    name                 = "defaultOSDisk"
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
    username   = "securadefault"
    public_key = file("../../assets/keys/ssh_key.pub")
  }

  boot_diagnostics {
    storage_account_uri = azurerm_storage_account.storage_default.primary_blob_endpoint
  }

  provisioner "local-exec" {
    command = "az snapshot create --resource-group ${azurerm_resource_group.rg.name} --name ${var.snapshot_name} --source ${azurerm_linux_virtual_machine.vm_default.os_disk[0].name}"
  }
}