resource "random_id" "randomID" {
  keepers = {
    resource_group = azurerm_resource_group.rg.name
  }

  byte_length = 8
}

resource "azurerm_storage_account" "storage_default" {
  name                     = "diag${random_id.randomID.hex}"
  resource_group_name      = azurerm_resource_group.rg.name
  location                 = var.azure_region
  account_tier             = "Standard"
  account_replication_type = "LRS"

  identity {
    type = "SystemAssigned"
  }
}

resource "azurerm_storage_container" "container_default" {
  name = var.storage_container_name
  storage_account_name = azurerm_storage_account.storage_default.name
  container_access_type = "private"
}

/*
resource "azurerm_storage_encryption_scope" "encryption_scope_default" {
  name = var.encryption_scope_name
  source = "Microsoft.KeyVault"
  storage_account_id = azurerm_storage_account.storage_default.id
  key_vault_key_id = azurerm_key_vault_key.key_default.id
}
*/