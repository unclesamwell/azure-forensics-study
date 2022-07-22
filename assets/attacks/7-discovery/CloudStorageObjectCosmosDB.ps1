$cosmos_accounts = $( az cosmosdb list --query "[].name" --output tsv )

foreach ( $cosmos_account in $cosmos_accounts ) {
    echo "=== Enumerating Cosmos DB ${cosmos_account} ==="

    # Get Cosmos DB RG
    $resource_group = $( az cosmosdb list --query "[?name[]==${cosmos_account}].resourceGroup" --output tsv )

    # Find databases inside this Cosmos DB account
    $databases = $( az cosmosdb sql database list --account-name $cosmos_account --resource-group $resource_group --query "[].name" --output tsv )

    foreach ( $database in $databases ) {
        echo "=== Enumerating Database ${database} ==="

        # Find containers within this Cosmos DB database
        $containers = $( az cosmosdb sql container list --account-name $cosmos_account --resource-group $resource_group --database-name "${database}" --query "[].name" --output tsv )

        foreach ( $container in $containers ) {
            $documentCount = $( az cosmosdb sql container show --account-name $cosmos_account --resource-group $resource_group --database-name "${database}" --name $container --query "resource.statistics[].documentCount | sum(@)" --output tsv )
            echo "Database contains container '${container}' with ${documentCount} documents"
        }
    }
}