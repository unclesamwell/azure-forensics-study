resource "azurerm_network_watcher" "watcher_all" {
  name = var.watcher_all_name
  location = var.azure_region
  resource_group_name = azurerm_resource_group.rg.name
}

resource "azurerm_network_watcher_flow_log" "watcher_flow_log_all" {
  network_watcher_name = azurerm_network_watcher.watcher_all.name
  resource_group_name = azurerm_resource_group.rg.name
  name = var.watcher_flow_log_name

  network_security_group_id = azurerm_network_security_group.nsg_all.id
  storage_account_id = azurerm_storage_account.storage_all.id
  enabled = true
  version = 2

  retention_policy {
    enabled = true
    days = 7
  }

  traffic_analytics {
    enabled = true
    workspace_id = azurerm_log_analytics_workspace.log_workspace_all.workspace_id
    workspace_region = azurerm_log_analytics_workspace.log_workspace_all.location
    workspace_resource_id = azurerm_log_analytics_workspace.log_workspace_all.id
    interval_in_minutes = 60
  }
}