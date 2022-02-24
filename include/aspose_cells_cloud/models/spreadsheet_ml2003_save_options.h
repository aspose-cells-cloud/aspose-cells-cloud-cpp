
/** --------------------------------------------------------------------------------------------------------------------
* <copyright company="Aspose" file=" spreadsheet_ml2003_save_options.h">
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
    class SpreadsheetML2003SaveOptions : public SaveOptions
    {
    public:
        ASPOSE_CELLS_CLOUD_EXPORT virtual ~SpreadsheetML2003SaveOptions() = default;
        ASPOSE_CELLS_CLOUD_EXPORT virtual void toJson(void* jsonIfc) const override;
        ASPOSE_CELLS_CLOUD_EXPORT virtual void fromJson(const void* jsonIfc) override;
        ASPOSE_CELLS_CLOUD_EXPORT std::shared_ptr< bool > getExportColumnIndexOfCell() const;
        ASPOSE_CELLS_CLOUD_EXPORT void setExportColumnIndexOfCell(  std::shared_ptr< bool> value );
        ASPOSE_CELLS_CLOUD_EXPORT std::shared_ptr< bool > getIsIndentedFormatting() const;
        ASPOSE_CELLS_CLOUD_EXPORT void setIsIndentedFormatting(  std::shared_ptr< bool> value );
        ASPOSE_CELLS_CLOUD_EXPORT std::shared_ptr< bool > getLimitAsXls() const;
        ASPOSE_CELLS_CLOUD_EXPORT void setLimitAsXls(  std::shared_ptr< bool> value );
    protected:
        std::shared_ptr< bool > m_ExportColumnIndexOfCell;
        std::shared_ptr< bool > m_IsIndentedFormatting;
        std::shared_ptr< bool > m_LimitAsXls;
    };
}
