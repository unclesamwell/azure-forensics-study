{
    "time": "2022-06-30T11:59:25.4111792Z",
    "category": "AuditEvent",
    "operationName": "SecretGet",
    "resultType": "Success",
    "correlationId": "1e00f8e4-d4c8-46fe-ba9b-3863dde1ff54",
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
        "id": "https://securaallkeyvault.vault.azure.net/secrets/SecuraAllSecret/4c39bacace9a49b2bd542ce61bd6f312",
        "clientInfo": "python/3.8.9 (Windows-10-10.0.19041-SP0) msrest/0.6.21 msrest_azure/0.6.4 azure-keyvault/7.0 Azure-SDK-For-Python",
        "httpStatusCode": 200,
        "requestUri": "https://securaallkeyvault.vault.azure.net/secrets/SecuraAllSecret/?api-version=7.0",
        "isAccessPolicyMatch": true
    },
    "resourceId": "/SUBSCRIPTIONS/A921D5D4-BDB7-43C3-AA01-88C6AE24992F/RESOURCEGROUPS/SECURAALLRG/PROVIDERS/MICROSOFT.KEYVAULT/VAULTS/SECURAALLKEYVAULT",
    "operationVersion": "7.0",
    "resultSignature": "OK",
    "durationMs": "9"
}