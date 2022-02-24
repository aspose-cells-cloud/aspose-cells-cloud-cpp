
/** --------------------------------------------------------------------------------------------------------------------
* <copyright company="Aspose" file=" post_document_save_as_request.h">
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
    class postDocumentSaveAsRequest : public RequestModelBase {
    public:
        ASPOSE_CELLS_CLOUD_EXPORT postDocumentSaveAsRequest(
            const std::shared_ptr< std::wstring > name,
            const std::shared_ptr< aspose::cells::cloud::models::SaveOptions > saveOptions =  nullptr,
            const std::shared_ptr< std::wstring > newfilename =  nullptr,
            const std::shared_ptr< bool > isAutoFitRows =  nullptr,
            const std::shared_ptr< bool > isAutoFitColumns =  nullptr,
            const std::shared_ptr< std::wstring > folder =  nullptr,
            const std::shared_ptr< std::wstring > storageName =  nullptr,
            const std::shared_ptr< std::wstring > outStorageName =  nullptr
        );
        ASPOSE_CELLS_CLOUD_EXPORT const std::shared_ptr< std::wstring > getName() const;
        ASPOSE_CELLS_CLOUD_EXPORT const std::shared_ptr< aspose::cells::cloud::models::SaveOptions > getSaveOptions() const;
        ASPOSE_CELLS_CLOUD_EXPORT const std::shared_ptr< std::wstring > getNewfilename() const;
        ASPOSE_CELLS_CLOUD_EXPORT const std::shared_ptr< bool > getIsAutoFitRows() const;
        ASPOSE_CELLS_CLOUD_EXPORT const std::shared_ptr< bool > getIsAutoFitColumns() const;
        ASPOSE_CELLS_CLOUD_EXPORT const std::shared_ptr< std::wstring > getFolder() const;
        ASPOSE_CELLS_CLOUD_EXPORT const std::shared_ptr< std::wstring > getStorageName() const;
        ASPOSE_CELLS_CLOUD_EXPORT const std::shared_ptr< std::wstring > getOutStorageName() const;

        ASPOSE_CELLS_CLOUD_EXPORT virtual std::shared_ptr< aspose::cells::cloud::HttpRequestData > createHttpRequest() const override;
        ASPOSE_CELLS_CLOUD_EXPORT virtual std::shared_ptr< aspose::cells::cloud::responses::ResponseModelBase > createResponse() const override;

    private:
        const std::shared_ptr<  std::wstring > m_Name;
        const std::shared_ptr<  aspose::cells::cloud::models::SaveOptions > m_SaveOptions;
        const std::shared_ptr<  std::wstring > m_Newfilename;
        const std::shared_ptr<  bool > m_IsAutoFitRows;
        const std::shared_ptr<  bool > m_IsAutoFitColumns;
        const std::shared_ptr<  std::wstring > m_Folder;
        const std::shared_ptr<  std::wstring > m_StorageName;
        const std::shared_ptr<  std::wstring > m_OutStorageName;

    };
}
