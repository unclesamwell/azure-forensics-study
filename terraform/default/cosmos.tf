resource "azurerm_cosmosdb_account" "cosmos_default" {
  name                      = var.cosmosdb_account_name
  location                  = var.azure_region
  resource_group_name       = azurerm_resource_group.rg.name
  offer_type                = "Standard"
  enable_automatic_failover = false

  consistency_policy {
    consistency_level = "Session"
  }

  geo_location {
    location          = var.azure_region
    failover_priority = 0
  }

  enable_free_tier                  = true
  ip_range_filter                   = "104.42.195.92,40.76.54.131,52.176.6.30,52.169.50.45,52.187.184.26,${var.myip_string}" //Azure portal IP addresses + own IP address
  is_virtual_network_filter_enabled = true
  virtual_network_rule {
    id = azurerm_subnet.subnet_default.id
  }
}

resource "azurerm_cosmosdb_sql_database" "cosmos_default_db" {
  name                = var.cosmos_database_name
  resource_group_name = azurerm_resource_group.rg.name
  account_name        = azurerm_cosmosdb_account.cosmos_default.name
  throughput          = 400
}

resource "azurerm_cosmosdb_sql_container" "cosmos_default_container" {
  name = "Users"
  resource_group_name = azurerm_resource_group.rg.name
  account_name = azurerm_cosmosdb_account.cosmos_default.name
  database_name = azurerm_cosmosdb_sql_database.cosmos_default_db.name
  partition_key_path = "/UserId"

  provisioner "local-exec" {
    command = "${var.python_location} ../../assets/setup/cosmos-data/populate_users.py -i ${azurerm_cosmosdb_account.cosmos_default.primary_key} -n ${var.cosmos_database_name}"
  }

}
