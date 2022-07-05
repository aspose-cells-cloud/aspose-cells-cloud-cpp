Aspose.Cells Cloud SDK for C++ wraps Aspose.Cells REST API so you could seamlessly integrate Microsoft Excel file generation, manipulation, conversion & inspection features into your own C++ applications.

# Excel File Processing in the Cloud

[Aspose.Cells Cloud SDK for C++](https://products.aspose.cloud/cells/cpp) allows working with converting file to other supported file formats and protecting file. 
Feel free to explore the [Developer's Guide](https://docs.aspose.cloud/display/cellscloud/Developer+Guide) & [API Reference](https://apireference.aspose.cloud/cells/) to know all about Aspose.Cells Cloud API. 

## Document Processing Features


## Enhancements in Version 22.6

- Add postReverse api.
- Add clear postDigitalSignature api.

## Read & Write Spreadsheet Formats

**Microsoft Excel:** XLS, XLSX, XLSB, XLSM, XLT, XLTX, XLTM
**OpenOffice:** ODS
**SpreadsheetML:** XML
**Text:** CSV, TSV, TXT (TabDelimited)
**Web:** HTML, MHTML
**PDF**

## Save Spreadsheet As

DIF, HTML, MHTML, PNG, JPG, TIFF, XPS, SVG, MD (Markdown), ODS, XLSX, XLS, XLSB, PDF, XML, TXT, CSV

## Read Other Formats

SXC, FODS

## Getting Started with Aspose.Cells Cloud SDK for C++

Firstly, create an account at [Aspose for Cloud](https://dashboard.aspose.cloud/#/apps) to get your application information and free quota to use the API. 

### SDK Dependencies

- [OpenSSL 1.1.1 or newer](https://www.openssl.org/)

### How to build Aspose.Cells.Cloud SDK on Windows

Build Aspose.Cells.Cloud SDK
- Install [Microsoft Visual Studio 2019](https://visualstudio.microsoft.com/)
- Intsall [CMake 3.7 or newer](https://cmake.org/download/) and add "<CMAKE_INSTALATION_FOLDER>/bin" to PATH environment variable.
- Install [VcPkg](https://github.com/Microsoft/vcpkg) and add "<VCPKG_INSTALATION_FOLDER>" and "<VCPKG_INSTALATION_FOLDER>/installed/x64-windows" to PATH environment variable.

```cmd
vcpkg install openssl:x64-windows
git clone https://github.com/aspose-cells-cloud/aspose-cells-cloud-cpp
cd aspose-cells-cloud-cpp
mkdir .\build
cmake -G "Visual Studio 16 2019" -Thost=x64 -Ax64 -S . -B ./build
cmake --build ./build --config Release --target aspose_cells_cloud_sdk
```

Create servercreds.json in '<SDK-ROOT>/settings' directory:
````
{
    "ClientId" : "xxxx",
    "ClientSecret" : "xxxxx"
}
````

Run tests
```cmd
cmake --build .\build --config Debug --target aspose_cells_cloud_test
cmake -E chdir ./build ctest -V -C Debug
```

### How to build and test Aspose.Cells.Cloud SDK on Linux

Required packages:
 - gcc >= 8.1
 - cmake >= 3.7
 - openssl >= 1.1.1

Build Aspose.Cells.Cells SDK
```cmd
sudo apt-get install gcc cmake openssl-dev
git clone https://github.com/aspose-cells-cloud/aspose-cells-cloud-cpp
cd aspose-cells-cloud-cpp
mkdir -p ./build

cmake -DCMAKE_BUILD_TYPE=Release -S . -B ./build 
cmake --build ./build --config Release --target aspose_cells_cloud_sdk
```

Create servercreds.json in '<SDK-ROOT>/settings' directory:
````
{
    "ClientId" : "xxxx",
    "ClientSecret" : "xxxxx"
}
````

Run tests
```cmd
cmake --build ./build --config Release --target aspose_cells_cloud_test
cmake -E chdir ./build ctest -V -C Debug
```

The complete source code is available at [GitHub Repository](https://github.com/aspose-cells-cloud/aspose-cells-cloud-cpp).

## Getting started with the SDK

Add "<SDK_ROOT>/include" directory to your project includes path.
Link "<SDK_ROOT>/build/aspose_cells_cloud_sdk/Release/aspose_cells_cloud_sdk.lib" with your project.
Link "<SDK_ROOT>/build/bin/Release/aspose_cells_cloud_sdk.dll" for windows or "<SDK_ROOT>/build/bin/Release/aspose_cells_cloud_sdk.so" for linux with your project.

Typical usage of the SDK in code follows this template:
```
    // Start README example
    using namespace aspose::cells::cloud;

    std::wstring remoteFileName = L"TestConvertFile_CPP.xlsx";
    auto requestFile = std::shared_ptr<std::istream>(new std::ifstream(std::filesystem::path(getDataDir(localFile)), std::istream::binary));
    
    std::shared_ptr<requests::ConvertRequest> request(new requests::ConvertRequest(
        std::make_shared< std::wstring >(L"pdf") ,        
        requestFile,
        nullptr,
        nullptr,
        nullptr
    ));

    auto actual = getApi()->convert(request);
    if(actual->good()){
        std::ofstream out("TestConvertFile_CPP.pdf", std::istream::binary);
        actual->seekg(0,std::ios_base::beg);
        while(!actual->eof()){
            char* buffer = new char[256];
            actual->read(buffer,256);             
            out.write(buffer,256);
        }
        
    }

    // End README example
```

[Product Page](https://products.aspose.cloud/cells/cpp) | [Documentation](https://docs.aspose.cloud/display/cellscloud/Home) | [API Reference](https://apireference.aspose.cloud/cells/) | [Code Samples](https://github.com/aspose-cells-cloud/aspose-cells-cloud-cpp) | [Blog](https://blog.aspose.cloud/category/cells/) | [Free Support](https://forum.aspose.cloud/c/cells) | [Free Trial](https://dashboard.aspose.cloud/#/apps)
