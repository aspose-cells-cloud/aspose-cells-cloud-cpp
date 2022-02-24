
/** --------------------------------------------------------------------------------------------------------------------
* <copyright company="Aspose" file=" m_html_save_options.h">
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
#include "./model_base.h"
#include "./save_options.h"

namespace aspose::cells::cloud::models {
    /// <summary>
    /// 
    /// </summary>
    class MHtmlSaveOptions : public SaveOptions
    {
    public:
        ASPOSE_CELLS_CLOUD_EXPORT virtual ~MHtmlSaveOptions() = default;
        ASPOSE_CELLS_CLOUD_EXPORT virtual void toJson(void* jsonIfc) const override;
        ASPOSE_CELLS_CLOUD_EXPORT virtual void fromJson(const void* jsonIfc) override;
        ASPOSE_CELLS_CLOUD_EXPORT std::shared_ptr< std::wstring > getAttachedFilesDirectory() const;
        ASPOSE_CELLS_CLOUD_EXPORT void setAttachedFilesDirectory(  std::shared_ptr< std::wstring> value );
        ASPOSE_CELLS_CLOUD_EXPORT std::shared_ptr< std::wstring > getAttachedFilesUrlPrefix() const;
        ASPOSE_CELLS_CLOUD_EXPORT void setAttachedFilesUrlPrefix(  std::shared_ptr< std::wstring> value );
        ASPOSE_CELLS_CLOUD_EXPORT std::shared_ptr< std::wstring > getEncoding() const;
        ASPOSE_CELLS_CLOUD_EXPORT void setEncoding(  std::shared_ptr< std::wstring> value );
        ASPOSE_CELLS_CLOUD_EXPORT std::shared_ptr< bool > getExportActiveWorksheetOnly() const;
        ASPOSE_CELLS_CLOUD_EXPORT void setExportActiveWorksheetOnly(  std::shared_ptr< bool> value );
        ASPOSE_CELLS_CLOUD_EXPORT std::shared_ptr< std::wstring > getExportChartImageFormat() const;
        ASPOSE_CELLS_CLOUD_EXPORT void setExportChartImageFormat(  std::shared_ptr< std::wstring> value );
        ASPOSE_CELLS_CLOUD_EXPORT std::shared_ptr< bool > getExportImagesAsBase64() const;
        ASPOSE_CELLS_CLOUD_EXPORT void setExportImagesAsBase64(  std::shared_ptr< bool> value );
        ASPOSE_CELLS_CLOUD_EXPORT std::shared_ptr< std::wstring > getHiddenColDisplayType() const;
        ASPOSE_CELLS_CLOUD_EXPORT void setHiddenColDisplayType(  std::shared_ptr< std::wstring> value );
        ASPOSE_CELLS_CLOUD_EXPORT std::shared_ptr< std::wstring > getHiddenRowDisplayType() const;
        ASPOSE_CELLS_CLOUD_EXPORT void setHiddenRowDisplayType(  std::shared_ptr< std::wstring> value );
        ASPOSE_CELLS_CLOUD_EXPORT std::shared_ptr< std::wstring > getHtmlCrossStringType() const;
        ASPOSE_CELLS_CLOUD_EXPORT void setHtmlCrossStringType(  std::shared_ptr< std::wstring> value );
        ASPOSE_CELLS_CLOUD_EXPORT std::shared_ptr< bool > getIsExpImageToTempDir() const;
        ASPOSE_CELLS_CLOUD_EXPORT void setIsExpImageToTempDir(  std::shared_ptr< bool> value );
        ASPOSE_CELLS_CLOUD_EXPORT std::shared_ptr< std::wstring > getPageTitle() const;
        ASPOSE_CELLS_CLOUD_EXPORT void setPageTitle(  std::shared_ptr< std::wstring> value );
        ASPOSE_CELLS_CLOUD_EXPORT std::shared_ptr< bool > getParseHtmlTagInCell() const;
        ASPOSE_CELLS_CLOUD_EXPORT void setParseHtmlTagInCell(  std::shared_ptr< bool> value );
    protected:
        std::shared_ptr< std::wstring > m_AttachedFilesDirectory;
        std::shared_ptr< std::wstring > m_AttachedFilesUrlPrefix;
        std::shared_ptr< std::wstring > m_Encoding;
        std::shared_ptr< bool > m_ExportActiveWorksheetOnly;
        std::shared_ptr< std::wstring > m_ExportChartImageFormat;
        std::shared_ptr< bool > m_ExportImagesAsBase64;
        std::shared_ptr< std::wstring > m_HiddenColDisplayType;
        std::shared_ptr< std::wstring > m_HiddenRowDisplayType;
        std::shared_ptr< std::wstring > m_HtmlCrossStringType;
        std::shared_ptr< bool > m_IsExpImageToTempDir;
        std::shared_ptr< std::wstring > m_PageTitle;
        std::shared_ptr< bool > m_ParseHtmlTagInCell;
    };
}
