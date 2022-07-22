{
    "authorization": {
        "action": "Microsoft.Compute/snapshots/write",
        "scope": "/subscriptions/a921d5d4-bdb7-43c3-aa01-88c6ae24992f/resourceGroups/SecuraDefaultRG/providers/Microsoft.Compute/snapshots/MCCISnapshot"
    },
    "caller": "attacker@securathesis.onmicrosoft.com",
    "channels": "Operation",
    "claims": {
        "aud": "https://management.core.windows.net/",
        "iss": "https://sts.windows.net/d2af6ef7-a00c-438f-903b-65592cfddc48/",
        "iat": "1656338037",
        "nbf": "1656338037",
        "exp": "1656343124",
        "http://schemas.microsoft.com/claims/authnclassreference": "1",
        "aio": "AVQAq/8TAAAAcw0hR1BqYN0pDkV46YwdNCLlxkIyC/CdHoQxYJU70DoFphRQJH46Xj5ws0oYAFBENj8l7qbM9ZejgJz3N83m4xbSuGzUpgf8kAZhTuC5VkY=",
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
        "uti": "Eov3KaVfCkix9vJihgvGAA",
        "ver": "1.0",
        "wids": "62e90394-69f5-4237-9190-012177145e10,b79fbf4d-3ef9-4689-8143-76b194e85509",
        "xms_tcdt": "1648126498"
    },
    "correlationId": "9bb5d59e-b399-41b7-bf62-f54e38313b0f",
    "description": "",
    "eventDataId": "767945ce-86d1-4a1b-b9bf-41ff08932d7a",
    "eventName": {
        "value": "EndRequest",
        "localizedValue": "End request"
    },
    "category": {
        "value": "Administrative",
        "localizedValue": "Administrative"
    },
    "eventTimestamp": "2022-06-27T13:58:59.1338922Z",
    "id": "/subscriptions/a921d5d4-bdb7-43c3-aa01-88c6ae24992f/resourceGroups/SecuraDefaultRG/providers/Microsoft.Compute/snapshots/MCCISnapshot/events/767945ce-86d1-4a1b-b9bf-41ff08932d7a/ticks/637919351391338922",
    "level": "Informational",
    "operationId": "9bb5d59e-b399-41b7-bf62-f54e38313b0f",
    "operationName": {
        "value": "Microsoft.Compute/snapshots/write",
        "localizedValue": "Create or Update Snapshot"
    },
    "resourceGroupName": "SecuraDefaultRG",
    "resourceProviderName": {
        "value": "Microsoft.Compute",
        "localizedValue": "Microsoft.Compute"
    },
    "resourceType": {
        "value": "Microsoft.Compute/snapshots",
        "localizedValue": "Microsoft.Compute/snapshots"
    },
    "resourceId": "/subscriptions/a921d5d4-bdb7-43c3-aa01-88c6ae24992f/resourceGroups/SecuraDefaultRG/providers/Microsoft.Compute/snapshots/MCCISnapshot",
    "status": {
        "value": "Accepted",
        "localizedValue": "Accepted"
    },
    "subStatus": {
        "value": "Accepted",
        "localizedValue": "Accepted (HTTP Status Code: 202)"
    },
    "submissionTimestamp": "2022-06-27T13:59:41.175207Z",
    "subscriptionId": "a921d5d4-bdb7-43c3-aa01-88c6ae24992f",
    "tenantId": "d2af6ef7-a00c-438f-903b-65592cfddc48",
    "properties": {
        "statusCode": "Accepted",
        "serviceRequestId": null,
        "responseBody": "{\"location\":\"westeurope\",\"tags\":{},\"sku\":{\"name\":\"Standard_LRS\"},\"properties\":{\"osType\":\"Linux\",\"hyperVGeneration\":\"V1\",\"supportsHibernation\":false,\"supportedCapabilities\":{\"acceleratedNetwork\":true,\"architecture\":\"x64\"},\"creationData\":{\"createOption\":\"Copy\",\"sourceResourceId\":\"/subscriptions/a921d5d4-bdb7-43c3-aa01-88c6ae24992f/resourceGroups/SecuraDefaultRG/providers/Microsoft.Compute/disks/defaultOSDisk\",\"sourceUniqueId\":\"d846f77f-d952-4d57-b05d-e1d6ffad286f\"},\"publicNetworkAccess\":\"Enabled\",\"provisioningState\":\"Updating\",\"isArmResource\":true,\"osState\":\"Generalized\"}}",
        "eventCategory": "Administrative",
        "entity": "/subscriptions/a921d5d4-bdb7-43c3-aa01-88c6ae24992f/resourceGroups/SecuraDefaultRG/providers/Microsoft.Compute/snapshots/MCCISnapshot",
        "message": "Microsoft.Compute/snapshots/write",
        "hierarchy": "d2af6ef7-a00c-438f-903b-65592cfddc48/a921d5d4-bdb7-43c3-aa01-88c6ae24992f"
    },
    "relatedEvents": []
}