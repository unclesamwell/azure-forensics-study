resource "azurerm_log_analytics_workspace" "log_workspace_all" {
    name = var.log_workspace_name
    location = var.azure_region
    resource_group_name = azurerm_resource_group.rg.name
    sku = "PerGB2018"
    retention_in_days = 30

    provisioner "local-exec" {
      command = "powershell -file ./SyslogCollectionRules.ps1 -ResourceGroupName ${azurerm_resource_group.rg.name} -WorkspaceName ${azurerm_log_analytics_workspace.log_workspace_all.name}"
    }

    provisioner "local-exec" {
      command = "powershell -file ./PerformanceCollectionRules.ps1 -ResourceGroupName ${azurerm_resource_group.rg.name} -WorkspaceName ${azurerm_log_analytics_workspace.log_workspace_all.name}"
    }
}

resource "azurerm_log_analytics_solution" "vminsights" {
  solution_name = "VMInsights"
  location = var.azure_region
  resource_group_name = azurerm_resource_group.rg.name
  workspace_resource_id = azurerm_log_analytics_workspace.log_workspace_all.id
  workspace_name = azurerm_log_analytics_workspace.log_workspace_all.name

  plan {
      publisher = "Microsoft"
      product = "OMSGallery/VMInsights"
  }
}