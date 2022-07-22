{
    "time": "2022-06-30T11:57:46.9016004Z",
    "category": "AuditEvent",
    "operationName": "KeyBackup",
    "resultType": "Success",
    "correlationId": "849da738-a615-4018-8d48-e69661d610a5",
    "callerIpAddress": "<Redacted>",
    "identity": {
        "claim": {
            "oid": "30a6c29d-de7c-4830-815f-9b3bb366e975",
            "appid": "04b07795-8ddb-461a-bbee-02f9e1bf7b46",
            "scp": "user_impersonation",
            "upn": "attacker@securathesis.onmicrosoft.com",
            "ipaddr": "<Redacted>",
            "unique_name": "attacker@securathesis.onmicrosoft.com",
            "amr": "pwd"
        }
    },
    "properties": {
        "id": "https://securaallkeyvault.vault.azure.net/keys/SecuraAllRSAKeys",
        "clientInfo": "python/3.8.9 (Windows-10-10.0.19041-SP0) msrest/0.6.21 msrest_azure/0.6.4 azure-keyvault/7.0 Azure-SDK-For-Python",
        "httpStatusCode": 200,
        "requestUri": "https://securaallkeyvault.vault.azure.net/keys/SecuraAllRSAKeys/backup?api-version=7.0",
        "isAccessPolicyMatch": true,
        "keyProperties": {
            "type": "RSA"
        }
    },
    "resourceId": "/SUBSCRIPTIONS/A921D5D4-BDB7-43C3-AA01-88C6AE24992F/RESOURCEGROUPS/SECURAALLRG/PROVIDERS/MICROSOFT.KEYVAULT/VAULTS/SECURAALLKEYVAULT",
    "operationVersion": "7.0",
    "resultSignature": "OK",
    "durationMs": "154"
}