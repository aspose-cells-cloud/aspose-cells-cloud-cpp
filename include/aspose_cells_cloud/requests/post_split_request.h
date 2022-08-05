
/** --------------------------------------------------------------------------------------------------------------------
* <copyright company="Aspose" file=" post_split_request.h">
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
#include "./request_model_base.h"

namespace aspose::cells::cloud::requests {
    class PostSplitRequest : public RequestModelBase {
    public:
        ASPOSE_CELLS_CLOUD_EXPORT PostSplitRequest(
            const std::shared_ptr< std::map< std::wstring ,std::shared_ptr<  std::istream >>> files,
            const std::shared_ptr< std::wstring > format,
            const std::shared_ptr< std::wstring > password =  nullptr,
            const std::shared_ptr< int > from =  nullptr,
            const std::shared_ptr< int > to =  nullptr,
            const std::shared_ptr< bool > checkExcelRestriction = nullptr
        );
        ASPOSE_CELLS_CLOUD_EXPORT const std::shared_ptr< std::map< std::wstring ,std::shared_ptr<  std::istream >>> getFiles() const;
        ASPOSE_CELLS_CLOUD_EXPORT const std::shared_ptr< std::wstring > getFormat() const;
        ASPOSE_CELLS_CLOUD_EXPORT const std::shared_ptr< std::wstring > getPassword() const;
        ASPOSE_CELLS_CLOUD_EXPORT const std::shared_ptr< int > getFrom() const;
        ASPOSE_CELLS_CLOUD_EXPORT const std::shared_ptr< int > getTo() const;
        ASPOSE_CELLS_CLOUD_EXPORT const std::shared_ptr< bool > getCheckExcelRestriction() const;
        ASPOSE_CELLS_CLOUD_EXPORT virtual std::shared_ptr< aspose::cells::cloud::HttpRequestData > createHttpRequest() const override;
        ASPOSE_CELLS_CLOUD_EXPORT virtual std::shared_ptr< aspose::cells::cloud::responses::ResponseModelBase > createResponse() const override;

    private:
        const std::shared_ptr< std::map< std::wstring ,std::shared_ptr<  std::istream >>> m_Files;
        const std::shared_ptr<  std::wstring > m_Format;
        const std::shared_ptr<  std::wstring > m_Password;
        const std::shared_ptr<  int > m_From;
        const std::shared_ptr<  int > m_To;
        const std::shared_ptr< bool > m_CheckExcelRestriction ;
    };
}
