{
    "time": "2022-06-28T10:03:34.5532555Z",
    "category": "AuditEvent",
    "operationName": "VaultPut",
    "resultType": "Success",
    "correlationId": "c41545ac-99bc-4318-8563-bc7f683d618e",
    "callerIpAddress": "<Redacted>",
    "identity": {
        "claim": {
            "http://schemas.microsoft.com/identity/claims/objectidentifier": "30a6c29d-de7c-4830-815f-9b3bb366e975",
            "http://schemas.xmlsoap.org/ws/2005/05/identity/claims/upn": "attacker@securathesis.onmicrosoft.com",
            "http://schemas.xmlsoap.org/ws/2005/05/identity/claims/name": "attacker@securathesis.onmicrosoft.com",
            "appid": "04b07795-8ddb-461a-bbee-02f9e1bf7b46"
        }
    },
    "properties": {
        "id": "https://securaallkeyvault.vault.azure.net/",
        "clientInfo": "AZURECLI/2.34.1",
        "requestUri": "https://management.azure.com/subscriptions/a921d5d4-bdb7-43c3-aa01-88c6ae24992f/resourceGroups/SecuraAllRG/providers/Microsoft.KeyVault/vaults/SecuraAllKeyVault?api-version=2021-06-01-preview",
        "addedIpRule": {
            "Value": "1.1.1.1/32"
        }
    },
    "resourceId": "/SUBSCRIPTIONS/A921D5D4-BDB7-43C3-AA01-88C6AE24992F/RESOURCEGROUPS/SECURAALLRG/PROVIDERS/MICROSOFT.KEYVAULT/VAULTS/SECURAALLKEYVAULT",
    "operationVersion": "2021-06-01-preview",
    "durationMs": "0"
}