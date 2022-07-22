{
    "authorization": {
        "action": "Microsoft.Insights/extendedDiagnosticSettings/write",
        "scope": "/subscriptions/a921d5d4-bdb7-43c3-aa01-88c6ae24992f/resourceGroups/SecuraAllRG/providers/Microsoft.Network/networkSecurityGroups/SecuraAllNetSecGroup/providers/Microsoft.Insights/extendedDiagnosticSettings/flowlogs"
    },
    "caller": "1d36607b-0b12-415c-85b4-319f429c4443",
    "channels": "Operation",
    "claims": {
        "aud": "https://management.core.windows.net/",
        "iss": "https://sts.windows.net/d2af6ef7-a00c-438f-903b-65592cfddc48/",
        "iat": "1656406963",
        "nbf": "1656406963",
        "exp": "1656493663",
        "aio": "E2ZgYLD5afzs+r8niyKNLG7fmzX7HAA=",
        "appid": "2cf9eb86-36b5-49dc-86ae-9a63135dfa8c",
        "appidacr": "2",
        "http://schemas.microsoft.com/identity/claims/identityprovider": "https://sts.windows.net/d2af6ef7-a00c-438f-903b-65592cfddc48/",
        "idtyp": "app",
        "http://schemas.microsoft.com/identity/claims/objectidentifier": "1d36607b-0b12-415c-85b4-319f429c4443",
        "rh": "0.AYIA926v0gygj0OQO2VZLP3cSEZIf3kAutdPukPawfj2MBOVAAA.",
        "http://schemas.xmlsoap.org/ws/2005/05/identity/claims/nameidentifier": "1d36607b-0b12-415c-85b4-319f429c4443",
        "http://schemas.microsoft.com/identity/claims/tenantid": "d2af6ef7-a00c-438f-903b-65592cfddc48",
        "uti": "QWpaw9LcGUGEEkl1vMqjAA",
        "ver": "1.0",
        "xms_tcdt": "1648126498"
    },
    "correlationId": "f3e98586-2941-4c31-8e15-d45f0d6688e9",
    "description": "",
    "eventDataId": "e4976267-a636-4def-b485-de398918d953",
    "eventName": {
        "value": "BeginRequest",
        "localizedValue": "Begin request"
    },
    "category": {
        "value": "Administrative",
        "localizedValue": "Administrative"
    },
    "eventTimestamp": "2022-06-28T10:42:33.4125584Z",
    "id": "/subscriptions/a921d5d4-bdb7-43c3-aa01-88c6ae24992f/resourceGroups/SecuraAllRG/providers/Microsoft.Network/networkSecurityGroups/SecuraAllNetSecGroup/providers/Microsoft.Insights/extendedDiagnosticSettings/flowlogs/events/e4976267-a636-4def-b485-de398918d953/ticks/637920097534125584",
    "level": "Informational",
    "operationId": "f3e98586-2941-4c31-8e15-d45f0d6688e9",
    "operationName": {
        "value": "Microsoft.Insights/extendedDiagnosticSettings/write",
        "localizedValue": "Create or update network flow log diagnostic setting"
    },
    "resourceGroupName": "SecuraAllRG",
    "resourceProviderName": {
        "value": "Microsoft.Insights",
        "localizedValue": "Microsoft Insights"
    },
    "resourceType": {
        "value": "Microsoft.Insights/extendedDiagnosticSettings",
        "localizedValue": "Microsoft.Insights/extendedDiagnosticSettings"
    },
    "resourceId": "/subscriptions/a921d5d4-bdb7-43c3-aa01-88c6ae24992f/resourceGroups/SecuraAllRG/providers/Microsoft.Network/networkSecurityGroups/SecuraAllNetSecGroup/providers/Microsoft.Insights/extendedDiagnosticSettings/flowlogs",
    "status": {
        "value": "Started",
        "localizedValue": "Started"
    },
    "subStatus": {
        "value": "",
        "localizedValue": ""
    },
    "submissionTimestamp": "2022-06-28T10:43:35.3137855Z",
    "subscriptionId": "a921d5d4-bdb7-43c3-aa01-88c6ae24992f",
    "tenantId": "d2af6ef7-a00c-438f-903b-65592cfddc48",
    "properties": {
        "requestbody": "{\"properties\":{\"logs\":[{\"category\":\"NetworkSecurityGroupFlowEvent\",\"enabled\":true,\"retentionPolicy\":{\"days\":0,\"enabled\":false}}],\"storageAccountId\":\"/subscriptions/a921d5d4-bdb7-43c3-aa01-88c6ae24992f/resourceGroups/SecuraAllRG/providers/Microsoft.Storage/storageAccounts/diag7fff8f1ab8425b12\"}}",
        "eventCategory": "Administrative",
        "entity": "/subscriptions/a921d5d4-bdb7-43c3-aa01-88c6ae24992f/resourceGroups/SecuraAllRG/providers/Microsoft.Network/networkSecurityGroups/SecuraAllNetSecGroup/providers/Microsoft.Insights/extendedDiagnosticSettings/flowlogs",
        "message": "Microsoft.Insights/extendedDiagnosticSettings/write",
        "hierarchy": "d2af6ef7-a00c-438f-903b-65592cfddc48/a921d5d4-bdb7-43c3-aa01-88c6ae24992f"
    },
    "relatedEvents": []
}