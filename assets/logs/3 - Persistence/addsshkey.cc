{
    "authorization": {
        "action": "Microsoft.Compute/virtualMachines/extensions/write",
        "scope": "/subscriptions/a921d5d4-bdb7-43c3-aa01-88c6ae24992f/resourceGroups/SecuraDefaultRG/providers/Microsoft.Compute/virtualMachines/SecuraDefaultVM/extensions/enablevmaccess"
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
    "correlationId": "36fcae54-210d-47aa-ad6b-b054a6222f34",
    "description": "",
    "eventDataId": "53eb511c-85ce-4886-b393-995da4158723",
    "eventName": {
        "value": "EndRequest",
        "localizedValue": "End request"
    },
    "category": {
        "value": "Administrative",
        "localizedValue": "Administrative"
    },
    "eventTimestamp": "2022-06-27T10:10:08.6414296Z",
    "id": "/subscriptions/a921d5d4-bdb7-43c3-aa01-88c6ae24992f/resourceGroups/SecuraDefaultRG/providers/Microsoft.Compute/virtualMachines/SecuraDefaultVM/extensions/enablevmaccess/events/53eb511c-85ce-4886-b393-995da4158723/ticks/637919214086414296",
    "level": "Informational",
    "operationId": "36fcae54-210d-47aa-ad6b-b054a6222f34",
    "operationName": {
        "value": "Microsoft.Compute/virtualMachines/extensions/write",
        "localizedValue": "Create or Update Virtual Machine Extension"
    },
    "resourceGroupName": "SecuraDefaultRG",
    "resourceProviderName": {
        "value": "Microsoft.Compute",
        "localizedValue": "Microsoft.Compute"
    },
    "resourceType": {
        "value": "Microsoft.Compute/virtualMachines/extensions",
        "localizedValue": "Microsoft.Compute/virtualMachines/extensions"
    },
    "resourceId": "/subscriptions/a921d5d4-bdb7-43c3-aa01-88c6ae24992f/resourceGroups/SecuraDefaultRG/providers/Microsoft.Compute/virtualMachines/SecuraDefaultVM/extensions/enablevmaccess",
    "status": {
        "value": "Accepted",
        "localizedValue": "Accepted"
    },
    "subStatus": {
        "value": "Created",
        "localizedValue": "Created (HTTP Status Code: 201)"
    },
    "submissionTimestamp": "2022-06-27T10:11:22.2544588Z",
    "subscriptionId": "a921d5d4-bdb7-43c3-aa01-88c6ae24992f",
    "tenantId": "d2af6ef7-a00c-438f-903b-65592cfddc48",
    "properties": {
        "statusCode": "Created",
        "serviceRequestId": null,
        "responseBody": "{\"name\":\"enablevmaccess\",\"id\":\"/subscriptions/a921d5d4-bdb7-43c3-aa01-88c6ae24992f/resourceGroups/SecuraDefaultRG/providers/Microsoft.Compute/virtualMachines/SecuraDefaultVM/extensions/enablevmaccess\",\"type\":\"Microsoft.Compute/virtualMachines/extensions\",\"location\":\"westeurope\",\"properties\":{\"autoUpgradeMinorVersion\":false,\"provisioningState\":\"Creating\",\"publisher\":\"Microsoft.OSTCExtensions\",\"type\":\"VMAccessForLinux\",\"typeHandlerVersion\":\"1.5\",\"settings\":\"******\"}}",
        "eventCategory": "Administrative",
        "entity": "/subscriptions/a921d5d4-bdb7-43c3-aa01-88c6ae24992f/resourceGroups/SecuraDefaultRG/providers/Microsoft.Compute/virtualMachines/SecuraDefaultVM/extensions/enablevmaccess",
        "message": "Microsoft.Compute/virtualMachines/extensions/write",
        "hierarchy": "d2af6ef7-a00c-438f-903b-65592cfddc48/a921d5d4-bdb7-43c3-aa01-88c6ae24992f"
    },
    "relatedEvents": []
}