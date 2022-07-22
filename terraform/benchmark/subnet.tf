resource "azurerm_subnet" "subnet_benchmark" {
  name                 = var.subnet_name_benchmark
  resource_group_name  = azurerm_resource_group.rg.name
  virtual_network_name = azurerm_virtual_network.vnet_benchmark.name
  address_prefixes     = ["10.0.1.0/24"]
  service_endpoints    = ["Microsoft.AzureCosmosDB"] 
}
