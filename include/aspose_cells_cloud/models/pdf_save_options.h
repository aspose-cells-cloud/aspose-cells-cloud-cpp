
/** --------------------------------------------------------------------------------------------------------------------
* <copyright company="Aspose" file=" pdf_save_options.h">
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
#include "./pdf_security_options.h"

namespace aspose::cells::cloud::models {
    /// <summary>
    /// 
    /// </summary>
    class PdfSaveOptions : public SaveOptions
    {
    public:
        ASPOSE_CELLS_CLOUD_EXPORT virtual ~PdfSaveOptions() = default;
        ASPOSE_CELLS_CLOUD_EXPORT virtual void toJson(void* jsonIfc) const override;
        ASPOSE_CELLS_CLOUD_EXPORT virtual void fromJson(const void* jsonIfc) override;
        ASPOSE_CELLS_CLOUD_EXPORT std::shared_ptr< bool > getCalculateFormula() const;
        ASPOSE_CELLS_CLOUD_EXPORT void setCalculateFormula(  std::shared_ptr< bool> value );
        ASPOSE_CELLS_CLOUD_EXPORT std::shared_ptr< bool > getCheckFontCompatibility() const;
        ASPOSE_CELLS_CLOUD_EXPORT void setCheckFontCompatibility(  std::shared_ptr< bool> value );
        ASPOSE_CELLS_CLOUD_EXPORT std::shared_ptr< bool > getOnePagePerSheet() const;
        ASPOSE_CELLS_CLOUD_EXPORT void setOnePagePerSheet(  std::shared_ptr< bool> value );
        ASPOSE_CELLS_CLOUD_EXPORT std::shared_ptr< std::wstring > getCompliance() const;
        ASPOSE_CELLS_CLOUD_EXPORT void setCompliance(  std::shared_ptr< std::wstring> value );
        ASPOSE_CELLS_CLOUD_EXPORT std::shared_ptr< std::wstring > getDefaultFont() const;
        ASPOSE_CELLS_CLOUD_EXPORT void setDefaultFont(  std::shared_ptr< std::wstring> value );
        ASPOSE_CELLS_CLOUD_EXPORT std::shared_ptr< std::wstring > getPrintingPageType() const;
        ASPOSE_CELLS_CLOUD_EXPORT void setPrintingPageType(  std::shared_ptr< std::wstring> value );
        ASPOSE_CELLS_CLOUD_EXPORT std::shared_ptr< std::wstring > getImageType() const;
        ASPOSE_CELLS_CLOUD_EXPORT void setImageType(  std::shared_ptr< std::wstring> value );
        ASPOSE_CELLS_CLOUD_EXPORT std::shared_ptr< int > getDesiredPPI() const;
        ASPOSE_CELLS_CLOUD_EXPORT void setDesiredPPI(  std::shared_ptr< int> value );
        ASPOSE_CELLS_CLOUD_EXPORT std::shared_ptr< int > getJpegQuality() const;
        ASPOSE_CELLS_CLOUD_EXPORT void setJpegQuality(  std::shared_ptr< int> value );
        ASPOSE_CELLS_CLOUD_EXPORT std::shared_ptr< aspose::cells::cloud::models::PdfSecurityOptions > getSecurityOptions() const;
        ASPOSE_CELLS_CLOUD_EXPORT void setSecurityOptions(  std::shared_ptr< aspose::cells::cloud::models::PdfSecurityOptions> value );
    protected:
        std::shared_ptr< bool > m_CalculateFormula;
        std::shared_ptr< bool > m_CheckFontCompatibility;
        std::shared_ptr< bool > m_OnePagePerSheet;
        std::shared_ptr< std::wstring > m_Compliance;
        std::shared_ptr< std::wstring > m_DefaultFont;
        std::shared_ptr< std::wstring > m_PrintingPageType;
        std::shared_ptr< std::wstring > m_ImageType;
        std::shared_ptr< int > m_DesiredPPI;
        std::shared_ptr< int > m_JpegQuality;
        std::shared_ptr< aspose::cells::cloud::models::PdfSecurityOptions > m_SecurityOptions;
    };
}
