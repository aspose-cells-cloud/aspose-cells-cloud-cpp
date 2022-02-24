
/** --------------------------------------------------------------------------------------------------------------------
* <copyright company="Aspose" file=" cells_cloud_file_info.h">
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
    class CellsCloudFileInfo : public ModelBase
    {
    public:
        ASPOSE_CELLS_CLOUD_EXPORT virtual ~CellsCloudFileInfo() = default;
        ASPOSE_CELLS_CLOUD_EXPORT virtual void toJson(void* jsonIfc) const override;
        ASPOSE_CELLS_CLOUD_EXPORT virtual void fromJson(const void* jsonIfc) override;
        ASPOSE_CELLS_CLOUD_EXPORT std::shared_ptr< std::wstring > getName() const;
        ASPOSE_CELLS_CLOUD_EXPORT void setName(  std::shared_ptr< std::wstring> value );
        ASPOSE_CELLS_CLOUD_EXPORT std::shared_ptr< int > getSize() const;
        ASPOSE_CELLS_CLOUD_EXPORT void setSize(  std::shared_ptr< int> value );
        ASPOSE_CELLS_CLOUD_EXPORT std::shared_ptr< std::wstring > getFolder() const;
        ASPOSE_CELLS_CLOUD_EXPORT void setFolder(  std::shared_ptr< std::wstring> value );
        ASPOSE_CELLS_CLOUD_EXPORT std::shared_ptr< std::wstring > getStorage() const;
        ASPOSE_CELLS_CLOUD_EXPORT void setStorage(  std::shared_ptr< std::wstring> value );
    protected:
        std::shared_ptr< std::wstring > m_Name;
        std::shared_ptr< int > m_Size;
        std::shared_ptr< std::wstring > m_Folder;
        std::shared_ptr< std::wstring > m_Storage;
    };
}
