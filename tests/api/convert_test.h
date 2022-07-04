/** --------------------------------------------------------------------------------------------------------------------
* <copyright company="Aspose" file="convert_test.h">
*   Copyright (c) 2022 Aspose.Cells for Cloud
* </copyright>
* <summary>
*   Permission is hereby granted, free of charge, to any person obtaining a copy
*  of this software and associated documentation files (the "Software"), to deal
*  in the Software without restriction, including without limitation the rights
*  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
*  copies of the Software, and to permit persons to whom the Software is
*  furnished to do so, subject to the following conditions:
* 
*  The above copyright notice and this permission notice shall be included in all
*  copies or substantial portions of the Software.
* 
*  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
*  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
*  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
*  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
*  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
*  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
*  SOFTWARE.
* </summary> 
-------------------------------------------------------------------------------------------------------------------- **/

#pragma once
#include "../test_base.h"

/// <summary>
/// Example of how to work with files.
/// </summary>
class ConvertTests : public InfrastructureTest {
protected:
    std::wstring remoteDataFolder = remoteBaseTestDataFolder + L"/Storage";
    std::wstring localFile = L"source/Book1.xlsx";

};

// /// <summary>
// /// Test for convert file.
// /// </summary>
// TEST_F(ConvertTests, TestConvertFile) {
//     std::wstring remoteFileName = L"TestConvertFile_CPP.xlsx";
//     auto requestFile = std::shared_ptr<std::istream>(new std::ifstream(std::filesystem::path(getDataDir(localFile)), std::istream::binary));
    
//     std::shared_ptr<requests::ConvertRequest> request(new requests::ConvertRequest(
//         std::make_shared< std::wstring >(L"pdf") ,        
//         requestFile,
//         nullptr,
//         nullptr,
//         nullptr
//     ));

//     auto actual = getApi()->convert(request);
//     if(actual->good()){
//         std::ofstream out("out/TestConvertFile_CPP.pdf", std::istream::binary);
//         actual->seekg(0,std::ios_base::beg);
//         while(!actual->eof()){
//             char* buffer = new char[256];
//             actual->read(buffer,256);             
//             out.write(buffer,256);
//         }
        
//     }
// }

// /// <summary>
// /// Test for get workbook.
// /// </summary>
// TEST_F(ConvertTests, TesGetWorkbookFormat) {
//     std::wstring remoteFileName = L"TestGetWorkBook_CPP.xlsx";
    
//     uploadFileToStorage(
//         localTestDataFolder + L"/" + localFile,
//         remoteDataFolder + L"/" + remoteFileName
//     );
//     std::shared_ptr<requests::GetWorkbookRequest> request(new requests::GetWorkbookRequest(
//         std::make_shared< std::wstring >(remoteFileName) ,        
//         std::make_shared< std::wstring >(L"pdf"),
//         nullptr,
//         nullptr,
//         nullptr,
//         std::make_shared< std::wstring >(remoteDataFolder),
//         nullptr,
//         nullptr,
//         nullptr
//     ));

//     auto actual = getApi()->getWorkbook(request);
//     if(actual->good()){
//         std::ofstream out("out/TestGetWorkBook_CPP.pdf", std::istream::binary);
//         actual->seekg(0,std::ios_base::beg);
//         while(!actual->eof()){
//             char* buffer = new char[256];
//             actual->read(buffer,256);             
//             out.write(buffer,256);
//         }        
//     }
// }

// /// <summary>
// /// Test for get workbook.
// /// </summary>
// TEST_F(ConvertTests, TesGetWorkbook) {
//     std::wstring remoteFileName = L"TestGetWorkBook_CPP.xlsx";
    
//     uploadFileToStorage(
//         localTestDataFolder + L"/" + localFile,
//         remoteDataFolder + L"/" + remoteFileName
//     );
//     std::shared_ptr<requests::GetWorkbookRequest> request(new requests::GetWorkbookRequest(
//         std::make_shared< std::wstring >(remoteFileName) ,        
//         nullptr,
//         nullptr,
//         nullptr,
//         nullptr,
//         std::make_shared< std::wstring >(remoteDataFolder),
//         nullptr,
//         nullptr,
//         nullptr
//     ));

//     auto actual = getApi()->getWorkbook(request);
//     if(actual->good()){       
//         std::ofstream out("out/TestGetWorkBook_CPP.xml", std::istream::binary);
//         actual->seekg(0,std::ios_base::beg);
//         while(!actual->eof()){
//             char* buffer = new char[256];
//             actual->read(buffer,256);             
//             out.write(buffer,256);
//         }        
//     }
// }

// /// <summary>
// /// Test for get workbook.
// /// </summary>
// TEST_F(ConvertTests, TesGetWorkbookFormatOutPath) {
//     std::wstring remoteFileName = L"TestGetWorkBook_CPP.xlsx";
    
//     uploadFileToStorage(
//         localTestDataFolder + L"/" + localFile,
//         remoteDataFolder + L"/" + remoteFileName
//     );
//     std::shared_ptr<requests::GetWorkbookRequest> request(new requests::GetWorkbookRequest(
//         std::make_shared< std::wstring >(remoteFileName) ,        
//         std::make_shared< std::wstring >(L"pdf"),
//         nullptr,
//         nullptr,
//         nullptr,
//         std::make_shared< std::wstring >(remoteDataFolder),
//         nullptr,
//         std::make_shared< std::wstring >(L"TesGetWorkbookFormatOutPath.pdf") ,
//         nullptr
//     ));

//     auto actual = getApi()->getWorkbook(request);
//     if(actual->good()){       
//         std::ofstream out("out/TesGetWorkbookFormatOutPath.xml", std::istream::binary);
//         actual->seekg(0,std::ios_base::beg);
//         while(!actual->eof()){
//             char* buffer = new char[256];
//             actual->read(buffer,256);             
//             out.write(buffer,256);
//         }        
//     }
// }

/// <summary>
/// Test for workbook save as. 
/// </summary>
TEST_F(ConvertTests, TesWorkbookSaveAs) {
    std::wstring remoteFileName = L"TestWorkBookSaveAs_CPP.xlsx";
    
    uploadFileToStorage(
        localTestDataFolder + L"/" + localFile,
        remoteDataFolder + L"/" + remoteFileName
    );
    std::shared_ptr<requests::postDocumentSaveAsRequest> request(new requests::postDocumentSaveAsRequest(
        std::make_shared< std::wstring >(remoteFileName) ,    
        nullptr,    
        std::make_shared< std::wstring >(L"OutResult/TestWorkBookSaveAs_CPP.xlsx.pdf"),
        nullptr,
        nullptr,
        std::make_shared< std::wstring >(remoteDataFolder),
        nullptr,
        nullptr
    ));

    auto actual = getApi()->postDocumentSaveAs(request);
   
}