{
    "authorization": {
        "action": "Microsoft.DocumentDB/databaseAccounts/sqlDatabases/containers/delete",
        "scope": "/subscriptions/a921d5d4-bdb7-43c3-aa01-88c6ae24992f/resourceGroups/SecuraAllRG/providers/Microsoft.DocumentDB/databaseAccounts/securacosmosdb/sqlDatabases/All Database/containers/Users"
    },
    "caller": "attacker@securathesis.onmicrosoft.com",
    "channels": "Operation",
    "claims": {
        "aud": "https://management.core.windows.net/",
        "iss": "https://sts.windows.net/d2af6ef7-a00c-438f-903b-65592cfddc48/",
        "iat": "1657109863",
        "nbf": "1657109863",
        "exp": "1657114641",
        "http://schemas.microsoft.com/claims/authnclassreference": "1",
        "aio": "AWQAm/8TAAAAVyfZS7oiYyT697CgFfmK1myky4v2LP60NfIYWaI15/X++BQNkpFWdIE+5GTSS3EthqyW+U1T5q6E7Zbqe7d25vPaJc2HeI5bDRKkbI/PbQhUTvt24RJeT2USKk3elEzK",
        "altsecid": "5::10030000A34FAC40",
        "http://schemas.microsoft.com/claims/authnmethodsreferences": "pwd,mfa",
        "appid": "c44b4083-3bb0-49c1-b47d-974e53cbdf3c",
        "appidacr": "2",
        "http://schemas.xmlsoap.org/ws/2005/05/identity/claims/emailaddress": "attacker@securathesis.onmicrosoft.com",
        "http://schemas.xmlsoap.org/ws/2005/05/identity/claims/surname": "Acker",
        "http://schemas.xmlsoap.org/ws/2005/05/identity/claims/givenname": "Att",
        "groups": "f40ae73b-c115-425e-9661-cf5384a00dbb",
        "http://schemas.microsoft.com/identity/claims/identityprovider": "https://sts.windows.net/cc7df247-60ce-4a0f-9d75-704cf60efc64/",
        "ipaddr": "<Redacted>",
        "name": "Attacker",
        "http://schemas.microsoft.com/identity/claims/objectidentifier": "ac7e68c4-40fe-4b81-a7f7-b484de797cd3",
        "puid": "10032001E7FA056C",
        "rh": "0.AYIA926v0gygj0OQO2VZLP3cSEZIf3kAutdPukPawfj2MBOVACw.",
        "http://schemas.microsoft.com/identity/claims/scope": "user_impersonation",
        "http://schemas.xmlsoap.org/ws/2005/05/identity/claims/nameidentifier": "y6aZjS94PhnX8BrP8QnuQZq8U8fr9AXFgS9T_2EqdK8",
        "http://schemas.microsoft.com/identity/claims/tenantid": "d2af6ef7-a00c-438f-903b-65592cfddc48",
        "http://schemas.xmlsoap.org/ws/2005/05/identity/claims/name": "attacker@securathesis.onmicrosoft.com",
        "uti": "5A4i-QnjdkiFrmOp2GUdAA",
        "ver": "1.0",
        "wids": "62e90394-69f5-4237-9190-012177145e10",
        "xms_tcdt": "1648126498"
    },
    "correlationId": "b7ce4680-1663-4bcc-95d7-af6d5bd4f81f",
    "description": "",
    "eventDataId": "db13a58c-760e-4e81-9694-1fff3c4d202b",
    "eventName": {
        "value": "EndRequest",
        "localizedValue": "End request"
    },
    "category": {
        "value": "Administrative",
        "localizedValue": "Administrative"
    },
    "eventTimestamp": "2022-07-06T13:27:51.1553759Z",
    "id": "/subscriptions/a921d5d4-bdb7-43c3-aa01-88c6ae24992f/resourceGroups/SecuraAllRG/providers/Microsoft.DocumentDB/databaseAccounts/securacosmosdb/sqlDatabases/All+Database/containers/Users/events/db13a58c-760e-4e81-9694-1fff3c4d202b/ticks/637927108711553759",
    "level": "Informational",
    "operationId": "b7ce4680-1663-4bcc-95d7-af6d5bd4f81f",
    "operationName": {
        "value": "Microsoft.DocumentDB/databaseAccounts/sqlDatabases/containers/delete",
        "localizedValue": "Delete SQL container"
    },
    "resourceGroupName": "SecuraAllRG",
    "resourceProviderName": {
        "value": "Microsoft.DocumentDB",
        "localizedValue": "Microsoft.DocumentDB"
    },
    "resourceType": {
        "value": "Microsoft.DocumentDB/databaseAccounts/sqlDatabases/containers",
        "localizedValue": "Microsoft.DocumentDB/databaseAccounts/sqlDatabases/containers"
    },
    "resourceId": "/subscriptions/a921d5d4-bdb7-43c3-aa01-88c6ae24992f/resourceGroups/SecuraAllRG/providers/Microsoft.DocumentDB/databaseAccounts/securacosmosdb/sqlDatabases/All Database/containers/Users",
    "status": {
        "value": "Accepted",
        "localizedValue": "Accepted"
    },
    "subStatus": {
        "value": "Accepted",
        "localizedValue": "Accepted (HTTP Status Code: 202)"
    },
    "submissionTimestamp": "2022-07-06T13:29:10.2527192Z",
    "subscriptionId": "a921d5d4-bdb7-43c3-aa01-88c6ae24992f",
    "tenantId": "d2af6ef7-a00c-438f-903b-65592cfddc48",
    "properties": {
        "statusCode": "Accepted",
        "serviceRequestId": null,
        "eventCategory": "Administrative",
        "entity": "/subscriptions/a921d5d4-bdb7-43c3-aa01-88c6ae24992f/resourceGroups/SecuraAllRG/providers/Microsoft.DocumentDB/databaseAccounts/securacosmosdb/sqlDatabases/All Database/containers/Users",
        "message": "Microsoft.DocumentDB/databaseAccounts/sqlDatabases/containers/delete",
        "hierarchy": "d2af6ef7-a00c-438f-903b-65592cfddc48/a921d5d4-bdb7-43c3-aa01-88c6ae24992f"
    },
    "relatedEvents": []
}