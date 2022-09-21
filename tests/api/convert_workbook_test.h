/** --------------------------------------------------------------------------------------------------------------------
* <copyright company="Aspose" file="convert_workkbook_test.h">
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
class ConvertWorkbookTests : public InfrastructureTest {
protected:
    std::wstring remoteDataFolder = remoteBaseTestDataFolder + L"/Storage";
    std::wstring localFile = L"source/Book1.xlsx";

};

/// <summary>
/// Test for convert file.
/// </summary>
TEST_F(ConvertWorkbookTests, TestConvertWorkbookToDocxFile) {
    std::wstring remoteFileName = L"TestConvertFile_CPP.xlsx";
    auto requestFile = std::shared_ptr<std::istream>(new std::ifstream(std::filesystem::path(getDataDir(localFile)), std::istream::binary));
    
    std::shared_ptr<requests::ConvertWorkbookToDocxRequest> request(new requests::ConvertWorkbookToDocxRequest(  
        requestFile,
        nullptr,
        nullptr
    ));

    auto actual = getApi()->convertWorkbookToDocx(request);

}
/// <summary>
/// Test for convert file.
/// </summary>
TEST_F(ConvertWorkbookTests, TestConvertWorkbookToPdfFile) {
    std::wstring remoteFileName = L"TestConvertFile_CPP.xlsx";
    auto requestFile = std::shared_ptr<std::istream>(new std::ifstream(std::filesystem::path(getDataDir(localFile)), std::istream::binary));
    
    std::shared_ptr<requests::ConvertWorkbookToPdfRequest> request(new requests::ConvertWorkbookToPdfRequest(  
        requestFile,
        nullptr,
        nullptr
    ));

    auto actual = getApi()->convertWorkbookToPdf(request);

}

/// <summary>
/// Test for convert file.
/// </summary>
TEST_F(ConvertWorkbookTests, TestConvertWorkbookToPNGFile) {
    std::wstring remoteFileName = L"TestConvertFile_CPP.xlsx";
    auto requestFile = std::shared_ptr<std::istream>(new std::ifstream(std::filesystem::path(getDataDir(localFile)), std::istream::binary));
    
    std::shared_ptr<requests::ConvertWorkbookToPNGRequest> request(new requests::ConvertWorkbookToPNGRequest(  
        requestFile,
        nullptr,
        nullptr
    ));

    auto actual = getApi()->convertWorkbookToPNG(request);

}