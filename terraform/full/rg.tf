resource "azurerm_resource_group" "rg" {
  name     = var.rg_name_all
  location = var.azure_region

  tags = {
    "Environment" = "Secura All"
    "Team"        = "All"
  }
}