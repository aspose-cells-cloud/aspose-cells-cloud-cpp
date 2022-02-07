/** --------------------------------------------------------------------------------------------------------------------
* <copyright company="Aspose" file="get_document_request.h">
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
    class GetWorkbookRequest : public RequestModelBase {
    public:
        ASPOSE_CELLS_CLOUD_EXPORT GetWorkbookRequest(
            const std::shared_ptr< std::wstring > name,
            const std::shared_ptr< std::wstring > format,
            const std::shared_ptr< std::wstring > password = nullptr,
            const std::shared_ptr< bool > isAutoFit = nullptr,
            const std::shared_ptr< bool > onlySaveTable = nullptr,
            const std::shared_ptr< std::wstring > folder = nullptr,
            const std::shared_ptr< std::wstring > storageName = nullptr,
            const std::shared_ptr< std::wstring > outPath = nullptr,
            const std::shared_ptr< std::wstring > outStorageName = nullptr
        );

        ASPOSE_CELLS_CLOUD_EXPORT const std::shared_ptr< std::wstring > getName() const;
        ASPOSE_CELLS_CLOUD_EXPORT const std::shared_ptr< std::wstring > getFormat() const;
        ASPOSE_CELLS_CLOUD_EXPORT const std::shared_ptr< std::wstring > getPassword() const;
        ASPOSE_CELLS_CLOUD_EXPORT const std::shared_ptr< bool > getIsAutoFit() const;
        ASPOSE_CELLS_CLOUD_EXPORT const std::shared_ptr< bool > getOnlySaveTable() const;
        ASPOSE_CELLS_CLOUD_EXPORT const std::shared_ptr< std::wstring > getFolder() const;
        ASPOSE_CELLS_CLOUD_EXPORT const std::shared_ptr< std::wstring > getStorageName() const;
        ASPOSE_CELLS_CLOUD_EXPORT const std::shared_ptr< std::wstring > getOutPath() const;
        ASPOSE_CELLS_CLOUD_EXPORT const std::shared_ptr< std::wstring > getOutStorageName() const;

        ASPOSE_CELLS_CLOUD_EXPORT virtual std::shared_ptr< aspose::cells::cloud::HttpRequestData > createHttpRequest() const override;
        ASPOSE_CELLS_CLOUD_EXPORT virtual std::shared_ptr< aspose::cells::cloud::responses::ResponseModelBase > createResponse() const override;

    private:
        const std::shared_ptr< std::wstring > m_Name;
        const std::shared_ptr< std::wstring > m_Format;
        const std::shared_ptr< std::wstring > m_Password;        
        const std::shared_ptr< bool > m_IsAutoFit;
        const std::shared_ptr< bool > m_OnlySaveTable;
        const std::shared_ptr< std::wstring > m_Folder;
        const std::shared_ptr< std::wstring > m_StorageName;
        const std::shared_ptr< std::wstring > m_OutPath;
        const std::shared_ptr< std::wstring > m_OutStorageName;

    };
}
