param(
    $step
)
$null = Set-Location -Path $env:CellsCloudSDKCPPHome -PassThru
cmake -G "Visual Studio 17 2022" -Thost=x64 -Ax64 -S . -B ./build
function Build-SDK {
    cmake --build ./build --config Release --target aspose_cells_cloud_sdk
}
function Build-SDK-Test {
    cmake --build .\build --config Debug --target aspose_cells_cloud_test
}

function Test-Case {
    cmake -E chdir ./build ctest -V -C Debug    
}


switch ($step) {
    "build-sdk" { Build-SDK }
    "build-test" { Build-SDK-Test }
    "build" { Build-SDK ;  Build-SDK-Test}
    "test" { Test-Case }
    "all" { Build-SDK ;  Build-SDK-Test ; Test-Case}
}
