$casenumberpattern="\[==========\] Running (\d+) tests"
$passedpattern="\[  PASSED  \] (\d+) tests."
$casenumber=0
$passednumber=0
.\quick.ps1 all | ForEach-Object { 
    if ($_ -match $casenumberpattern ){
        $casenumber =  $matches[1]
    }
    if ($_ -match $passedpattern ){
        $passednumber =  $matches[1]
    }
}

if ( $casenumber -eq $passednumber -and $casenumber -gt 0 ){
    Write-Output  "$passednumber Passed."
}
