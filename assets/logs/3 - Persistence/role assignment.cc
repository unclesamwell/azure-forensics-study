{
    "authorization": {
        "action": "Microsoft.Authorization/roleAssignments/write",
        "scope": "/subscriptions/a921d5d4-bdb7-43c3-aa01-88c6ae24992f"
    },
    "caller": "attacker@securathesis.onmicrosoft.com",
    "channels": "Operation",
    "claims": {
        "aud": "https://management.core.windows.net/",
        "iss": "https://sts.windows.net/d2af6ef7-a00c-438f-903b-65592cfddc48/",
        "iat": "1656322025",
        "nbf": "1656322025",
        "exp": "1656326513",
        "http://schemas.microsoft.com/claims/authnclassreference": "1",
        "aio": "AVQAq/8TAAAAe6VZIqXpqzNI0o8UTJULiflmoq5mI4yKDvTcDYYivg1gkMoTMSo/60JzzzY/B3is6qxhbZxHN/ApstWs54sujg/tNjC11urU47Tx1LUxJi4=",
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
        "uti": "KZiMcLvpyEOJosddEYhXAA",
        "ver": "1.0",
        "wids": "62e90394-69f5-4237-9190-012177145e10,b79fbf4d-3ef9-4689-8143-76b194e85509",
        "xms_tcdt": "1648126498"
    },
    "correlationId": "c390f564-a524-4b89-8ddb-72dea9514a0b",
    "description": "",
    "eventDataId": "22dcc8b1-89d3-44f7-aece-1ae92797747e",
    "eventName": {
        "value": "BeginRequest",
        "localizedValue": "Begin request"
    },
    "category": {
        "value": "Administrative",
        "localizedValue": "Administrative"
    },
    "eventTimestamp": "2022-06-27T10:07:27.3432885Z",
    "id": "/subscriptions/a921d5d4-bdb7-43c3-aa01-88c6ae24992f/providers/Microsoft.Authorization/roleAssignments/9d1a8b58-993d-45f1-b279-c079cd810ffa/events/22dcc8b1-89d3-44f7-aece-1ae92797747e/ticks/637919212473432885",
    "level": "Informational",
    "operationId": "c390f564-a524-4b89-8ddb-72dea9514a0b",
    "operationName": {
        "value": "Microsoft.Authorization/roleAssignments/write",
        "localizedValue": "Create role assignment"
    },
    "resourceGroupName": "",
    "resourceProviderName": {
        "value": "Microsoft.Authorization",
        "localizedValue": "Microsoft.Authorization"
    },
    "resourceType": {
        "value": "Microsoft.Authorization/roleAssignments",
        "localizedValue": "Microsoft.Authorization/roleAssignments"
    },
    "resourceId": "/subscriptions/a921d5d4-bdb7-43c3-aa01-88c6ae24992f/providers/Microsoft.Authorization/roleAssignments/9d1a8b58-993d-45f1-b279-c079cd810ffa",
    "status": {
        "value": "Started",
        "localizedValue": "Started"
    },
    "subStatus": {
        "value": "",
        "localizedValue": ""
    },
    "submissionTimestamp": "2022-06-27T10:09:15.2063209Z",
    "subscriptionId": "a921d5d4-bdb7-43c3-aa01-88c6ae24992f",
    "tenantId": "d2af6ef7-a00c-438f-903b-65592cfddc48",
    "properties": {
        "requestbody": "{\"properties\":{\"roleDefinitionId\":\"/subscriptions/a921d5d4-bdb7-43c3-aa01-88c6ae24992f/providers/Microsoft.Authorization/roleDefinitions/eeaeda52-9324-47f6-8069-5d5bade478b2\",\"principalId\":\"8c907101-5831-45a1-b703-8a59f190e639\",\"principalType\":\"ServicePrincipal\"}}",
        "eventCategory": "Administrative",
        "entity": "/subscriptions/a921d5d4-bdb7-43c3-aa01-88c6ae24992f/providers/Microsoft.Authorization/roleAssignments/9d1a8b58-993d-45f1-b279-c079cd810ffa",
        "message": "Microsoft.Authorization/roleAssignments/write",
        "hierarchy": "d2af6ef7-a00c-438f-903b-65592cfddc48/a921d5d4-bdb7-43c3-aa01-88c6ae24992f"
    },
    "relatedEvents": []
}