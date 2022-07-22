{
    "authorization": {
        "action": "Microsoft.Network/networkSecurityGroups/securityRules/write",
        "scope": "/subscriptions/a921d5d4-bdb7-43c3-aa01-88c6ae24992f/resourceGroups/SecuraAllRG/providers/Microsoft.Network/networkSecurityGroups/SecuraAllNetSecGroup/securityRules/AllowAllInbound"
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
    "correlationId": "907d49da-14d0-4793-bb44-e571f92af2a4",
    "description": "",
    "eventDataId": "d48b1900-4ef2-4f3b-96c4-d946589751b5",
    "eventName": {
        "value": "BeginRequest",
        "localizedValue": "Begin request"
    },
    "category": {
        "value": "Administrative",
        "localizedValue": "Administrative"
    },
    "eventTimestamp": "2022-06-28T09:58:30.8803576Z",
    "id": "/subscriptions/a921d5d4-bdb7-43c3-aa01-88c6ae24992f/resourceGroups/SecuraAllRG/providers/Microsoft.Network/networkSecurityGroups/SecuraAllNetSecGroup/securityRules/AllowAllInbound/events/d48b1900-4ef2-4f3b-96c4-d946589751b5/ticks/637920071108803576",
    "level": "Informational",
    "operationId": "907d49da-14d0-4793-bb44-e571f92af2a4",
    "operationName": {
        "value": "Microsoft.Network/networkSecurityGroups/securityRules/write",
        "localizedValue": "Create or Update Security Rule"
    },
    "resourceGroupName": "SecuraAllRG",
    "resourceProviderName": {
        "value": "Microsoft.Network",
        "localizedValue": "Microsoft.Network"
    },
    "resourceType": {
        "value": "Microsoft.Network/networkSecurityGroups/securityRules",
        "localizedValue": "Microsoft.Network/networkSecurityGroups/securityRules"
    },
    "resourceId": "/subscriptions/a921d5d4-bdb7-43c3-aa01-88c6ae24992f/resourceGroups/SecuraAllRG/providers/Microsoft.Network/networkSecurityGroups/SecuraAllNetSecGroup/securityRules/AllowAllInbound",
    "status": {
        "value": "Started",
        "localizedValue": "Started"
    },
    "subStatus": {
        "value": "",
        "localizedValue": ""
    },
    "submissionTimestamp": "2022-06-28T09:59:24.2845566Z",
    "subscriptionId": "a921d5d4-bdb7-43c3-aa01-88c6ae24992f",
    "tenantId": "d2af6ef7-a00c-438f-903b-65592cfddc48",
    "properties": {
        "requestbody": "{\"name\":\"AllowAllInbound\",\"properties\":{\"protocol\":\"*\",\"sourcePortRange\":\"*\",\"destinationPortRange\":\"*\",\"sourceAddressPrefix\":\"*\",\"destinationAddressPrefix\":\"*\",\"access\":\"Allow\",\"priority\":100,\"direction\":\"Inbound\"}}",
        "eventCategory": "Administrative",
        "entity": "/subscriptions/a921d5d4-bdb7-43c3-aa01-88c6ae24992f/resourceGroups/SecuraAllRG/providers/Microsoft.Network/networkSecurityGroups/SecuraAllNetSecGroup/securityRules/AllowAllInbound",
        "message": "Microsoft.Network/networkSecurityGroups/securityRules/write",
        "hierarchy": "d2af6ef7-a00c-438f-903b-65592cfddc48/a921d5d4-bdb7-43c3-aa01-88c6ae24992f"
    },
    "relatedEvents": []
}