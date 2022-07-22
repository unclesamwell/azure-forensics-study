resource "azurerm_network_interface" "interface_benchmark" {
  name     = var.netif_name_benchmark
  location = var.azure_region
  resource_group_name = azurerm_resource_group.rg.name

  ip_configuration {
    name                          = var.nic_name
    subnet_id                     = azurerm_subnet.subnet_benchmark.id
    private_ip_address_allocation = "Dynamic"
    public_ip_address_id          = azurerm_public_ip.pubip_benchmark.id
  }
}