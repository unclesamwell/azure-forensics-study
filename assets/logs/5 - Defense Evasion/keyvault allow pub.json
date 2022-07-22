RL AuditEvent
{
    "time": "2022-06-28T10:02:53.1689554Z",
    "category": "AuditEvent",
    "operationName": "VaultPut",
    "resultType": "Success",
    "correlationId": "9c4e803e-2ab4-47c4-8ef7-04414dd1a9ca",
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
        "httpStatusCode": 200,
        "properties": {
            "sku": {
                "Family": "A",
                "Name": "standard",
                "Capacity": null
            },
            "tenantId": "d2af6ef7-a00c-438f-903b-65592cfddc48",
            "networkAcls": null,
            "enabledForDeployment": false,
            "enabledForDiskEncryption": false,
            "enabledForTemplateDeployment": false,
            "enableSoftDelete": true,
            "softDeleteRetentionInDays": 7,
            "enableRbacAuthorization": false,
            "enablePurgeProtection": null
        }
    },
    "resourceId": "/SUBSCRIPTIONS/A921D5D4-BDB7-43C3-AA01-88C6AE24992F/RESOURCEGROUPS/SECURAALLRG/PROVIDERS/MICROSOFT.KEYVAULT/VAULTS/SECURAALLKEYVAULT",
    "operationVersion": "2021-06-01-preview",
    "resultSignature": "OK",
    "durationMs": "104"
}

And AL
{
    "authorization": {
        "action": "Microsoft.KeyVault/vaults/write",
        "scope": "/subscriptions/a921d5d4-bdb7-43c3-aa01-88c6ae24992f/resourceGroups/SecuraAllRG/providers/Microsoft.KeyVault/vaults/SecuraAllKeyVault"
    },
    "caller": "attacker@securathesis.onmicrosoft.com",
    "channels": "Operation",
    "claims": {
        "aud": "https://management.core.windows.net/",
        "iss": "https://sts.windows.net/d2af6ef7-a00c-438f-903b-65592cfddc48/",
        "iat": "1656409923",
        "nbf": "1656409923",
        "exp": "1656414503",
        "http://schemas.microsoft.com/claims/authnclassreference": "1",
        "aio": "AVQAq/8TAAAANvCyTDSTlnoMfh+8RnPkiG9PSI2oqiopjTIzpgCgoKiaJ2MVl+3rJ23f/AcYDqyc3YBSwd9hF7VUoXdEYiXNo1isbxkKPEiUDpcGzFfgyZI=",
        "http://schemas.microsoft.com/claims/authnmethodsreferences": "pwd,mfa",
        "appid": "04b07795-8ddb-461a-bbee-02f9e1bf7b46",
        "appidacr": "0",
        "http://schemas.xmlsoap.org/ws/2005/05/identity/claims/surname": "Acker",
        "http://schemas.xmlsoap.org/ws/2005/05/identity/claims/givenname": "Att",
        "groups": "f40ae73b-c115-425e-9661-cf5384a00dbb,d25af5e9-4710-4572-a27f-0ff919ed7393",
        "ipaddr": "<Redacted>",
        "name": "Attacker",
        "http://schemas.microsoft.com/identity/claims/objectidentifier": "30a6c29d-de7c-4830-815f-9b3bb366e975",
        "puid": "10032001FC4BF75D",
        "rh": "0.AYIA926v0gygj0OQO2VZLP3cSEZIf3kAutdPukPawfj2MBOVAD4.",
        "http://schemas.microsoft.com/identity/claims/scope": "user_impersonation",
        "http://schemas.xmlsoap.org/ws/2005/05/identity/claims/nameidentifier": "vPoDKfEPCnaUYrZC60q_jOV3G7-vLh-S69ByM7pVNUc",
        "http://schemas.microsoft.com/identity/claims/tenantid": "d2af6ef7-a00c-438f-903b-65592cfddc48",
        "http://schemas.xmlsoap.org/ws/2005/05/identity/claims/name": "attacker@securathesis.onmicrosoft.com",
        "http://schemas.xmlsoap.org/ws/2005/05/identity/claims/upn": "attacker@securathesis.onmicrosoft.com",
        "uti": "mSPCmd9eL0S5mpom8vUVAA",
        "ver": "1.0",
        "wids": "62e90394-69f5-4237-9190-012177145e10,b79fbf4d-3ef9-4689-8143-76b194e85509",
        "xms_tcdt": "1648126498"
    },
    "correlationId": "421ca860-8727-4566-b317-ec001f0f57ad",
    "description": "",
    "eventDataId": "b4d26d96-3f3e-4f9a-a9d9-8496a07b4f78",
    "eventName": {
        "value": "EndRequest",
        "localizedValue": "End request"
    },
    "category": {
        "value": "Administrative",
        "localizedValue": "Administrative"
    },
    "eventTimestamp": "2022-06-28T10:02:53.1725139Z",
    "id": "/subscriptions/a921d5d4-bdb7-43c3-aa01-88c6ae24992f/resourceGroups/SecuraAllRG/providers/Microsoft.KeyVault/vaults/SecuraAllKeyVault/events/b4d26d96-3f3e-4f9a-a9d9-8496a07b4f78/ticks/637920073731725139",
    "level": "Informational",
    "operationId": "421ca860-8727-4566-b317-ec001f0f57ad",
    "operationName": {
        "value": "Microsoft.KeyVault/vaults/write",
        "localizedValue": "Update Key Vault"
    },
    "resourceGroupName": "SecuraAllRG",
    "resourceProviderName": {
        "value": "Microsoft.KeyVault",
        "localizedValue": "Microsoft.KeyVault"
    },
    "resourceType": {
        "value": "Microsoft.KeyVault/vaults",
        "localizedValue": "Microsoft.KeyVault/vaults"
    },
    "resourceId": "/subscriptions/a921d5d4-bdb7-43c3-aa01-88c6ae24992f/resourceGroups/SecuraAllRG/providers/Microsoft.KeyVault/vaults/SecuraAllKeyVault",
    "status": {
        "value": "Succeeded",
        "localizedValue": "Succeeded"
    },
    "subStatus": {
        "value": "OK",
        "localizedValue": "OK (HTTP Status Code: 200)"
    },
    "submissionTimestamp": "2022-06-28T10:03:59.1962682Z",
    "subscriptionId": "a921d5d4-bdb7-43c3-aa01-88c6ae24992f",
    "tenantId": "d2af6ef7-a00c-438f-903b-65592cfddc48",
    "properties": {
        "statusCode": "OK",
        "serviceRequestId": null,
        "eventCategory": "Administrative",
        "entity": "/subscriptions/a921d5d4-bdb7-43c3-aa01-88c6ae24992f/resourceGroups/SecuraAllRG/providers/Microsoft.KeyVault/vaults/SecuraAllKeyVault",
        "message": "Microsoft.KeyVault/vaults/write",
        "hierarchy": "d2af6ef7-a00c-438f-903b-65592cfddc48/a921d5d4-bdb7-43c3-aa01-88c6ae24992f"
    },
    "relatedEvents": []
}