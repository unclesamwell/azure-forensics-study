{
    "time": "2022-07-05T12:32:21.4573166Z",
    "resourceId": "/subscriptions/a921d5d4-bdb7-43c3-aa01-88c6ae24992f/resourceGroups/SecuraAllRG/providers/Microsoft.Storage/storageAccounts/diag7fff8f1ab8425b12/blobServices/default",
    "category": "StorageWrite",
    "operationName": "CopyBlob",
    "operationVersion": "2018-11-09",
    "schemaVersion": "1.0",
    "statusCode": 202,
    "statusText": "Success",
    "durationMs": 19,
    "callerIpAddress": "<Redacted>:64758",
    "correlationId": "64b88499-101e-0006-326b-900570000000",
    "identity": {
        "type": "AccountKey",
        "tokenHash": "key1(4C81DD1772CEA6215A976B5B9C0764F519518B179BA3C7257C7E745D337833E6)"
    },
    "location": "West Europe",
    "properties": {
        "accountName": "diag7fff8f1ab8425b12",
        "userAgentHeader": "Azure-Storage/2.0.0-2.0.1 (Python CPython 3.8.9; Windows 10) AZURECLI/2.34.1 (MSI)",
        "clientRequestId": "830f156c-fc5e-11ec-9f70-c8e26530e2c3",
        "etag": "\"0x8DA5E826848D428\"",
        "serviceType": "blob",
        "objectKey": "/diag7fff8f1ab8425b12/securaallfunctionappcontainer/passwords.txt",
        "lastModifiedTime": "7/5/2022 12:32:21 PM",
        "metricResponseType": "Success",
        "serverLatencyMs": 15,
        "operationCount": 0,
        "requestHeaderSize": 714,
        "responseHeaderSize": 252,
        "tlsVersion": "TLS 1.2"
    },
    "uri": "https://diag7fff8f1ab8425b12.blob.core.windows.net:443/securaallfunctionappcontainer/passwords.txt",
    "protocol": "HTTPS",
    "resourceType": "Microsoft.Storage/storageAccounts/blobServices"
}
{
    "time": "2022-07-05T12:32:21.4573719Z",
    "resourceId": "/subscriptions/a921d5d4-bdb7-43c3-aa01-88c6ae24992f/resourceGroups/SecuraAllRG/providers/Microsoft.Storage/storageAccounts/diag7fff8f1ab8425b12/blobServices/default",
    "category": "StorageWrite",
    "operationName": "CopyBlobSource",
    "operationVersion": "2018-11-09",
    "schemaVersion": "1.0",
    "statusCode": 202,
    "statusText": "Success",
    "durationMs": 19,
    "callerIpAddress": "<Redacted>:64758",
    "correlationId": "64b88499-101e-0006-326b-900570000000",
    "identity": {
        "type": "AccountKey",
        "tokenHash": "key1(4C81DD1772CEA6215A976B5B9C0764F519518B179BA3C7257C7E745D337833E6)"
    },
    "location": "West Europe",
    "properties": {
        "accountName": "diag7fff8f1ab8425b12",
        "userAgentHeader": "Azure-Storage/2.0.0-2.0.1 (Python CPython 3.8.9; Windows 10) AZURECLI/2.34.1 (MSI)",
        "clientRequestId": "830f156c-fc5e-11ec-9f70-c8e26530e2c3",
        "serviceType": "blob",
        "objectKey": "https://diag7fff8f1ab8425b12.blob.core.windows.net/securacontainer/passwords.txt?se=2022-07-06T12%3A32%3A20Z&sp=r&spr=https&sv=2018-11-09&sr=c&sig=XXXXX",
        "metricResponseType": "Success",
        "serverLatencyMs": 15,
        "operationCount": 1,
        "requestHeaderSize": 714,
        "responseHeaderSize": 252,
        "tlsVersion": "TLS 1.2"
    },
    "uri": "https://diag7fff8f1ab8425b12.blob.core.windows.net/securacontainer/passwords.txt?se=2022-07-06T12%3A32%3A20Z&sp=r&spr=https&sv=2018-11-09&sr=c&sig=XXXXX",
    "protocol": "HTTPS",
    "resourceType": "Microsoft.Storage/storageAccounts/blobServices"
}
{
    "time": "2022-07-05T12:32:21.4574325Z",
    "resourceId": "/subscriptions/a921d5d4-bdb7-43c3-aa01-88c6ae24992f/resourceGroups/SecuraAllRG/providers/Microsoft.Storage/storageAccounts/diag7fff8f1ab8425b12/blobServices/default",
    "category": "StorageWrite",
    "operationName": "CopyBlobDestination",
    "operationVersion": "2018-11-09",
    "schemaVersion": "1.0",
    "statusCode": 202,
    "statusText": "Success",
    "durationMs": 19,
    "callerIpAddress": "<Redacted>:64758",
    "correlationId": "64b88499-101e-0006-326b-900570000000",
    "identity": {
        "type": "AccountKey",
        "tokenHash": "key1(4C81DD1772CEA6215A976B5B9C0764F519518B179BA3C7257C7E745D337833E6)"
    },
    "location": "West Europe",
    "properties": {
        "accountName": "diag7fff8f1ab8425b12",
        "userAgentHeader": "Azure-Storage/2.0.0-2.0.1 (Python CPython 3.8.9; Windows 10) AZURECLI/2.34.1 (MSI)",
        "clientRequestId": "830f156c-fc5e-11ec-9f70-c8e26530e2c3",
        "serviceType": "blob",
        "objectKey": "/diag7fff8f1ab8425b12/securaallfunctionappcontainer/passwords.txt",
        "metricResponseType": "Success",
        "serverLatencyMs": 15,
        "operationCount": 2,
        "requestHeaderSize": 714,
        "responseHeaderSize": 252,
        "tlsVersion": "TLS 1.2"
    },
    "uri": "https://diag7fff8f1ab8425b12.blob.core.windows.net:443/securaallfunctionappcontainer/passwords.txt",
    "protocol": "HTTPS",
    "resourceType": "Microsoft.Storage/storageAccounts/blobServices"
}