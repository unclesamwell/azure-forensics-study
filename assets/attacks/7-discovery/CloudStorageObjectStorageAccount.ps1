$storage_accounts = $( az storage account list --query "[].name" --output tsv )

foreach ( $storage_account in $storage_accounts ) {
    echo "=== Enumerating Storage Account ${storage_account} ==="

    # Find containers within this storage account
    $containers = $( az storage container list --account-name ${storage_account} --query "[].name" --output tsv )
    foreach ( $container in $containers ) {
        echo "=== Enumerating Container ${container} ==="
        az storage blob list --container-name $container --account-name ${storage_account} --query "[].name" --output tsv
    }
}