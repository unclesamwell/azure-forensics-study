resource "azurerm_virtual_network" "vnet_default" {
  name                = var.vnet_name_default
  address_space       = var.vnet_ips
  location            = var.azure_region
  resource_group_name = azurerm_resource_group.rg.name
}