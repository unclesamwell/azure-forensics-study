resource "azurerm_public_ip" "pubip_default" {
  name                = var.pubip_name_default
  location            = var.azure_region
  resource_group_name = azurerm_resource_group.rg.name
  allocation_method   = "Dynamic"
}