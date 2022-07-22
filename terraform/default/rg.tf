resource "azurerm_resource_group" "rg" {
  name     = var.rg_name_default
  location = var.azure_region

  tags = {
    "Environment" = "Secura Default"
    "Team"        = "Default"
  }
}