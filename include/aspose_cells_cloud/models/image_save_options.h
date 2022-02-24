
/** --------------------------------------------------------------------------------------------------------------------
* <copyright company="Aspose" file=" image_save_options.h">
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
    class ImageSaveOptions : public SaveOptions
    {
    public:
        ASPOSE_CELLS_CLOUD_EXPORT virtual ~ImageSaveOptions() = default;
        ASPOSE_CELLS_CLOUD_EXPORT virtual void toJson(void* jsonIfc) const override;
        ASPOSE_CELLS_CLOUD_EXPORT virtual void fromJson(const void* jsonIfc) override;
        ASPOSE_CELLS_CLOUD_EXPORT std::shared_ptr< std::wstring > getChartImageType() const;
        ASPOSE_CELLS_CLOUD_EXPORT void setChartImageType(  std::shared_ptr< std::wstring> value );
        ASPOSE_CELLS_CLOUD_EXPORT std::shared_ptr< std::wstring > getEmbededImageNameInSvg() const;
        ASPOSE_CELLS_CLOUD_EXPORT void setEmbededImageNameInSvg(  std::shared_ptr< std::wstring> value );
        ASPOSE_CELLS_CLOUD_EXPORT std::shared_ptr< int > getHorizontalResolution() const;
        ASPOSE_CELLS_CLOUD_EXPORT void setHorizontalResolution(  std::shared_ptr< int> value );
        ASPOSE_CELLS_CLOUD_EXPORT std::shared_ptr< std::wstring > getImageFormat() const;
        ASPOSE_CELLS_CLOUD_EXPORT void setImageFormat(  std::shared_ptr< std::wstring> value );
        ASPOSE_CELLS_CLOUD_EXPORT std::shared_ptr< bool > getIsCellAutoFit() const;
        ASPOSE_CELLS_CLOUD_EXPORT void setIsCellAutoFit(  std::shared_ptr< bool> value );
        ASPOSE_CELLS_CLOUD_EXPORT std::shared_ptr< bool > getOnePagePerSheet() const;
        ASPOSE_CELLS_CLOUD_EXPORT void setOnePagePerSheet(  std::shared_ptr< bool> value );
        ASPOSE_CELLS_CLOUD_EXPORT std::shared_ptr< bool > getOnlyArea() const;
        ASPOSE_CELLS_CLOUD_EXPORT void setOnlyArea(  std::shared_ptr< bool> value );
        ASPOSE_CELLS_CLOUD_EXPORT std::shared_ptr< std::wstring > getPrintingPage() const;
        ASPOSE_CELLS_CLOUD_EXPORT void setPrintingPage(  std::shared_ptr< std::wstring> value );
        ASPOSE_CELLS_CLOUD_EXPORT std::shared_ptr< int > getPrintWithStatusDialog() const;
        ASPOSE_CELLS_CLOUD_EXPORT void setPrintWithStatusDialog(  std::shared_ptr< int> value );
        ASPOSE_CELLS_CLOUD_EXPORT std::shared_ptr< int > getQuality() const;
        ASPOSE_CELLS_CLOUD_EXPORT void setQuality(  std::shared_ptr< int> value );
        ASPOSE_CELLS_CLOUD_EXPORT std::shared_ptr< std::wstring > getTiffCompression() const;
        ASPOSE_CELLS_CLOUD_EXPORT void setTiffCompression(  std::shared_ptr< std::wstring> value );
        ASPOSE_CELLS_CLOUD_EXPORT std::shared_ptr< int > getVerticalResolution() const;
        ASPOSE_CELLS_CLOUD_EXPORT void setVerticalResolution(  std::shared_ptr< int> value );
    protected:
        std::shared_ptr< std::wstring > m_ChartImageType;
        std::shared_ptr< std::wstring > m_EmbededImageNameInSvg;
        std::shared_ptr< int > m_HorizontalResolution;
        std::shared_ptr< std::wstring > m_ImageFormat;
        std::shared_ptr< bool > m_IsCellAutoFit;
        std::shared_ptr< bool > m_OnePagePerSheet;
        std::shared_ptr< bool > m_OnlyArea;
        std::shared_ptr< std::wstring > m_PrintingPage;
        std::shared_ptr< int > m_PrintWithStatusDialog;
        std::shared_ptr< int > m_Quality;
        std::shared_ptr< std::wstring > m_TiffCompression;
        std::shared_ptr< int > m_VerticalResolution;
    };
}
