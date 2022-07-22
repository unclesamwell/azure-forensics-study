resource "azurerm_log_analytics_workspace" "log_workspace_benchmark" {
    name = var.log_workspace_name
    location = var.azure_region
    resource_group_name = azurerm_resource_group.rg.name
    sku = "PerGB2018"
    retention_in_days = 30
}