# Get all resource IDs
$resource_ids = $( az resource list --query "[].id" --output tsv)

$i = 0
foreach ( $resource_id in $resource_ids ) {
    $i++
    $total = $resource_ids.Length
    echo "=== Checking diagnostic settings for resource ${i}/${total} ==="

    try {
        # Get diagnostic-setting rules for this resource
        $diagnostic_settings_names = $( az monitor diagnostic-settings list --resource "`"${resource_id}`"" --query "value[].name" --output tsv 2>&1)

        foreach ( $diagnostic_settings_name in $diagnostic_settings_names ) {
            echo "=== Deleting Diagnostic Settings Named ${diagnostic_settings_name} for resource id ${resource_id} ==="
            try {
                # Try to delete this diagnostic-setting rule
                az monitor diagnostic-settings delete --resource "`"${resource_id}`"" --name "`"${diagnostic_settings_name}`""
                echo "Delete Succeeded"
            }
            catch {
                echo "Delete Failed"
                continue
            }
        }
    }
    catch {
        continue
    }
    echo "Done!"
}