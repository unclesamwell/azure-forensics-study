resource "azurerm_app_service_plan" "app_service_benchmark" {
  name                = var.app_service_benchmark_name
  resource_group_name = azurerm_resource_group.rg.name
  location            = var.azure_region
  kind                = "Linux"
  reserved            = true

  sku {
    tier = "Dynamic"
    size = "Y1"
  }

  lifecycle {
    ignore_changes = [
      kind
    ]
  }
}

resource "azurerm_application_insights" "app_insights_benchmark" {
  name                = var.app_insights_benchmark_name
  location            = var.azure_region
  resource_group_name = azurerm_resource_group.rg.name
  application_type    = "other"
}

resource "azurerm_function_app" "function_benchmark" {
  name                       = var.function_benchmark_name
  location                   = var.azure_region
  resource_group_name        = azurerm_resource_group.rg.name
  app_service_plan_id        = azurerm_app_service_plan.app_service_benchmark.id
  storage_account_name       = azurerm_storage_account.storage_benchmark.name
  storage_account_access_key = azurerm_storage_account.storage_benchmark.primary_access_key
  os_type                    = "linux"
  version                    = "~4"

  app_settings = {
    FUNCTIONS_WORKER_RUNTIME       = "python"
    APPINSIGHTS_INSTRUMENTATIONKEY = azurerm_application_insights.app_insights_benchmark.instrumentation_key
    WEBSITE_RUN_FROM_PACKAGE       = "https://${azurerm_storage_account.storage_benchmark.name}.blob.core.windows.net/${azurerm_storage_container.function_app_container.name}/${azurerm_storage_blob.function_app_storage_blob.name}${data.azurerm_storage_account_blob_container_sas.function_app_sas.sas}"
  }

  site_config {
    linux_fx_version = "python|3.9"
  }
}

# Upload function-app

data "archive_file" "file_function_app" {
  type        = "zip"
  source_dir  = "../../assets/setup/function-app"
  output_path = "function-app.zip"
}

resource "azurerm_storage_container" "function_app_container" {
  name                  = var.function_app_container_name
  storage_account_name  = azurerm_storage_account.storage_benchmark.name
  container_access_type = "private"
}

resource "azurerm_storage_blob" "function_app_storage_blob" {
  name                   = "${filesha256(data.archive_file.file_function_app.output_path)}.zip"
  storage_account_name   = azurerm_storage_account.storage_benchmark.name
  storage_container_name = azurerm_storage_container.function_app_container.name
  type                   = "Block"
  source                 = data.archive_file.file_function_app.output_path
}

data "azurerm_storage_account_blob_container_sas" "function_app_sas" {
  connection_string = azurerm_storage_account.storage_benchmark.primary_connection_string
  container_name    = azurerm_storage_container.function_app_container.name
  https_only        = true

  start  = "2022-01-01T00:00:00Z"
  expiry = "2023-01-01T00:00:00Z"

  permissions {
    read   = true
    add    = false
    create = false
    write  = false
    delete = false
    list   = false
  }
}
