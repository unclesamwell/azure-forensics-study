output "vm_all_pubip" {
  value = azurerm_public_ip.pubip_all.ip_address
}

output "vm_connecion_command" {
  value = "ssh -i ../../assets/keys/ssh_key ${var.vm_account_name}@${azurerm_public_ip.pubip_all.ip_address}"
}

output "function_app_all_hostname" {
  value = azurerm_function_app.function_all.default_hostname
}

output "function_app_endpoint" {
  value = "${azurerm_function_app.function_all.default_hostname}/api/${azurerm_function_app.function_all.name}"
}
