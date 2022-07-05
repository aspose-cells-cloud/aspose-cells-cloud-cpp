/** --------------------------------------------------------------------------------------------------------------------
* <copyright company="Aspose" file="replace_test.h">
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
class DigitalSignatureTests : public InfrastructureTest {
protected:
    std::wstring remoteDataFolder = remoteBaseTestDataFolder + L"/Storage";
    std::wstring localFile = L"source/Book1.xlsx";
    std::wstring localFile2 = L"source/roywang.pfx";

};

/// <summary>
/// 
/// </summary>
TEST_F(DigitalSignatureTests, PostDigitalSignatureTests) {

    // std::wstring remoteFileName = L"PostDigitalSignature_CPP.xlsx";
    // auto requestFileContent = std::shared_ptr<std::istream>(new std::ifstream(std::filesystem::path(getDataDir(localFile)), std::istream::binary));
    // std::shared_ptr<requests::UploadFileRequest> request(new requests::UploadFileRequest(
    //     requestFileContent,
    //     std::make_shared< std::wstring >(remoteDataFolder + L"/" + remoteFileName),
    //     nullptr
    // ));
    // auto actual = getApi()->uploadFile(request);

    // std::wstring remotePfxFileName = L"roywang.pfx";
    // auto requestPfxFileContent = std::shared_ptr<std::istream>(new std::ifstream(std::filesystem::path(getDataDir(localFile2)), std::istream::binary));
    // std::shared_ptr<requests::UploadFileRequest> pfxRequest(new requests::UploadFileRequest(
    //     requestPfxFileContent,
    //     std::make_shared< std::wstring >( remotePfxFileName),
    //     nullptr
    // ));
    // auto actual2 = getApi()->uploadFile(pfxRequest);


    std::shared_ptr<requests::PostDigitalSignatureRequest> requestDigitalSignature(new requests::PostDigitalSignatureRequest(
        std::make_shared< std::wstring >(L"PostDigitalSignature_CPP.xlsx"),
        std::make_shared< std::wstring >(L"roywang.pfx"),
        std::make_shared< std::wstring >(L"123456") ,
        std::make_shared< std::wstring >(remoteDataFolder),
        nullptr
    ));

    auto actual3 = getApi()->postDigitalSignature(requestDigitalSignature);

}

