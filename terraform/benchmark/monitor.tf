# Key Vault resource logs
resource "azurerm_monitor_diagnostic_setting" "keyvault_diagnostics" {
  name = var.benchmark_keyvault_diag_name
  target_resource_id = azurerm_key_vault.keyvault_benchmark.id
  storage_account_id = azurerm_storage_account.storage_benchmark.id
  log_analytics_workspace_id = azurerm_log_analytics_workspace.log_workspace_benchmark.id

  log {
    category = "AuditEvent"
    enabled = true

    retention_policy {
      enabled = false
    }
  }

  metric {
    category = "AllMetrics"
    enabled = false
    
    retention_policy {
      enabled = false
    }
  }
}