resource "random_id" "randomID" {
  keepers = {
    resource_group = azurerm_resource_group.rg.name
  }

  byte_length = 8
}

resource "azurerm_storage_account" "storage_benchmark" {
  name                     = "diag${random_id.randomID.hex}"
  resource_group_name      = azurerm_resource_group.rg.name
  location                 = var.azure_region
  account_tier             = "Standard"
  account_replication_type = "LRS"
}

resource "azurerm_storage_container" "container_default" {
  name = var.storage_container_name
  storage_account_name = azurerm_storage_account.storage_benchmark.name
  container_access_type = "private"
}