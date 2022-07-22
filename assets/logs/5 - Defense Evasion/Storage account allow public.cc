{
    "authorization": {
        "action": "Microsoft.Storage/storageAccounts/write",
        "scope": "/subscriptions/a921d5d4-bdb7-43c3-aa01-88c6ae24992f/resourceGroups/SecuraAllRG/providers/Microsoft.Storage/storageAccounts/diag7fff8f1ab8425b12"
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
    "correlationId": "807dd266-d225-49d3-85af-7d0f410ecc8c",
    "description": "",
    "eventDataId": "6c7d813b-f168-4153-a298-f739be594877",
    "eventName": {
        "value": "BeginRequest",
        "localizedValue": "Begin request"
    },
    "category": {
        "value": "Administrative",
        "localizedValue": "Administrative"
    },
    "eventTimestamp": "2022-06-28T10:05:18.8858964Z",
    "id": "/subscriptions/a921d5d4-bdb7-43c3-aa01-88c6ae24992f/resourceGroups/SecuraAllRG/providers/Microsoft.Storage/storageAccounts/diag7fff8f1ab8425b12/events/6c7d813b-f168-4153-a298-f739be594877/ticks/637920075188858964",
    "level": "Informational",
    "operationId": "807dd266-d225-49d3-85af-7d0f410ecc8c",
    "operationName": {
        "value": "Microsoft.Storage/storageAccounts/write",
        "localizedValue": "Create/Update Storage Account"
    },
    "resourceGroupName": "SecuraAllRG",
    "resourceProviderName": {
        "value": "Microsoft.Storage",
        "localizedValue": "Microsoft.Storage"
    },
    "resourceType": {
        "value": "Microsoft.Storage/storageAccounts",
        "localizedValue": "Microsoft.Storage/storageAccounts"
    },
    "resourceId": "/subscriptions/a921d5d4-bdb7-43c3-aa01-88c6ae24992f/resourceGroups/SecuraAllRG/providers/Microsoft.Storage/storageAccounts/diag7fff8f1ab8425b12",
    "status": {
        "value": "Started",
        "localizedValue": "Started"
    },
    "subStatus": {
        "value": "",
        "localizedValue": ""
    },
    "submissionTimestamp": "2022-06-28T10:06:27.353384Z",
    "subscriptionId": "a921d5d4-bdb7-43c3-aa01-88c6ae24992f",
    "tenantId": "d2af6ef7-a00c-438f-903b-65592cfddc48",
    "properties": {
        "requestbody": "{\"sku\":{\"name\":\"Standard_LRS\"},\"tags\":\"******\",\"properties\":{\"encryption\":{\"services\":{\"blob\":{\"enabled\":true,\"keyType\":\"Account\"},\"file\":{\"enabled\":true,\"keyType\":\"Account\"}},\"keySource\":\"Microsoft.Storage\"},\"accessTier\":\"Hot\",\"supportsHttpsTrafficOnly\":true,\"networkAcls\":{\"bypass\":\"AzureServices\",\"virtualNetworkRules\":[],\"ipRules\":[],\"defaultAction\":\"Allow\"},\"publicNetworkAccess\":\"Enabled\"}}",
        "eventCategory": "Administrative",
        "entity": "/subscriptions/a921d5d4-bdb7-43c3-aa01-88c6ae24992f/resourceGroups/SecuraAllRG/providers/Microsoft.Storage/storageAccounts/diag7fff8f1ab8425b12",
        "message": "Microsoft.Storage/storageAccounts/write",
        "hierarchy": "d2af6ef7-a00c-438f-903b-65592cfddc48/a921d5d4-bdb7-43c3-aa01-88c6ae24992f"
    },
    "relatedEvents": []
}