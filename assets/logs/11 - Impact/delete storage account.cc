{
    "authorization": {
        "action": "Microsoft.Storage/storageAccounts/delete",
        "scope": "/subscriptions/a921d5d4-bdb7-43c3-aa01-88c6ae24992f/resourceGroups/SecuraAllRG/providers/Microsoft.Storage/storageAccounts/diag7fff8f1ab8425b12"
    },
    "caller": "attacker@securathesis.onmicrosoft.com",
    "channels": "Operation",
    "claims": {
        "aud": "https://management.core.windows.net/",
        "iss": "https://sts.windows.net/d2af6ef7-a00c-438f-903b-65592cfddc48/",
        "iat": "1657112519",
        "nbf": "1657112519",
        "exp": "1657117018",
        "http://schemas.microsoft.com/claims/authnclassreference": "1",
        "aio": "AVQAq/8TAAAAXX1U1VBwzlMrmjX1crF5dlqKeBdhkYLxCHQxdrVF/MgF3ph6zzJCuTk5cnv9cdzIuDlBWQQ5mzfFgvcBIOf65giOK/ynNnw1O2+F9embi4o=",
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
        "uti": "X2Ug18pxWkiXpZNd9DcgAA",
        "ver": "1.0",
        "wids": "62e90394-69f5-4237-9190-012177145e10,b79fbf4d-3ef9-4689-8143-76b194e85509",
        "xms_tcdt": "1648126498"
    },
    "correlationId": "236394a3-106c-4e9e-80f8-a397aa412a7a",
    "description": "",
    "eventDataId": "12975100-fdca-4cc2-a769-3463ca78db59",
    "eventName": {
        "value": "EndRequest",
        "localizedValue": "End request"
    },
    "category": {
        "value": "Administrative",
        "localizedValue": "Administrative"
    },
    "eventTimestamp": "2022-07-06T13:20:25.004124Z",
    "id": "/subscriptions/a921d5d4-bdb7-43c3-aa01-88c6ae24992f/resourceGroups/SecuraAllRG/providers/Microsoft.Storage/storageAccounts/diag7fff8f1ab8425b12/events/12975100-fdca-4cc2-a769-3463ca78db59/ticks/637927104250041240",
    "level": "Informational",
    "operationId": "236394a3-106c-4e9e-80f8-a397aa412a7a",
    "operationName": {
        "value": "Microsoft.Storage/storageAccounts/delete",
        "localizedValue": "Delete Storage Account"
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
        "value": "Succeeded",
        "localizedValue": "Succeeded"
    },
    "subStatus": {
        "value": "OK",
        "localizedValue": "OK (HTTP Status Code: 200)"
    },
    "submissionTimestamp": "2022-07-06T13:21:58.2347334Z",
    "subscriptionId": "a921d5d4-bdb7-43c3-aa01-88c6ae24992f",
    "tenantId": "d2af6ef7-a00c-438f-903b-65592cfddc48",
    "properties": {
        "statusCode": "OK",
        "serviceRequestId": null,
        "eventCategory": "Administrative",
        "entity": "/subscriptions/a921d5d4-bdb7-43c3-aa01-88c6ae24992f/resourceGroups/SecuraAllRG/providers/Microsoft.Storage/storageAccounts/diag7fff8f1ab8425b12",
        "message": "Microsoft.Storage/storageAccounts/delete",
        "hierarchy": "d2af6ef7-a00c-438f-903b-65592cfddc48/a921d5d4-bdb7-43c3-aa01-88c6ae24992f"
    },
    "relatedEvents": []
}