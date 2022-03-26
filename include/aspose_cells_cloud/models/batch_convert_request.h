
/** --------------------------------------------------------------------------------------------------------------------
* <copyright company="Aspose" file=" batch_convert_request.h">
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
#include "./match_condition_request.h"
#include "./save_options.h"

namespace aspose::cells::cloud::models {
    /// <summary>
    /// 
    /// </summary>
    class BatchConvertRequest : public ModelBase
    {
    public:
        ASPOSE_CELLS_CLOUD_EXPORT virtual ~BatchConvertRequest() = default;
        ASPOSE_CELLS_CLOUD_EXPORT virtual void toJson(void* jsonIfc) const override;
        ASPOSE_CELLS_CLOUD_EXPORT virtual void fromJson(const void* jsonIfc) override;
        ASPOSE_CELLS_CLOUD_EXPORT std::shared_ptr< std::wstring > getSourceFolder() const;
        ASPOSE_CELLS_CLOUD_EXPORT void setSourceFolder(  std::shared_ptr< std::wstring> value );
        ASPOSE_CELLS_CLOUD_EXPORT std::shared_ptr< std::wstring > getSourceStorage() const;
        ASPOSE_CELLS_CLOUD_EXPORT void setSourceStorage(  std::shared_ptr< std::wstring> value );
        ASPOSE_CELLS_CLOUD_EXPORT std::shared_ptr< aspose::cells::cloud::models::MatchConditionRequest > getMatchCondition() const;
        ASPOSE_CELLS_CLOUD_EXPORT void setMatchCondition(  std::shared_ptr< aspose::cells::cloud::models::MatchConditionRequest> value );
        ASPOSE_CELLS_CLOUD_EXPORT std::shared_ptr< std::wstring > getFormat() const;
        ASPOSE_CELLS_CLOUD_EXPORT void setFormat(  std::shared_ptr< std::wstring> value );
        ASPOSE_CELLS_CLOUD_EXPORT std::shared_ptr< std::wstring > getOutFolder() const;
        ASPOSE_CELLS_CLOUD_EXPORT void setOutFolder(  std::shared_ptr< std::wstring> value );
        ASPOSE_CELLS_CLOUD_EXPORT std::shared_ptr< std::wstring > getOutStorage() const;
        ASPOSE_CELLS_CLOUD_EXPORT void setOutStorage(  std::shared_ptr< std::wstring> value );
        ASPOSE_CELLS_CLOUD_EXPORT std::shared_ptr< aspose::cells::cloud::models::SaveOptions > getSaveOptions() const;
        ASPOSE_CELLS_CLOUD_EXPORT void setSaveOptions(  std::shared_ptr< aspose::cells::cloud::models::SaveOptions> value );
    protected:
        std::shared_ptr< std::wstring > m_SourceFolder;
        std::shared_ptr< std::wstring > m_SourceStorage;
        std::shared_ptr< aspose::cells::cloud::models::MatchConditionRequest > m_MatchCondition;
        std::shared_ptr< std::wstring > m_Format;
        std::shared_ptr< std::wstring > m_OutFolder;
        std::shared_ptr< std::wstring > m_OutStorage;
        std::shared_ptr< aspose::cells::cloud::models::SaveOptions > m_SaveOptions;
    };
}
