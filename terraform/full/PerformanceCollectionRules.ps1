param (
    [Parameter(Mandatory = $true)]
    [string]$ResourceGroupName,

    [Parameter(Mandatory = $true)]
    [string]$WorkspaceName
)

# Recommended performance counters
$CounterNamesMap = @{
    "Logical Disk" = @(
        "% Used Inodes",
        "% Used Space",
        "Disk Reads/sec",
        "Disk Transfers/sec",
        "Disk Writes/sec",
        "Free Megabytes"
    )
    "Memory"       = @(
        "% Used Memory",
        "% Used Swap Space",
        "Available MBytes Memory"
    )
    "Network"      = @(
        "Total Bytes Received",
        "Total Bytes Transmitted"
    )
    "Processor"    = @(
        "% Privileged Time",
        "% Processor Time"
    )
}

$Count = 0
foreach ($ObjectName in $CounterNamesMap.keys) {
    $Count++
    New-AzOperationalInsightsLinuxPerformanceObjectDataSource `
        -ResourceGroupName $ResourceGroupName `
        -WorkspaceName $WorkspaceName `
        -Name "Linux-perfcount-$($Count)" `
        -InstanceName "*" `
        -ObjectName $ObjectName `
        -CounterNames $CounterNamesMap[$ObjectName] `
        -IntervalSeconds 60
}

