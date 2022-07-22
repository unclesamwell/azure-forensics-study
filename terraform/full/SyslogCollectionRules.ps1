param (
    [Parameter(Mandatory = $true)]
    [string]$ResourceGroupName,

    [Parameter(Mandatory = $true)]
    [string]$WorkspaceName
)

$FacilityNames = @()
$FacilityNames += 'auth'
$FacilityNames += 'authpriv'
$FacilityNames += 'cron'
$FacilityNames += 'daemon'
$FacilityNames += 'ftp'
$FacilityNames += 'kern'
$FacilityNames += 'local0'
$FacilityNames += 'local1'
$FacilityNames += 'local2'
$FacilityNames += 'local3'
$FacilityNames += 'local4'
$FacilityNames += 'local5'
$FacilityNames += 'local6'
$FacilityNames += 'local7'
$FacilityNames += 'lpr'
$FacilityNames += 'mail'
$FacilityNames += 'news'
$FacilityNames += 'syslog'
$FacilityNames += 'user'
$FacilityNames += 'uucp'

$Count = 0
foreach ($FacilityName in $FacilityNames) {
    $Count++
    New-AzOperationalInsightsLinuxSyslogDataSource `
        -ResourceGroupName $ResourceGroupName `
        -WorkspaceName $WorkspaceName `
        -Name "Linux-syslog-$($Count)" `
        -Facility $FacilityName `
        -CollectEmergency `
        -CollectAlert `
        -CollectCritical `
        -CollectError `
        -CollectWarning `
        -CollectNotice `
        -CollectDebug `
        -CollectInformational
}

Get-AzOperationalInsightsDataSource `
    -ResourceGroupName $ResourceGroupName `
    -WorkspaceName $WorkspaceName `
    -Kind 'LinuxSyslog'