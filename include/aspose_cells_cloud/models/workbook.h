/** --------------------------------------------------------------------------------------------------------------------
* <copyright company="Aspose" file="workbook.h">
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
#include "link.h"

namespace aspose::cells::cloud::models {
    /// <summary>
    /// File or folder information.
    /// </summary>
    class Workbook : public ModelBase
    {
    public:

        ASPOSE_CELLS_CLOUD_EXPORT virtual ~Workbook() = default;
        ASPOSE_CELLS_CLOUD_EXPORT virtual void toJson(void* jsonIfc) const override;
        ASPOSE_CELLS_CLOUD_EXPORT virtual void fromJson(const void* jsonIfc) override;

        /// <summary>
        /// Get filename of workbook.
        /// </summary>
        ASPOSE_CELLS_CLOUD_EXPORT std::shared_ptr< std::wstring > getFileName() const;
        
        /// <summary>
        /// Set filename of workbook.
        /// </summary>
        ASPOSE_CELLS_CLOUD_EXPORT void setFileName(std::shared_ptr< std::wstring > value);

        /// <summary>
        /// get password of workbook.
        /// </summary>
        ASPOSE_CELLS_CLOUD_EXPORT std::shared_ptr< std::wstring > getPassword() const;

        /// <summary>
        /// Set password of workbook.
        /// </summary>
        ASPOSE_CELLS_CLOUD_EXPORT void setPassword(std::shared_ptr< std::wstring > value);

        /// <summary>
        /// Gets or sets the list of links that originate from this document.
        /// </summary>
        ASPOSE_CELLS_CLOUD_EXPORT std::shared_ptr< std::vector<std::shared_ptr<aspose::cells::cloud::models::Link>> > getLinks() const;

        /// <summary>
        /// Gets or sets the list of links that originate from this document.
        /// </summary>
        ASPOSE_CELLS_CLOUD_EXPORT void setLinks(std::shared_ptr< std::vector<std::shared_ptr<aspose::cells::cloud::models::Link>> > value);

        /// <summary>
        /// Gets or sets Worksheets link.
        /// </summary>
        ASPOSE_CELLS_CLOUD_EXPORT std::shared_ptr<aspose::cells::cloud::models::Link> getWorksheets() const;

        /// <summary>
        /// Gets or sets Worksheets link.
        /// </summary>
        ASPOSE_CELLS_CLOUD_EXPORT void setWorksheets(std::shared_ptr<aspose::cells::cloud::models::Link> value);

        /// <summary>
        /// Gets or sets DefaultStyle link.
        /// </summary>
        ASPOSE_CELLS_CLOUD_EXPORT std::shared_ptr<aspose::cells::cloud::models::Link> getDefaultStyle() const;

        /// <summary>
        /// Gets or sets DefaultStyle link.
        /// </summary>
        ASPOSE_CELLS_CLOUD_EXPORT void setDefaultStyle(std::shared_ptr<aspose::cells::cloud::models::Link> value);

        /// <summary>
        /// Gets or sets DocumentProperties link.
        /// </summary>
        ASPOSE_CELLS_CLOUD_EXPORT std::shared_ptr<aspose::cells::cloud::models::Link> getDocumentProperties() const;

        /// <summary>
        /// Gets or sets DocumentProperties link.
        /// </summary>
        ASPOSE_CELLS_CLOUD_EXPORT void setDocumentProperties(std::shared_ptr<aspose::cells::cloud::models::Link> value);

        /// <summary>
        /// Gets or sets Names link.
        /// </summary>
        ASPOSE_CELLS_CLOUD_EXPORT std::shared_ptr<aspose::cells::cloud::models::Link> getNames() const;

        /// <summary>
        /// Gets or sets Names link.
        /// </summary>
        ASPOSE_CELLS_CLOUD_EXPORT void setNames(std::shared_ptr<aspose::cells::cloud::models::Link> value);

        /// <summary>
        /// Gets or sets Settings link.
        /// </summary>
        ASPOSE_CELLS_CLOUD_EXPORT std::shared_ptr<aspose::cells::cloud::models::Link> getSettings() const;

        /// <summary>
        /// Gets or sets Settings link.
        /// </summary>
        ASPOSE_CELLS_CLOUD_EXPORT void setSettings(std::shared_ptr<aspose::cells::cloud::models::Link> value);


    protected:        
        std::shared_ptr< std::wstring > m_Password;
        std::shared_ptr< std::wstring > m_FileName;
        std::shared_ptr< std::vector<std::shared_ptr<aspose::cells::cloud::models::Link>> > m_Links;
        std::shared_ptr<aspose::cells::cloud::models::Link> m_Worksheets;
        std::shared_ptr<aspose::cells::cloud::models::Link> m_DefaultStyle;
        std::shared_ptr<aspose::cells::cloud::models::Link> m_DocumentProperties;
        std::shared_ptr<aspose::cells::cloud::models::Link> m_Names;
        std::shared_ptr<aspose::cells::cloud::models::Link> m_Settings;
    };
}


