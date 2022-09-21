/** --------------------------------------------------------------------------------------------------------------------
* <copyright company="Aspose" file="file_test.h">
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
class FileTests : public InfrastructureTest {
protected:
    std::wstring remoteDataFolder = remoteBaseTestDataFolder + L"/Storage";
    std::wstring localFile = L"source/Book1.xlsx";

};

/// <summary>
/// Test for uploading file.
/// </summary>
TEST_F(FileTests, TestUploadFile) {
    std::wstring remoteFileName = L"TestUploadFile_CPP.xlsx";

    auto requestFileContent = std::shared_ptr<std::istream>(new std::ifstream(std::filesystem::path(getDataDir(localFile)), std::istream::binary));
    std::shared_ptr<requests::UploadFileRequest> request(new requests::UploadFileRequest(
        requestFileContent,
        std::make_shared< std::wstring >(remoteDataFolder + L"/" + remoteFileName),
        nullptr
    ));

    auto actual = getApi()->uploadFile(request);
    ASSERT_TRUE(actual->getUploaded() != nullptr);
    ASSERT_EQ(1, actual->getUploaded()->size());
    ASSERT_TRUE(actual->getUploaded()->at(0)->compare(L"TestUploadFile_CPP.xlsx") == 0);
}

/// <summary>
/// Test for copy file.
/// </summary>
TEST_F(FileTests, TestCopyFile) {
    std::wstring remoteFileName = L"TestCopyFileSrc_CPP.xlsx";

    uploadFileToStorage(
        localTestDataFolder + L"/" + localFile,
        remoteDataFolder + L"/" + remoteFileName
    );

    std::shared_ptr<requests::CopyFileRequest> request(new requests::CopyFileRequest(
        std::make_shared< std::wstring >(remoteDataFolder + L"/TestCopyFileDes_CPP.xlsx"),
        std::make_shared< std::wstring >(remoteDataFolder + L"/" + remoteFileName),
        nullptr,
        nullptr,
        nullptr
    ));

getApi()->copyFile(request);
}

/// <summary>
/// Test for move file.
/// </summary>
TEST_F(FileTests, TestMoveFile) {
    std::wstring remoteFileName = L"TestMoveFileSrc_CPP.xlsx";

    uploadFileToStorage(
        localTestDataFolder + L"/" + localFile,
        remoteDataFolder + L"/" + remoteFileName
    );

    std::shared_ptr<requests::MoveFileRequest> request(new requests::MoveFileRequest(
        std::make_shared< std::wstring >(baseTestOutPath + L"/TestMoveFileDest_CPP" + createRandomGuid() + L".xlsx"),
        std::make_shared< std::wstring >(remoteDataFolder + L"/" + remoteFileName),
        nullptr,
        nullptr,
        nullptr
    ));

getApi()->moveFile(request);
}

/// <summary>
/// Test for delete file.
/// </summary>
TEST_F(FileTests, TestDeleteFile) {
    std::wstring remoteFileName = L"TestDeleteFile_CPP.xlsx";

    uploadFileToStorage(
        localTestDataFolder + L"/" + localFile,
        remoteDataFolder + L"/" + remoteFileName
    );

    std::shared_ptr<requests::DeleteFileRequest> request(new requests::DeleteFileRequest(
        std::make_shared< std::wstring >(remoteDataFolder + L"/" + remoteFileName),
        nullptr,
        nullptr
    ));

getApi()->deleteFile(request);
}

/// <summary>
/// Test for download file.
/// </summary>
TEST_F(FileTests, TestDownloadFile) {
    std::wstring remoteFileName = L"TestDownloadFile_CPP.xlsx";

    uploadFileToStorage(
        localTestDataFolder + L"/" + localFile,
        remoteDataFolder + L"/" + remoteFileName
    );

    std::shared_ptr<requests::DownloadFileRequest> request(new requests::DownloadFileRequest(
        std::make_shared< std::wstring >(remoteDataFolder + L"/" + remoteFileName),
        nullptr,
        nullptr
    ));

    auto actual = getApi()->downloadFile(request);
}

