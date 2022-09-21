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
#include "../thirdparty/httplib.h"
/// <summary>
/// Example of how to work with files.
/// </summary>
class HttpTests : public InfrastructureTest {
protected:
    std::wstring url =L"https://windocks.com/blog-2/Docker-SQL-Containers-with-SSRS";
    
};

/// <summary>
/// Test for uploading file.
/// </summary>
TEST_F(HttpTests, TestGetFile) {
    httplib::Client cli("https://windocks.com/"); 
    auto res = cli.Get("/blog-2/Docker-SQL-Containers-with-SSRS");
    // res->status;
    // res->body;
}
