
/** --------------------------------------------------------------------------------------------------------------------
* <copyright company="Aspose" file=" save_options.h">
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

namespace aspose::cells::cloud::models {
    /// <summary>
    /// 
    /// </summary>
    class SaveOptions : public ModelBase
    {
    public:
        ASPOSE_CELLS_CLOUD_EXPORT virtual ~SaveOptions() = default;
        ASPOSE_CELLS_CLOUD_EXPORT virtual void toJson(void* jsonIfc) const override;
        ASPOSE_CELLS_CLOUD_EXPORT virtual void fromJson(const void* jsonIfc) override;
        ASPOSE_CELLS_CLOUD_EXPORT std::shared_ptr< bool > getEnableHTTPCompression() const;
        ASPOSE_CELLS_CLOUD_EXPORT void setEnableHTTPCompression(  std::shared_ptr< bool> value );
        ASPOSE_CELLS_CLOUD_EXPORT std::shared_ptr< std::wstring > getSaveFormat() const;
        ASPOSE_CELLS_CLOUD_EXPORT void setSaveFormat(  std::shared_ptr< std::wstring> value );
        ASPOSE_CELLS_CLOUD_EXPORT std::shared_ptr< bool > getClearData() const;
        ASPOSE_CELLS_CLOUD_EXPORT void setClearData(  std::shared_ptr< bool> value );
        ASPOSE_CELLS_CLOUD_EXPORT std::shared_ptr< std::wstring > getCachedFileFolder() const;
        ASPOSE_CELLS_CLOUD_EXPORT void setCachedFileFolder(  std::shared_ptr< std::wstring> value );
        ASPOSE_CELLS_CLOUD_EXPORT std::shared_ptr< bool > getValidateMergedAreas() const;
        ASPOSE_CELLS_CLOUD_EXPORT void setValidateMergedAreas(  std::shared_ptr< bool> value );
        ASPOSE_CELLS_CLOUD_EXPORT std::shared_ptr< bool > getRefreshChartCache() const;
        ASPOSE_CELLS_CLOUD_EXPORT void setRefreshChartCache(  std::shared_ptr< bool> value );
        ASPOSE_CELLS_CLOUD_EXPORT std::shared_ptr< bool > getCreateDirectory() const;
        ASPOSE_CELLS_CLOUD_EXPORT void setCreateDirectory(  std::shared_ptr< bool> value );
        ASPOSE_CELLS_CLOUD_EXPORT std::shared_ptr< bool > getSortNames() const;
        ASPOSE_CELLS_CLOUD_EXPORT void setSortNames(  std::shared_ptr< bool> value );
    protected:
        std::shared_ptr< bool > m_EnableHTTPCompression;
        std::shared_ptr< std::wstring > m_SaveFormat;
        std::shared_ptr< bool > m_ClearData;
        std::shared_ptr< std::wstring > m_CachedFileFolder;
        std::shared_ptr< bool > m_ValidateMergedAreas;
        std::shared_ptr< bool > m_RefreshChartCache;
        std::shared_ptr< bool > m_CreateDirectory;
        std::shared_ptr< bool > m_SortNames;
    };
}
