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
class SplitTests : public InfrastructureTest {
protected:
    std::wstring remoteDataFolder = remoteBaseTestDataFolder + L"/Storage";
    std::wstring localFile = L"source/Book1.xlsx";
    std::wstring localFile2 = L"source/myDocument.xlsx";

};

/// <summary>
/// Test for convert file.
/// </summary>
TEST_F(ReplaceTests, PostReplaceTests) {
    std::map< std::wstring ,std::shared_ptr<  std::istream > > files;    
    files.insert( std::pair< std::wstring ,std::shared_ptr<  std::istream >>( std::wstring( L"Book1.xlsx"), std::shared_ptr<std::istream>(new std::ifstream(std::filesystem::path(getDataDir(localFile)), std::istream::binary)) ) );
    files.insert( std::pair< std::wstring ,std::shared_ptr<  std::istream >>( std::wstring( L"myDocument.xlsx"), std::shared_ptr<std::istream>(new std::ifstream(std::filesystem::path(getDataDir(localFile2)), std::istream::binary)) ) );
    std::shared_ptr<std::map< std::wstring ,std::shared_ptr<  std::istream >>> ptrFiles =   std::make_shared<std::map<  std::wstring  ,std::shared_ptr<  std::istream > >>(files);
      
    
    std::shared_ptr<requests::PostReplaceRequest> request(new requests::PostReplaceRequest(
        ptrFiles,
        std::make_shared< std::wstring >(L"123"),
        std::make_shared< std::wstring >(L"456"),
        nullptr
    ));

    auto actual = getApi()->postReplace(request);

}
