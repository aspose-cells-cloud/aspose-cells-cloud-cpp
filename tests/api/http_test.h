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
#define CPPHTTPLIB_OPENSSL_SUPPORT
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
TEST_F(HttpTests, TesGetFile) {
    
    // "https://gimg2.baidu.com/image_search/src=http:%2F%2Fi0.hdslb.com%2Fbfs%2Farticle%2Fba80c2bdaf0609263ba31cd23d0c1cda46dbb40e.jpg&refer=http:%2F%2Fi0.hdslb.com&app=2002&size=f9999,10000&q=a80&n=0&g=0n&fmt=auto?sec=1664457663&t=af8614e81a48dcebff8617622007ce7a"
    //https://cpp-httplib-server.yhirose.repl.co/hi
    httplib::Client cli("https://cpp-httplib-server.yhirose.repl.co"); 
    auto res = cli.Get("/hi");
    // httplib::Client cli("https://gimg2.baidu.com"); 
    // auto res = cli.Get("/image_search/src=http:%2F%2Fi0.hdslb.com%2Fbfs%2Farticle%2Fba80c2bdaf0609263ba31cd23d0c1cda46dbb40e.jpg&refer=http:%2F%2Fi0.hdslb.com&app=2002&size=f9999,10000&q=a80&n=0&g=0n&fmt=auto?sec=1664457663&t=af8614e81a48dcebff8617622007ce7a");
    // // httplib::Client cli("https://windocks.com/"); 
    // auto res = cli.Get("/blog-2/Docker-SQL-Containers-with-SSRS");
    // std::istream*  stream = new std::istringstream(std::string(res.value().body), std::ios_base::in);
    // std::cout <<  res.value().body.c_str() <<std::endl;
     std::cout <<  res.value().body <<std::endl;
    // ASSERT_TRUE( stream  != nullptr);
    // res->body;
}
