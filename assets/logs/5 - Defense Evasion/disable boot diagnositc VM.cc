{
    "authorization": {
        "action": "Microsoft.Compute/virtualMachines/write",
        "scope": "/subscriptions/a921d5d4-bdb7-43c3-aa01-88c6ae24992f/resourceGroups/SecuraAllRG/providers/Microsoft.Compute/virtualMachines/SecuraAllVM"
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
    "correlationId": "e961b421-ebbf-4df8-b02a-a937e6613c7b",
    "description": "",
    "eventDataId": "d1d198db-9060-4ca0-99d1-2baa7f8dca5b",
    "eventName": {
        "value": "EndRequest",
        "localizedValue": "End request"
    },
    "category": {
        "value": "Administrative",
        "localizedValue": "Administrative"
    },
    "eventTimestamp": "2022-06-29T09:54:09.5225761Z",
    "id": "/subscriptions/a921d5d4-bdb7-43c3-aa01-88c6ae24992f/resourceGroups/SecuraAllRG/providers/Microsoft.Compute/virtualMachines/SecuraAllVM/events/d1d198db-9060-4ca0-99d1-2baa7f8dca5b/ticks/637920932495225761",
    "level": "Informational",
    "operationId": "e961b421-ebbf-4df8-b02a-a937e6613c7b",
    "operationName": {
        "value": "Microsoft.Compute/virtualMachines/write",
        "localizedValue": "Create or Update Virtual Machine"
    },
    "resourceGroupName": "SecuraAllRG",
    "resourceProviderName": {
        "value": "Microsoft.Compute",
        "localizedValue": "Microsoft.Compute"
    },
    "resourceType": {
        "value": "Microsoft.Compute/virtualMachines",
        "localizedValue": "Microsoft.Compute/virtualMachines"
    },
    "resourceId": "/subscriptions/a921d5d4-bdb7-43c3-aa01-88c6ae24992f/resourceGroups/SecuraAllRG/providers/Microsoft.Compute/virtualMachines/SecuraAllVM",
    "status": {
        "value": "Accepted",
        "localizedValue": "Accepted"
    },
    "subStatus": {
        "value": "OK",
        "localizedValue": "OK (HTTP Status Code: 200)"
    },
    "submissionTimestamp": "2022-06-29T09:55:27.1885526Z",
    "subscriptionId": "a921d5d4-bdb7-43c3-aa01-88c6ae24992f",
    "tenantId": "d2af6ef7-a00c-438f-903b-65592cfddc48",
    "properties": {
        "statusCode": "OK",
        "serviceRequestId": null,
        "responseBody": "{\"name\":\"SecuraAllVM\",\"id\":\"/subscriptions/a921d5d4-bdb7-43c3-aa01-88c6ae24992f/resourceGroups/SecuraAllRG/providers/Microsoft.Compute/virtualMachines/SecuraAllVM\",\"type\":\"Microsoft.Compute/virtualMachines\",\"location\":\"westeurope\",\"tags\":{},\"properties\":{\"vmId\":\"9857d109-29e0-4c2d-a6fc-eb790cc9c351\",\"hardwareProfile\":{\"vmSize\":\"Standard_B1s\"},\"storageProfile\":{\"imageReference\":{\"publisher\":\"Canonical\",\"offer\":\"UbuntuServer\",\"sku\":\"18.04-LTS\",\"version\":\"latest\",\"exactVersion\":\"18.04.202206230\"},\"osDisk\":{\"osType\":\"Linux\",\"name\":\"allOSDisk\",\"createOption\":\"FromImage\",\"caching\":\"ReadWrite\",\"writeAcceleratorEnabled\":false,\"managedDisk\":{\"storageAccountType\":\"Premium_LRS\",\"id\":\"/subscriptions/a921d5d4-bdb7-43c3-aa01-88c6ae24992f/resourceGroups/SecuraAllRG/providers/Microsoft.Compute/disks/allOSDisk\"},\"deleteOption\":\"Detach\",\"diskSizeGB\":64},\"dataDisks\":[]},\"osProfile\":{\"computerName\":\"securaall\",\"adminUsername\":\"securaall\",\"linuxConfiguration\":{\"disablePasswordAuthentication\":true,\"ssh\":{\"publicKeys\":[{\"path\":\"/home/securaall/.ssh/authorized_keys\",\"keyData\":\"ssh-rsa AAAAB3NzaC1yc2EAAAADAQABAAABgQDBx5d5OLRnruzee94dSYZ+TNcs5JjCKS0XH2ThlpIOPyX2CWBLiU2cTFZKxPnPIy5vbw5+loCxlyy0udf8PlP9Naq3ehoh114U/FY5IyDx/omOe7ivj4cXBQ9sC6rKkk5s5vpHvZXFAIaHLdzpYi5FodYp5RWBZ/spiVgZR4AUaoYeW9KEgqu6nWPLK7cVB7Tk3XzO5lsuS8YLVfTRO+E+pGeGGsi9qmw7VRu9541hDSBnJePO2CRWGvLz+3RtnzvJn/TVG1q2Mzx4aGrnz1j3hi1ss3rT80Bya56iuwsesXDrE2hJ0hDMGWTZUySsTm2ZqBu6pO7SIKtXX8HDmGebgu2POP76vK8aKCN0CVspGO4I3gq5Xc2KRipdKjAvAdtc1qzImAegNnarCFmlLYZ0557v5S6r/bbl0btqh98jZ5AzKcUcs8yyq7EbnB9K7zWT4gCk8wu2/GYydXX0kHznOlWAALDZ6X8gLpQk+nW2AvOMhmE01BkHjskblkryIkk= intern\\\\s.cantineau@Secura-PF233KZN\\r\\n\"}]},\"provisionVMAgent\":true,\"patchSettings\":{\"patchMode\":\"ImageDefault\",\"assessmentMode\":\"ImageDefault\"}},\"secrets\":[],\"allowExtensionOperations\":true,\"requireGuestProvisionSignal\":true},\"networkProfile\":{\"networkInterfaces\":[{\"id\":\"/subscriptions/a921d5d4-bdb7-43c3-aa01-88c6ae24992f/resourceGroups/SecuraAllRG/providers/Microsoft.Network/networkInterfaces/SecuraAllInterface\",\"properties\":{\"primary\":true}}]},\"diagnosticsProfile\":{\"bootDiagnostics\":{\"enabled\":false,\"storageUri\":\"https://diag7fff8f1ab8425b12.blob.core.windows.net/\"}},\"provisioningState\":\"Updating\",\"priority\":\"Regular\",\"extensionsTimeBudget\":\"PT1H30M\"},\"resources\":[{\"name\":\"DependencyAgent\",\"id\":\"/subscriptions/a921d5d4-bdb7-43c3-aa01-88c6ae24992f/resourceGroups/SecuraAllRG/providers/Microsoft.Compute/virtualMachines/SecuraAllVM/extensions/DependencyAgent\",\"type\":\"Microsoft.Compute/virtualMachines/extensions\",\"location\":\"westeurope\",\"tags\":{},\"properties\":{\"autoUpgradeMinorVersion\":true,\"provisioningState\":\"Succeeded\",\"enableAutomaticUpgrade\":true,\"publisher\":\"Microsoft.Azure.Monitoring.DependencyAgent\",\"type\":\"DependencyAgentLinux\",\"typeHandlerVersion\":\"9.10\"}},{\"name\":\"OMSExtension\",\"id\":\"/subscriptions/a921d5d4-bdb7-43c3-aa01-88c6ae24992f/resourceGroups/SecuraAllRG/providers/Microsoft.Compute/virtualMachines/SecuraAllVM/extensions/OMSExtension\",\"type\":\"Microsoft.Compute/virtualMachines/extensions\",\"location\":\"westeurope\",\"tags\":{},\"properties\":{\"autoUpgradeMinorVersion\":true,\"provisioningState\":\"Succeeded\",\"enableAutomaticUpgrade\":false,\"publisher\":\"Microsoft.EnterpriseCloud.Monitoring\",\"type\":\"OmsAgentForLinux\",\"typeHandlerVersion\":\"1.14\",\"settings\":\"******\"}}]}",
        "eventCategory": "Administrative",
        "entity": "/subscriptions/a921d5d4-bdb7-43c3-aa01-88c6ae24992f/resourceGroups/SecuraAllRG/providers/Microsoft.Compute/virtualMachines/SecuraAllVM",
        "message": "Microsoft.Compute/virtualMachines/write",
        "hierarchy": "d2af6ef7-a00c-438f-903b-65592cfddc48/a921d5d4-bdb7-43c3-aa01-88c6ae24992f"
    },
    "relatedEvents": []
}