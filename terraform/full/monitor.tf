# Key Vault resource logs
resource "azurerm_monitor_diagnostic_setting" "keyvault_diagnostics" {
  name = var.all_keyvault_diag_name
  target_resource_id = azurerm_key_vault.keyvault_all.id
  storage_account_id = azurerm_storage_account.storage_all.id
  log_analytics_workspace_id = azurerm_log_analytics_workspace.log_workspace_all.id

  log {
    category = "AuditEvent"
    enabled = true

    retention_policy {
      enabled = false
    }
  }

  log {
    category = "AzurePolicyEvaluationDetails"
    enabled = true
    
    retention_policy {
      enabled = false
    }
  }

  metric {
    category = "AllMetrics"
    enabled = true
    
    retention_policy {
      enabled = false
    }
  }
}

# Function App resource logs
resource "azurerm_monitor_diagnostic_setting" "functionapp_diagnostics" {
  name = var.all_functionapp_diag_name
  target_resource_id = azurerm_function_app.function_all.id
  storage_account_id = azurerm_storage_account.storage_all.id
  log_analytics_workspace_id = azurerm_log_analytics_workspace.log_workspace_all.id

  log {
    category = "FunctionAppLogs"
    enabled = true

    retention_policy {
      enabled = false
    }
  }

  metric {
    category = "AllMetrics"
    enabled = true
    
    retention_policy {
      enabled = false
    }
  }
}

# PubIP resource logs
resource "azurerm_monitor_diagnostic_setting" "pubip_diagnostics" {
  name = var.all_pubip_diag_name
  target_resource_id = azurerm_public_ip.pubip_all.id
  storage_account_id = azurerm_storage_account.storage_all.id
  log_analytics_workspace_id = azurerm_log_analytics_workspace.log_workspace_all.id

  log {
    category = "DDoSProtectionNotifications"
    enabled = true

    retention_policy {
      enabled = false
    }
  }

  log {
    category = "DDoSMitigationFlowLogs"
    enabled = true

    retention_policy {
      enabled = false
    }
  }

  log {
    category = "DDoSMitigationReports"
    enabled = true

    retention_policy {
      enabled = false
    }
  }

  metric {
    category = "AllMetrics"
    enabled = true
    
    retention_policy {
      enabled = false
    }
  }
}

# Storage Account resource logs
resource "azurerm_monitor_diagnostic_setting" "storageaccount_diagnostics" {
  name = var.all_storageaccount_diag_name
  target_resource_id = azurerm_storage_account.storage_all.id
  storage_account_id = azurerm_storage_account.storage_all.id
  log_analytics_workspace_id = azurerm_log_analytics_workspace.log_workspace_all.id

  metric {
    category = "Transaction"
    enabled = true
    
    retention_policy {
      enabled = false
    }
  }

  metric {
    category = "Capacity"
    enabled = true

    retention_policy {
      enabled = false
    }
  }
}

# blob resource logs
resource "azurerm_monitor_diagnostic_setting" "storageblob_diagnostics" {
  name = var.all_storageblob_diag_name
  target_resource_id = "${azurerm_storage_account.storage_all.id}/blobServices/default/"
  storage_account_id = azurerm_storage_account.storage_all.id
  log_analytics_workspace_id = azurerm_log_analytics_workspace.log_workspace_all.id

  log {
    category = "StorageRead"
    enabled = true

    retention_policy {
      enabled = false
    }
  }

  log {
    category = "StorageWrite"
    enabled = true

    retention_policy {
      enabled = false
    }
  }

  log {
    category = "StorageDelete"
    enabled = true

    retention_policy {
      enabled = false
    }
  }

  metric {
    category = "Transaction"
    enabled = true
    
    retention_policy {
      enabled = false
    }
  }

  metric {
    category = "Capacity"
    enabled = true

    retention_policy {
      enabled = false
    }
  }
}


# NSG resource logs
resource "azurerm_monitor_diagnostic_setting" "nsg_diagnostics" {
  name = var.all_nsg_diag_name
  target_resource_id = azurerm_network_security_group.nsg_all.id
  storage_account_id = azurerm_storage_account.storage_all.id
  log_analytics_workspace_id = azurerm_log_analytics_workspace.log_workspace_all.id

  log {
    category = "NetworkSecurityGroupEvent"
    enabled = true

    retention_policy {
      enabled = false
    }
  }

  log {
    category = "NetworkSecurityGroupRuleCounter"
    enabled = true
    
    retention_policy {
      enabled = false
    }
  }
}

# Vnet resource logs
resource "azurerm_monitor_diagnostic_setting" "vnet_diagnostics" {
  name = var.all_vnet_diag_name
  target_resource_id = azurerm_virtual_network.vnet_all.id
  storage_account_id = azurerm_storage_account.storage_all.id
  log_analytics_workspace_id = azurerm_log_analytics_workspace.log_workspace_all.id

  log {
    category = "VMProtectionAlerts"
    enabled = true

    retention_policy {
      enabled = false
    }
  }

  metric {
    category = "AllMetrics"
    enabled = true
    
    retention_policy {
      enabled = false
    }
  }
}

# CosmosDB resource logs
resource "azurerm_monitor_diagnostic_setting" "cosmosdb_diagnostics" {
  name = var.all_cosmosdb_diag_name
  target_resource_id = azurerm_cosmosdb_account.cosmos_all.id
  storage_account_id = azurerm_storage_account.storage_all.id
  log_analytics_workspace_id = azurerm_log_analytics_workspace.log_workspace_all.id

  log {
    category = "DataPlaneRequests"
    enabled = true

    retention_policy {
      enabled = false
    }
  }

  log {
    category = "QueryRuntimeStatistics"
    enabled = true

    retention_policy {
      enabled = false
    }
  }

  log {
    category = "PartitionKeyStatistics"
    enabled = true

    retention_policy {
      enabled = false
    }
  }

  log {
    category = "PartitionKeyRUConsumption"
    enabled = true

    retention_policy {
      enabled = false
    }
  }

  log {
    category = "ControlPlaneRequests"
    enabled = true

    retention_policy {
      enabled = false
    }
  }

  log {
    category = "MongoRequests"
    enabled = true

    retention_policy {
      enabled = false
    }
  }

  log {
    category = "CassandraRequests"
    enabled = true

    retention_policy {
      enabled = false
    }
  }

  log {
    category = "GremlinRequests"
    enabled = true

    retention_policy {
      enabled = false
    }
  }

  log {
    category = "TableApiRequests"
    enabled = true

    retention_policy {
      enabled = false
    }
  }

  metric {
    category = "Requests"
    enabled = true
    
    retention_policy {
      enabled = false
    }
  }
}

# Netif resource logs
resource "azurerm_monitor_diagnostic_setting" "netif_diagnostics" {
  name = var.all_netif_diag_name
  target_resource_id = azurerm_network_interface.interface_all.id
  storage_account_id = azurerm_storage_account.storage_all.id
  log_analytics_workspace_id = azurerm_log_analytics_workspace.log_workspace_all.id

  metric {
    category = "AllMetrics"
    enabled = true
    
    retention_policy {
      enabled = false
    }
  }
}

# AppServicePlan resource logs
resource "azurerm_monitor_diagnostic_setting" "appserviceplan_diagnostics" {
  name = var.all_appserviceplan_diag_name
  target_resource_id = azurerm_app_service_plan.app_service_all.id
  storage_account_id = azurerm_storage_account.storage_all.id
  log_analytics_workspace_id = azurerm_log_analytics_workspace.log_workspace_all.id

  metric {
    category = "AllMetrics"
    enabled = true
    
    retention_policy {
      enabled = false
    }
  }
}

# Log Analytics Workspace resource logs
resource "azurerm_monitor_diagnostic_setting" "logworkspace_diagnostics" {
  name = var.all_log_workspace_diag_name
  target_resource_id = azurerm_log_analytics_workspace.log_workspace_all.id
  storage_account_id = azurerm_storage_account.storage_all.id
  log_analytics_workspace_id = azurerm_log_analytics_workspace.log_workspace_all.id

  log {
    category = "Audit"
    enabled = true
    
    retention_policy {
      enabled = false
    }
  }

  metric {
    category = "AllMetrics"
    enabled = true
    
    retention_policy {
      enabled = false
    }
  }
}

# Azure AD Logs (should be all there by default, but exporting them allows better analysis)
resource "azurerm_monitor_aad_diagnostic_setting" "example" {
  name               = var.all_azuread_diag_name
  storage_account_id = azurerm_storage_account.storage_all.id
  log_analytics_workspace_id = azurerm_log_analytics_workspace.log_workspace_all.id

  log {
    category = "AuditLogs"
    enabled  = true

    retention_policy {
      enabled = false
    }
  }

  log {
    category = "SignInLogs"
    enabled  = true
    
    retention_policy {
      enabled = false
    }
  }

  log {
    category = "NonInteractiveUserSignInLogs"
    enabled  = true
    
    retention_policy {
      enabled = false
    }
  }

  log {
    category = "ServicePrincipalSignInLogs"
    enabled  = true
    
    retention_policy {
      enabled = false
    }
  }

  log {
    category = "ManagedIdentitySignInLogs"
    enabled  = true
    
    retention_policy {
      enabled = false
    }
  }

  log {
    category = "ProvisioningLogs"
    enabled  = true
    
    retention_policy {
      enabled = false
    }
  }

  log {
    category = "ADFSSignInLogs"
    enabled  = true
    
    retention_policy {
      enabled = false
    }
  }

  log {
    category = "RiskyUsers"
    enabled  = true
    
    retention_policy {
      enabled = false
    }
  }

  log {
    category = "UserRiskEvents"
    enabled  = true
    
    retention_policy {
      enabled = false
    }
  }

  /* Not supported (yet?)
  log {
    category = "NetworkAccessTrafficLogs"
    enabled  = true
    
    retention_policy {
      enabled = false
    }
  }

  log {
    category = "RiskyServicePrincipals"
    enabled  = true
    
    retention_policy {
      enabled = false
    }
  }

  log {
    category = "ServicePrincipalRiskEvents"
    enabled  = true
    
    retention_policy {
      enabled = false
    }
  }
  */
}