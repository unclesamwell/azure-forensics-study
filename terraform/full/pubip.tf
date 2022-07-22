resource "azurerm_public_ip" "pubip_all" {
  name                = var.pubip_name_all
  location            = var.azure_region
  resource_group_name = azurerm_resource_group.rg.name
  allocation_method   = "Dynamic"
}