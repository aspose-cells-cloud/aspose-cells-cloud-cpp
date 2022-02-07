/** --------------------------------------------------------------------------------------------------------------------
* <copyright company="Aspose" file="protect_workbook_request.h">
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
    class ProtectWorkbookRequest : public RequestModelBase {
    public:
        ASPOSE_CELLS_CLOUD_EXPORT ProtectWorkbookRequest(
            const std::shared_ptr< std::istream > fileStream,
            const std::shared_ptr< std::wstring > password
            // const std::shared_ptr< bool > saveToCloud = nullptr,
            // const std::shared_ptr< std::wstring > outPath = nullptr,
            // const std::shared_ptr< std::wstring > storageName = nullptr
        );

        ASPOSE_CELLS_CLOUD_EXPORT const std::shared_ptr< std::istream > getFileStream() const;    
        ASPOSE_CELLS_CLOUD_EXPORT const std::shared_ptr< std::wstring > getPassword() const;
        // ASPOSE_CELLS_CLOUD_EXPORT const std::shared_ptr< bool > getSaveToCloud() const;    
        // ASPOSE_CELLS_CLOUD_EXPORT const std::shared_ptr< std::wstring > getOutPath() const;
        // ASPOSE_CELLS_CLOUD_EXPORT const std::shared_ptr< std::wstring > getStorageName() const;
        

        ASPOSE_CELLS_CLOUD_EXPORT virtual std::shared_ptr< aspose::cells::cloud::HttpRequestData > createHttpRequest() const override;
        ASPOSE_CELLS_CLOUD_EXPORT virtual std::shared_ptr< aspose::cells::cloud::responses::ResponseModelBase > createResponse() const override;

    private:
        const std::shared_ptr< std::wstring > m_OutPath;
        const std::shared_ptr< std::istream > m_FileStream;
        const std::shared_ptr< std::wstring > m_StorageName;
        const std::shared_ptr< bool > m_SaveToCloud;
        const std::shared_ptr< std::wstring > m_Password;

    };
}
