{
    "authorization": {
        "action": "Microsoft.Compute/virtualMachines/write",
        "scope": "/subscriptions/a921d5d4-bdb7-43c3-aa01-88c6ae24992f/resourcegroups/SecuraDefaultRG/providers/Microsoft.Compute/virtualMachines/MCCIVM"
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
    "correlationId": "adaa4fb0-d4be-4681-84aa-2d159e2fbf67",
    "description": "",
    "eventDataId": "2e59bcd9-becd-43a8-8033-c2bf4abb5378",
    "eventName": {
        "value": "EndRequest",
        "localizedValue": "End request"
    },
    "category": {
        "value": "Administrative",
        "localizedValue": "Administrative"
    },
    "eventTimestamp": "2022-06-27T14:00:40.3207303Z",
    "id": "/subscriptions/a921d5d4-bdb7-43c3-aa01-88c6ae24992f/resourcegroups/SecuraDefaultRG/providers/Microsoft.Compute/virtualMachines/MCCIVM/events/2e59bcd9-becd-43a8-8033-c2bf4abb5378/ticks/637919352403207303",
    "level": "Informational",
    "operationId": "1a393bf7-6012-47a7-90a8-d9a04bcddcb2",
    "operationName": {
        "value": "Microsoft.Compute/virtualMachines/write",
        "localizedValue": "Create or Update Virtual Machine"
    },
    "resourceGroupName": "SecuraDefaultRG",
    "resourceProviderName": {
        "value": "Microsoft.Compute",
        "localizedValue": "Microsoft.Compute"
    },
    "resourceType": {
        "value": "Microsoft.Compute/virtualMachines",
        "localizedValue": "Microsoft.Compute/virtualMachines"
    },
    "resourceId": "/subscriptions/a921d5d4-bdb7-43c3-aa01-88c6ae24992f/resourcegroups/SecuraDefaultRG/providers/Microsoft.Compute/virtualMachines/MCCIVM",
    "status": {
        "value": "Accepted",
        "localizedValue": "Accepted"
    },
    "subStatus": {
        "value": "Created",
        "localizedValue": "Created (HTTP Status Code: 201)"
    },
    "submissionTimestamp": "2022-06-27T14:01:57.2921359Z",
    "subscriptionId": "a921d5d4-bdb7-43c3-aa01-88c6ae24992f",
    "tenantId": "d2af6ef7-a00c-438f-903b-65592cfddc48",
    "properties": {
        "statusCode": "Created",
        "serviceRequestId": null,
        "responseBody": "{\"name\":\"MCCIVM\",\"id\":\"/subscriptions/a921d5d4-bdb7-43c3-aa01-88c6ae24992f/resourceGroups/SecuraDefaultRG/providers/Microsoft.Compute/virtualMachines/MCCIVM\",\"type\":\"Microsoft.Compute/virtualMachines\",\"location\":\"westeurope\",\"tags\":{},\"properties\":{\"vmId\":\"2c0cef58-09d7-4af3-aa2a-ff37bbef9c6b\",\"hardwareProfile\":{\"vmSize\":\"Standard_B1s\"},\"storageProfile\":{\"osDisk\":{\"osType\":\"Linux\",\"name\":\"MCCIDisk\",\"createOption\":\"Attach\",\"caching\":\"ReadWrite\",\"managedDisk\":{\"storageAccountType\":\"Premium_LRS\",\"id\":\"/subscriptions/a921d5d4-bdb7-43c3-aa01-88c6ae24992f/resourceGroups/SecuraDefaultRG/providers/Microsoft.Compute/disks/MCCIDisk\"},\"deleteOption\":\"Detach\",\"diskSizeGB\":64},\"dataDisks\":[]},\"networkProfile\":{\"networkInterfaces\":[{\"id\":\"/subscriptions/a921d5d4-bdb7-43c3-aa01-88c6ae24992f/resourceGroups/SecuraDefaultRG/providers/Microsoft.Network/networkInterfaces/MCCIVMVMNic\"}]},\"provisioningState\":\"Creating\",\"timeCreated\":\"2022-06-27T14:00:40.2000323+00:00\"}}",
        "eventCategory": "Administrative",
        "entity": "/subscriptions/a921d5d4-bdb7-43c3-aa01-88c6ae24992f/resourcegroups/SecuraDefaultRG/providers/Microsoft.Compute/virtualMachines/MCCIVM",
        "message": "Microsoft.Compute/virtualMachines/write",
        "hierarchy": "d2af6ef7-a00c-438f-903b-65592cfddc48/a921d5d4-bdb7-43c3-aa01-88c6ae24992f"
    },
    "relatedEvents": []
}