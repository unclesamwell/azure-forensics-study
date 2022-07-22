{
   "time":"2022-07-04T09:59:06.4553755Z",
   "resourceId":"/subscriptions/a921d5d4-bdb7-43c3-aa01-88c6ae24992f/resourceGroups/SecuraAllRG/providers/Microsoft.Storage/storageAccounts/diag7fff8f1ab8425b12/blobServices/default",
   "category":"StorageRead",
   "operationName":"ListBlobs",
   "operationVersion":"2019-02-02",
   "schemaVersion":"1.0",
   "statusCode":200,
   "statusText":"Success",
   "durationMs":9,
   "callerIpAddress":"<Redacted>:58555",
   "correlationId":"a5c61a66-e01e-005f-4c8c-8f82f3000000",
   "identity":{
      "type":"AccountKey",
      "tokenHash":"key1(4C81DD1772CEA6215A976B5B9C0764F519518B179BA3C7257C7E745D337833E6)"
   },
   "location":"West Europe",
   "properties":{
      "accountName":"diag7fff8f1ab8425b12",
      "userAgentHeader":"Azure-Storage/2.1.0-2.1.0 (Python CPython 3.8.9; Windows 10) AZURECLI/2.34.1 (MSI)",
      "clientRequestId":"efe9f74c-fb7f-11ec-ae31-c8e26530e2c3",
      "serviceType":"blob",
      "objectKey":"/diag7fff8f1ab8425b12/securacontainer",
      "metricResponseType":"Success",
      "serverLatencyMs":9,
      "requestHeaderSize":528,
      "responseHeaderSize":210,
      "responseBodySize":879,
      "tlsVersion":"TLS 1.2"
   },
   "uri":"https://diag7fff8f1ab8425b12.blob.core.windows.net:443/securacontainer?restype=container&comp=list&maxresults=5000&include=metadata%2Ccopy",
   "protocol":"HTTPS",
   "resourceType":"Microsoft.Storage/storageAccounts/blobServices"
}