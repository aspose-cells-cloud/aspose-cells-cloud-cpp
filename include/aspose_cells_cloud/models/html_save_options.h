
/** --------------------------------------------------------------------------------------------------------------------
* <copyright company="Aspose" file=" html_save_options.h">
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
    class HtmlSaveOptions : public SaveOptions
    {
    public:
        ASPOSE_CELLS_CLOUD_EXPORT virtual ~HtmlSaveOptions() = default;
        ASPOSE_CELLS_CLOUD_EXPORT virtual void toJson(void* jsonIfc) const override;
        ASPOSE_CELLS_CLOUD_EXPORT virtual void fromJson(const void* jsonIfc) override;
        ASPOSE_CELLS_CLOUD_EXPORT std::shared_ptr< std::wstring > getSaveAsSingleFile() const;
        ASPOSE_CELLS_CLOUD_EXPORT void setSaveAsSingleFile(  std::shared_ptr< std::wstring> value );
        ASPOSE_CELLS_CLOUD_EXPORT std::shared_ptr< std::wstring > getExportHiddenWorksheet() const;
        ASPOSE_CELLS_CLOUD_EXPORT void setExportHiddenWorksheet(  std::shared_ptr< std::wstring> value );
        ASPOSE_CELLS_CLOUD_EXPORT std::shared_ptr< std::wstring > getExportGridLines() const;
        ASPOSE_CELLS_CLOUD_EXPORT void setExportGridLines(  std::shared_ptr< std::wstring> value );
        ASPOSE_CELLS_CLOUD_EXPORT std::shared_ptr< std::wstring > getPresentationPreference() const;
        ASPOSE_CELLS_CLOUD_EXPORT void setPresentationPreference(  std::shared_ptr< std::wstring> value );
        ASPOSE_CELLS_CLOUD_EXPORT std::shared_ptr< std::wstring > getCellCssPrefix() const;
        ASPOSE_CELLS_CLOUD_EXPORT void setCellCssPrefix(  std::shared_ptr< std::wstring> value );
        ASPOSE_CELLS_CLOUD_EXPORT std::shared_ptr< std::wstring > getTableCssId() const;
        ASPOSE_CELLS_CLOUD_EXPORT void setTableCssId(  std::shared_ptr< std::wstring> value );
        ASPOSE_CELLS_CLOUD_EXPORT std::shared_ptr< std::wstring > getIsFullPathLink() const;
        ASPOSE_CELLS_CLOUD_EXPORT void setIsFullPathLink(  std::shared_ptr< std::wstring> value );
        ASPOSE_CELLS_CLOUD_EXPORT std::shared_ptr< std::wstring > getExportWorksheetCSSSeparately() const;
        ASPOSE_CELLS_CLOUD_EXPORT void setExportWorksheetCSSSeparately(  std::shared_ptr< std::wstring> value );
        ASPOSE_CELLS_CLOUD_EXPORT std::shared_ptr< std::wstring > getExportSimilarBorderStyle() const;
        ASPOSE_CELLS_CLOUD_EXPORT void setExportSimilarBorderStyle(  std::shared_ptr< std::wstring> value );
        ASPOSE_CELLS_CLOUD_EXPORT std::shared_ptr< std::wstring > getMergeEmptyTdForcely() const;
        ASPOSE_CELLS_CLOUD_EXPORT void setMergeEmptyTdForcely(  std::shared_ptr< std::wstring> value );
        ASPOSE_CELLS_CLOUD_EXPORT std::shared_ptr< std::wstring > getExportCellCoordinate() const;
        ASPOSE_CELLS_CLOUD_EXPORT void setExportCellCoordinate(  std::shared_ptr< std::wstring> value );
        ASPOSE_CELLS_CLOUD_EXPORT std::shared_ptr< std::wstring > getExportExtraHeadings() const;
        ASPOSE_CELLS_CLOUD_EXPORT void setExportExtraHeadings(  std::shared_ptr< std::wstring> value );
        ASPOSE_CELLS_CLOUD_EXPORT std::shared_ptr< std::wstring > getExportHeadings() const;
        ASPOSE_CELLS_CLOUD_EXPORT void setExportHeadings(  std::shared_ptr< std::wstring> value );
        ASPOSE_CELLS_CLOUD_EXPORT std::shared_ptr< std::wstring > getExportFormula() const;
        ASPOSE_CELLS_CLOUD_EXPORT void setExportFormula(  std::shared_ptr< std::wstring> value );
        ASPOSE_CELLS_CLOUD_EXPORT std::shared_ptr< std::wstring > getAddTooltipText() const;
        ASPOSE_CELLS_CLOUD_EXPORT void setAddTooltipText(  std::shared_ptr< std::wstring> value );
        ASPOSE_CELLS_CLOUD_EXPORT std::shared_ptr< std::wstring > getExportBogusRowData() const;
        ASPOSE_CELLS_CLOUD_EXPORT void setExportBogusRowData(  std::shared_ptr< std::wstring> value );
        ASPOSE_CELLS_CLOUD_EXPORT std::shared_ptr< std::wstring > getExcludeUnusedStyles() const;
        ASPOSE_CELLS_CLOUD_EXPORT void setExcludeUnusedStyles(  std::shared_ptr< std::wstring> value );
        ASPOSE_CELLS_CLOUD_EXPORT std::shared_ptr< std::wstring > getExportDocumentProperties() const;
        ASPOSE_CELLS_CLOUD_EXPORT void setExportDocumentProperties(  std::shared_ptr< std::wstring> value );
        ASPOSE_CELLS_CLOUD_EXPORT std::shared_ptr< std::wstring > getExportWorksheetProperties() const;
        ASPOSE_CELLS_CLOUD_EXPORT void setExportWorksheetProperties(  std::shared_ptr< std::wstring> value );
        ASPOSE_CELLS_CLOUD_EXPORT std::shared_ptr< std::wstring > getExportWorkbookProperties() const;
        ASPOSE_CELLS_CLOUD_EXPORT void setExportWorkbookProperties(  std::shared_ptr< std::wstring> value );
        ASPOSE_CELLS_CLOUD_EXPORT std::shared_ptr< std::wstring > getExportFrameScriptsAndProperties() const;
        ASPOSE_CELLS_CLOUD_EXPORT void setExportFrameScriptsAndProperties(  std::shared_ptr< std::wstring> value );
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
        std::shared_ptr< std::wstring > m_SaveAsSingleFile;
        std::shared_ptr< std::wstring > m_ExportHiddenWorksheet;
        std::shared_ptr< std::wstring > m_ExportGridLines;
        std::shared_ptr< std::wstring > m_PresentationPreference;
        std::shared_ptr< std::wstring > m_CellCssPrefix;
        std::shared_ptr< std::wstring > m_TableCssId;
        std::shared_ptr< std::wstring > m_IsFullPathLink;
        std::shared_ptr< std::wstring > m_ExportWorksheetCSSSeparately;
        std::shared_ptr< std::wstring > m_ExportSimilarBorderStyle;
        std::shared_ptr< std::wstring > m_MergeEmptyTdForcely;
        std::shared_ptr< std::wstring > m_ExportCellCoordinate;
        std::shared_ptr< std::wstring > m_ExportExtraHeadings;
        std::shared_ptr< std::wstring > m_ExportHeadings;
        std::shared_ptr< std::wstring > m_ExportFormula;
        std::shared_ptr< std::wstring > m_AddTooltipText;
        std::shared_ptr< std::wstring > m_ExportBogusRowData;
        std::shared_ptr< std::wstring > m_ExcludeUnusedStyles;
        std::shared_ptr< std::wstring > m_ExportDocumentProperties;
        std::shared_ptr< std::wstring > m_ExportWorksheetProperties;
        std::shared_ptr< std::wstring > m_ExportWorkbookProperties;
        std::shared_ptr< std::wstring > m_ExportFrameScriptsAndProperties;
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
