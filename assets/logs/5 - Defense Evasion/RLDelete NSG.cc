{
    "authorization": {
        "action": "microsoft.insights/diagnosticSettings/delete",
        "scope": "/subscriptions/a921d5d4-bdb7-43c3-aa01-88c6ae24992f/resourceGroups/SecuraAllRG/providers/Microsoft.Network/networkSecurityGroups/SecuraAllNetSecGroup/providers/microsoft.insights/diagnosticSettings/All NSG"
    },
    "caller": "attacker@securathesis.onmicrosoft.com",
    "channels": "Operation",
    "claims": {
        "aud": "https://management.core.windows.net/",
        "iss": "https://sts.windows.net/d2af6ef7-a00c-438f-903b-65592cfddc48/",
        "iat": "1656494089",
        "nbf": "1656494089",
        "exp": "1656498115",
        "http://schemas.microsoft.com/claims/authnclassreference": "1",
        "aio": "AVQAq/8TAAAAZ0WXhBUgIZsDvp/MZPlqSBHtGqNAbzyi74xrOBBO0gFXEvqlr8UEKIBn7QnznbAI9wUuF0U/Q7xkqDdZ7J3AhIsICa+Q5n1MQfjpb+5+kak=",
        "http://schemas.microsoft.com/claims/authnmethodsreferences": "pwd,mfa",
        "appid": "c44b4083-3bb0-49c1-b47d-974e53cbdf3c",
        "appidacr": "2",
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
        "uti": "Ws0m1aQ-mEu6CXhN1KMVAA",
        "ver": "1.0",
        "wids": "62e90394-69f5-4237-9190-012177145e10",
        "xms_tcdt": "1648126498"
    },
    "correlationId": "bdeec95c-e18f-4aad-a2f9-014cf0bdf990",
    "description": "",
    "eventDataId": "19b8b1b5-98db-4a59-baa4-984a4b6d8e99",
    "eventName": {
        "value": "BeginRequest",
        "localizedValue": "Begin request"
    },
    "category": {
        "value": "Administrative",
        "localizedValue": "Administrative"
    },
    "eventTimestamp": "2022-06-29T09:45:54.524343Z",
    "id": "/subscriptions/a921d5d4-bdb7-43c3-aa01-88c6ae24992f/resourceGroups/SecuraAllRG/providers/Microsoft.Network/networkSecurityGroups/SecuraAllNetSecGroup/providers/microsoft.insights/diagnosticSettings/All+NSG/events/19b8b1b5-98db-4a59-baa4-984a4b6d8e99/ticks/637920927545243430",
    "level": "Informational",
    "operationId": "bdeec95c-e18f-4aad-a2f9-014cf0bdf990",
    "operationName": {
        "value": "microsoft.insights/diagnosticSettings/delete",
        "localizedValue": "Delete resource diagnostic setting"
    },
    "resourceGroupName": "SecuraAllRG",
    "resourceProviderName": {
        "value": "microsoft.insights",
        "localizedValue": "Microsoft Insights"
    },
    "resourceType": {
        "value": "microsoft.insights/diagnosticSettings",
        "localizedValue": "microsoft.insights/diagnosticSettings"
    },
    "resourceId": "/subscriptions/a921d5d4-bdb7-43c3-aa01-88c6ae24992f/resourceGroups/SecuraAllRG/providers/Microsoft.Network/networkSecurityGroups/SecuraAllNetSecGroup/providers/microsoft.insights/diagnosticSettings/All NSG",
    "status": {
        "value": "Started",
        "localizedValue": "Started"
    },
    "subStatus": {
        "value": "",
        "localizedValue": ""
    },
    "submissionTimestamp": "2022-06-29T09:46:28.3005298Z",
    "subscriptionId": "a921d5d4-bdb7-43c3-aa01-88c6ae24992f",
    "tenantId": "d2af6ef7-a00c-438f-903b-65592cfddc48",
    "properties": {
        "eventCategory": "Administrative",
        "entity": "/subscriptions/a921d5d4-bdb7-43c3-aa01-88c6ae24992f/resourceGroups/SecuraAllRG/providers/Microsoft.Network/networkSecurityGroups/SecuraAllNetSecGroup/providers/microsoft.insights/diagnosticSettings/All NSG",
        "message": "microsoft.insights/diagnosticSettings/delete",
        "hierarchy": "d2af6ef7-a00c-438f-903b-65592cfddc48/a921d5d4-bdb7-43c3-aa01-88c6ae24992f"
    },
    "relatedEvents": []
}