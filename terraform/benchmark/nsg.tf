resource "azurerm_network_security_group" "nsg_benchmark" {
  name                = var.nsg_name_benchmark
  location            = var.azure_region
  resource_group_name = azurerm_resource_group.rg.name

  security_rule {
    access                     = "Allow"
    description                = "Allow SSH from home"
    destination_address_prefix = "*"
    destination_port_range     = "22"
    direction                  = "Inbound"
    name                       = "SSH"
    priority                   = 1001
    protocol                   = "Tcp"
    source_address_prefixes    = var.allow_ips
    source_port_range          = "*"
  }

  security_rule {
    access                     = "Allow"
    description                = "Allow Log4Shell Exploit from home"
    destination_address_prefix = "*"
    destination_port_range     = "8080"
    direction                  = "Inbound"
    name                       = "Log4Shell port"
    priority                   = 1011
    protocol                   = "Tcp"
    source_address_prefixes    = var.allow_ips
    source_port_range          = "*"
  }
}

resource "azurerm_network_interface_security_group_association" "nsg_if_benchmark" {
  network_interface_id      = azurerm_network_interface.interface_benchmark.id
  network_security_group_id = azurerm_network_security_group.nsg_benchmark.id
}

resource "azurerm_subnet_network_security_group_association" "nsg_subnet_benchmark" {
  subnet_id = azurerm_subnet.subnet_benchmark.id
  network_security_group_id = azurerm_network_security_group.nsg_benchmark.id
}