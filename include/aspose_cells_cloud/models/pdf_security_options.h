
/** --------------------------------------------------------------------------------------------------------------------
* <copyright company="Aspose" file=" pdf_security_options.h">
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
    class PdfSecurityOptions : public ModelBase
    {
    public:
        ASPOSE_CELLS_CLOUD_EXPORT virtual ~PdfSecurityOptions() = default;
        ASPOSE_CELLS_CLOUD_EXPORT virtual void toJson(void* jsonIfc) const override;
        ASPOSE_CELLS_CLOUD_EXPORT virtual void fromJson(const void* jsonIfc) override;
        ASPOSE_CELLS_CLOUD_EXPORT std::shared_ptr< bool > getAnnotationsPermission() const;
        ASPOSE_CELLS_CLOUD_EXPORT void setAnnotationsPermission(  std::shared_ptr< bool> value );
        ASPOSE_CELLS_CLOUD_EXPORT std::shared_ptr< bool > getAssembleDocumentPermission() const;
        ASPOSE_CELLS_CLOUD_EXPORT void setAssembleDocumentPermission(  std::shared_ptr< bool> value );
        ASPOSE_CELLS_CLOUD_EXPORT std::shared_ptr< bool > getExtractContentPermission() const;
        ASPOSE_CELLS_CLOUD_EXPORT void setExtractContentPermission(  std::shared_ptr< bool> value );
        ASPOSE_CELLS_CLOUD_EXPORT std::shared_ptr< bool > getExtractContentPermissionObsolete() const;
        ASPOSE_CELLS_CLOUD_EXPORT void setExtractContentPermissionObsolete(  std::shared_ptr< bool> value );
        ASPOSE_CELLS_CLOUD_EXPORT std::shared_ptr< bool > getFillFormsPermission() const;
        ASPOSE_CELLS_CLOUD_EXPORT void setFillFormsPermission(  std::shared_ptr< bool> value );
        ASPOSE_CELLS_CLOUD_EXPORT std::shared_ptr< bool > getFullQualityPrintPermission() const;
        ASPOSE_CELLS_CLOUD_EXPORT void setFullQualityPrintPermission(  std::shared_ptr< bool> value );
        ASPOSE_CELLS_CLOUD_EXPORT std::shared_ptr< bool > getModifyDocumentPermission() const;
        ASPOSE_CELLS_CLOUD_EXPORT void setModifyDocumentPermission(  std::shared_ptr< bool> value );
        ASPOSE_CELLS_CLOUD_EXPORT std::shared_ptr< std::wstring > getOwnerPassword() const;
        ASPOSE_CELLS_CLOUD_EXPORT void setOwnerPassword(  std::shared_ptr< std::wstring> value );
        ASPOSE_CELLS_CLOUD_EXPORT std::shared_ptr< bool > getPrintPermission() const;
        ASPOSE_CELLS_CLOUD_EXPORT void setPrintPermission(  std::shared_ptr< bool> value );
        ASPOSE_CELLS_CLOUD_EXPORT std::shared_ptr< std::wstring > getUserPassword() const;
        ASPOSE_CELLS_CLOUD_EXPORT void setUserPassword(  std::shared_ptr< std::wstring> value );
    protected:
        std::shared_ptr< bool > m_AnnotationsPermission;
        std::shared_ptr< bool > m_AssembleDocumentPermission;
        std::shared_ptr< bool > m_ExtractContentPermission;
        std::shared_ptr< bool > m_ExtractContentPermissionObsolete;
        std::shared_ptr< bool > m_FillFormsPermission;
        std::shared_ptr< bool > m_FullQualityPrintPermission;
        std::shared_ptr< bool > m_ModifyDocumentPermission;
        std::shared_ptr< std::wstring > m_OwnerPassword;
        std::shared_ptr< bool > m_PrintPermission;
        std::shared_ptr< std::wstring > m_UserPassword;
    };
}
