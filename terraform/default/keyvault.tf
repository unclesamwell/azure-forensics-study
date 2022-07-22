data "azurerm_client_config" "current" {}

resource "azurerm_key_vault" "keyvault_default" {
  name                       = var.keyvault_name
  location                   = var.azure_region
  resource_group_name        = azurerm_resource_group.rg.name
  sku_name                   = "standard"
  tenant_id                  = data.azurerm_client_config.current.tenant_id
  purge_protection_enabled   = false
  soft_delete_retention_days = 7 # default is actually 90
  enabled_for_disk_encryption = true

  access_policy = [ {
    tenant_id = data.azurerm_client_config.current.tenant_id
    object_id = data.azurerm_client_config.current.object_id

    # Default permissions (except Purge, but needed for terraform to destroy it)
    application_id = ""
    storage_permissions     = []
    key_permissions         = ["Get", "List", "Update", "Create", "Import", "Delete", "Recover", "Backup", "Restore", "Purge"]
    secret_permissions      = ["Get", "List", "Set", "Delete", "Recover", "Backup", "Restore", "Purge"]
    certificate_permissions = ["Get", "List", "Update", "Create", "Import", "Delete", "Recover", "Backup", "Restore", "ManageContacts", "ManageIssuers", "GetIssuers", "ListIssuers", "SetIssuers", "DeleteIssuers", "Purge"]
  },
  {
    tenant_id = data.azurerm_client_config.current.tenant_id
    object_id = azurerm_storage_account.storage_default.identity.0.principal_id
    application_id = ""

    key_permissions = ["Get", "List", "Encrypt", "WrapKey", "UnwrapKey", "Verify"]
    certificate_permissions = []
    secret_permissions = []
    storage_permissions = []

  } ]

}

resource "azurerm_key_vault_secret" "secret_default" {
  name         = var.secret_default_name
  value        = var.secret_default_name
  key_vault_id = azurerm_key_vault.keyvault_default.id
}

resource "azurerm_key_vault_key" "key_default" {
  name         = var.key_default_name
  key_vault_id = azurerm_key_vault.keyvault_default.id
  key_type     = "RSA"
  key_size     = 2048

  key_opts = ["encrypt", "decrypt", "sign", "unwrapKey", "verify", "wrapKey"]
}

resource "azurerm_key_vault_certificate" "certificate_default" {
  name         = var.certificate_default_name
  key_vault_id = azurerm_key_vault.keyvault_default.id

  certificate_policy {
    issuer_parameters {
      name = "Self"
    }

    key_properties {
      exportable = true
      key_size   = 2048
      key_type   = "RSA"
      reuse_key  = false
    }

    lifetime_action {
      action {
        action_type = "AutoRenew"
      }

      trigger {
        days_before_expiry = 1
      }
    }

    secret_properties {
      content_type = "application/x-pkcs12"
    }

    x509_certificate_properties {
      # Server Authentication = 1.3.6.1.5.5.7.3.1
      # Client Authentication = 1.3.6.1.5.5.7.3.2
      extended_key_usage = ["1.3.6.1.5.5.7.3.1"]

      key_usage = ["cRLSign", "dataEncipherment", "digitalSignature", "keyAgreement", "keyCertSign", "keyEncipherment"]

      subject_alternative_names {
        dns_names = ["domain.hello.world"]
      }

      subject            = "CN=hello-world"
      validity_in_months = 1

    }
  }
}
