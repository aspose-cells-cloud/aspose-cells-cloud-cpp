/** --------------------------------------------------------------------------------------------------------------------
* <copyright company="Aspose" file="batch_convert_test.h">
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
class BatchConvertTest : public InfrastructureTest {
protected:
    std::wstring remoteDataFolder = remoteBaseTestDataFolder + L"/Storage";
    std::wstring localFile = L"source/Book1.xlsx";
    std::wstring localFile2 = L"source/myDocument.xlsx";

};

/// <summary>
/// Test for convert file.
/// </summary>
TEST_F(BatchConvertTest, PostBatchConvertTest) {
    std::wstring remoteFileName = L"Book1.xlsx";

    auto requestFileContent = std::shared_ptr<std::istream>(new std::ifstream(std::filesystem::path(getDataDir(localFile)), std::istream::binary));
    std::shared_ptr<requests::UploadFileRequest> request(new requests::UploadFileRequest(
        requestFileContent,
        std::make_shared< std::wstring >(remoteDataFolder + L"/" + remoteFileName),
        nullptr
    ));
    auto actual = getApi()->uploadFile(request);
    
    std::wstring remoteFileName2 = L"myDocument.xlsx";

    auto requestFileContent2 = std::shared_ptr<std::istream>(new std::ifstream(std::filesystem::path(getDataDir(localFile2)), std::istream::binary));
    std::shared_ptr<requests::UploadFileRequest> request2(new requests::UploadFileRequest(
        requestFileContent2,
        std::make_shared< std::wstring >(remoteDataFolder + L"/" + remoteFileName2),
        nullptr
    ));
    auto actual2 = getApi()->uploadFile(request2);

    std::shared_ptr<models::MatchConditionRequest> matchConditionRequest ( new models::MatchConditionRequest());
    matchConditionRequest->setRegexPattern(std::make_shared< std::wstring >( L"(^Book)(.+)(xlsx$)"));
    std::shared_ptr<models::BatchConvertRequest> batchConvertRequest ( new models::BatchConvertRequest() );
    batchConvertRequest->setMatchCondition(matchConditionRequest);
    batchConvertRequest->setSourceFolder(std::make_shared< std::wstring >( remoteDataFolder));
    batchConvertRequest->setFormat(std::make_shared< std::wstring >( L"pdf"));
    std::shared_ptr<requests::PostBatchConvertRequest> postBatchConvertRequest(new requests::PostBatchConvertRequest(
      batchConvertRequest
    ));

    auto actual3 = getApi()->postBatchConvert(postBatchConvertRequest);

}

