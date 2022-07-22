resource "azurerm_resource_group" "rg" {
  name     = var.rg_name_benchmark
  location = var.azure_region

  tags = {
    "Environment" = "Secura Benchmark"
    "Team"        = "Benchmark"
  }
}