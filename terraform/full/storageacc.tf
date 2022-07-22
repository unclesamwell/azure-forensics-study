resource "random_id" "randomID" {
  keepers = {
    resource_group = azurerm_resource_group.rg.name
  }

  byte_length = 8
}

resource "azurerm_storage_account" "storage_all" {
  name                     = "diag${random_id.randomID.hex}"
  resource_group_name      = azurerm_resource_group.rg.name
  location                 = var.azure_region
  account_tier             = "Standard"
  account_replication_type = "LRS"
}

resource "azurerm_storage_container" "container_all" {
  name = var.storage_container_name
  storage_account_name = azurerm_storage_account.storage_all.name
  container_access_type = "private"
}

resource "azurerm_storage_blob" "blob_all" {
  name = "passwords.txt"
  storage_account_name = azurerm_storage_account.storage_all.name
  storage_container_name = azurerm_storage_container.container_all.name
  type = "Block"
  source = "../../assets/attacks/6-credential_access/passwords.txt.example"
}