
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
    class PostClearObjectsRequest : public RequestModelBase {
    public:
        ASPOSE_CELLS_CLOUD_EXPORT PostClearObjectsRequest(
            const std::shared_ptr< std::map< std::wstring ,std::shared_ptr<  std::istream >>> files,
            const std::shared_ptr< std::wstring > objecttype,
            const std::shared_ptr< std::wstring > sheetname =  nullptr,
            const std::shared_ptr< bool > checkExcelRestriction = nullptr
        );
        ASPOSE_CELLS_CLOUD_EXPORT const std::shared_ptr< std::map< std::wstring ,std::shared_ptr<  std::istream >>> getFiles() const;
        ASPOSE_CELLS_CLOUD_EXPORT const std::shared_ptr< std::wstring > getObjectType() const;
        ASPOSE_CELLS_CLOUD_EXPORT const std::shared_ptr< std::wstring > getSheetName() const;
        ASPOSE_CELLS_CLOUD_EXPORT const std::shared_ptr< bool > getCheckExcelRestriction() const;
        
        ASPOSE_CELLS_CLOUD_EXPORT virtual std::shared_ptr< aspose::cells::cloud::HttpRequestData > createHttpRequest() const override;
        ASPOSE_CELLS_CLOUD_EXPORT virtual std::shared_ptr< aspose::cells::cloud::responses::ResponseModelBase > createResponse() const override;

    private:
        const std::shared_ptr< std::map< std::wstring ,std::shared_ptr<  std::istream >>> m_Files;
        const std::shared_ptr<  std::wstring > m_ObjectType;
        const std::shared_ptr<  std::wstring > m_SheetName;
        const std::shared_ptr< bool > m_CheckExcelRestriction ;
    };
}
