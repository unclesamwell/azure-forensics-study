output "vm_benchmark_pubip" {
  value = azurerm_public_ip.pubip_benchmark.ip_address
}

output "vm_connecion_command" {
  value = "ssh -i ../../assets/keys/ssh_key ${var.vm_account_name}@${azurerm_public_ip.pubip_benchmark.ip_address}"
}

output "function_app_benchmark_hostname" {
  value = azurerm_function_app.function_benchmark.default_hostname
}

output "function_app_endpoint" {
  value = "${azurerm_function_app.function_benchmark.default_hostname}/api/${azurerm_function_app.function_benchmark.name}"
}
