{
    "time": "2022-07-05T11:47:39.6047124Z",
    "resourceId": "/subscriptions/a921d5d4-bdb7-43c3-aa01-88c6ae24992f/resourceGroups/SecuraAllRG/providers/Microsoft.Storage/storageAccounts/diag7fff8f1ab8425b12/blobServices/default",
    "category": "StorageRead",
    "operationName": "GetBlob",
    "operationVersion": "2021-06-08",
    "schemaVersion": "1.0",
    "statusCode": 200,
    "statusText": "Success",
    "durationMs": 9,
    "callerIpAddress": "<Redacted>:56029",
    "correlationId": "170464ae-101e-004b-6365-90ca9c000000",
    "identity": {
        "type": "SAS",
        "tokenHash": "key1(4C81DD1772CEA6215A976B5B9C0764F519518B179BA3C7257C7E745D337833E6),SasSignature(92D630456D3188B7F8F6F4AF99B4FBC8BD9434133587D96FB0FDDFBE12CF6349)"
    },
    "location": "West Europe",
    "properties": {
        "accountName": "diag7fff8f1ab8425b12",
        "userAgentHeader": "Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:102.0) Gecko/20100101 Firefox/102.0",
        "etag": "\"0x8DA5A9118CDE874\"",
        "serviceType": "blob",
        "objectKey": "/diag7fff8f1ab8425b12/securacontainer/passwords.txt",
        "lastModifiedTime": "6/30/2022 12:07:25 PM",
        "metricResponseType": "Success",
        "serverLatencyMs": 9,
        "requestHeaderSize": 636,
        "responseHeaderSize": 394,
        "responseBodySize": 99,
        "tlsVersion": "TLS 1.2"
    },
    "uri": "https://diag7fff8f1ab8425b12.blob.core.windows.net:443/securacontainer/passwords.txt?sp=r&st=2022-07-05T11:47:32Z&se=2022-07-05T19:47:32Z&spr=https&sv=2021-06-08&sr=b&sig=XXXXX",
    "protocol": "HTTPS",
    "resourceType": "Microsoft.Storage/storageAccounts/blobServices"
}