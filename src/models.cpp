/** --------------------------------------------------------------------------------------------------------------------
* <copyright company="Aspose" file="models.cpp">
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
#include "aspose_cells_cloud.h"

// USE THIRD PARTY LIBS ONLY IN CPP FILES!!!
#include "../thirdparty/json.hpp"
#include "../thirdparty/utf8.h"

namespace aspose::cells::cloud::models {
    inline std::wstring convertUtf8(const std::string& value)
    {
        std::wstring result;
        ::utf8::utf8to16(value.begin(), value.end(), back_inserter(result));
        return result;
    }

    inline std::string convertUtf16(const std::wstring& value)
    {
        std::string result;
        ::utf8::utf16to8(value.begin(), value.end(), back_inserter(result));
        return result;
    }

    inline std::string reportBuildOptionsToString(ReportBuildOptions value)
    {
        if (value == ReportBuildOptions::NONE) return "None";
        if (value == ReportBuildOptions::ALLOW_MISSING_MEMBERS) return "AllowMissingMembers";
        if (value == ReportBuildOptions::REMOVE_EMPTY_PARAGRAPHS) return "RemoveEmptyParagraphs";
        if (value == ReportBuildOptions::INLINE_ERROR_MESSAGES) return "InlineErrorMessages";
        if (value == ReportBuildOptions::USE_LEGACY_HEADER_FOOTER_VISITING) return "UseLegacyHeaderFooterVisiting";
        throw aspose::cells::cloud::ApiException(400, L"Invalid enum value");
    }

    inline ReportBuildOptions reportBuildOptionsFromString(const std::string& value)
    {
        if (value == "None") return ReportBuildOptions::NONE;
        if (value == "AllowMissingMembers") return ReportBuildOptions::ALLOW_MISSING_MEMBERS;
        if (value == "RemoveEmptyParagraphs") return ReportBuildOptions::REMOVE_EMPTY_PARAGRAPHS;
        if (value == "InlineErrorMessages") return ReportBuildOptions::INLINE_ERROR_MESSAGES;
        if (value == "UseLegacyHeaderFooterVisiting") return ReportBuildOptions::USE_LEGACY_HEADER_FOOTER_VISITING;
        throw aspose::cells::cloud::ApiException(400, L"Invalid enum value");
    }


///////Add Models ///////////////////////////

    /*
     * ApiError implementation
     */
    void ApiError::toJson(void* jsonIfc) const
    {
        ::nlohmann::json& json = *((::nlohmann::json*)jsonIfc);
        if (m_Code) {
            json["Code"] = convertUtf16(*m_Code);
        }
        if (m_DateTime) {
            json["DateTime"] = convertUtf16(*m_DateTime);
        }
        if (m_Description) {
            json["Description"] = convertUtf16(*m_Description);
        }
        if (m_InnerError) {
            m_InnerError->toJson(&json["InnerError"]);
        }
        if (m_Message) {
            json["Message"] = convertUtf16(*m_Message);
        }
    }

    void ApiError::fromJson(const void* jsonIfc)
    {
        ::nlohmann::json& json = *((::nlohmann::json*)jsonIfc);
        if (json.contains("Code") && !json["Code"].is_null()) {
            m_Code = std::make_shared< std::wstring >(
                convertUtf8( json["Code"].get< std::string >() )
            );
        }
        if (json.contains("DateTime") && !json["DateTime"].is_null()) {
            m_DateTime = std::make_shared< std::wstring >(
                convertUtf8( json["DateTime"].get< std::string >() )
            );
        }
        if (json.contains("Description") && !json["Description"].is_null()) {
            m_Description = std::make_shared< std::wstring >(
                convertUtf8( json["Description"].get< std::string >() )
            );
        }
        if (json.contains("InnerError") && !json["InnerError"].is_null()) {
            m_InnerError = std::make_shared< aspose::cells::cloud::models::ApiError >();
            m_InnerError->fromJson(&json["InnerError"]);
        }
        if (json.contains("Message") && !json["Message"].is_null()) {
            m_Message = std::make_shared< std::wstring >(
                convertUtf8( json["Message"].get< std::string >() )
            );
        }
    }

    std::shared_ptr< std::wstring > ApiError::getCode() const
    {
        return m_Code;
    }

    void ApiError::setCode(std::shared_ptr< std::wstring > value)
    {
        m_Code = value;
    }

    std::shared_ptr< std::wstring > ApiError::getDateTime() const
    {
        return m_DateTime;
    }

    void ApiError::setDateTime(std::shared_ptr< std::wstring > value)
    {
        m_DateTime = value;
    }

    std::shared_ptr< std::wstring > ApiError::getDescription() const
    {
        return m_Description;
    }

    void ApiError::setDescription(std::shared_ptr< std::wstring > value)
    {
        m_Description = value;
    }

    std::shared_ptr< aspose::cells::cloud::models::ApiError > ApiError::getInnerError() const
    {
        return m_InnerError;
    }

    void ApiError::setInnerError(std::shared_ptr< aspose::cells::cloud::models::ApiError > value)
    {
        m_InnerError = value;
    }

    std::shared_ptr< std::wstring > ApiError::getMessage() const
    {
        return m_Message;
    }

    void ApiError::setMessage(std::shared_ptr< std::wstring > value)
    {
        m_Message = value;
    }


    /*
     * CellsResponse implementation
     */
    void CellsResponse::toJson(void* jsonIfc) const
    {
        ::nlohmann::json& json = *((::nlohmann::json*)jsonIfc);
        if (m_RequestId) {
            json["RequestId"] = convertUtf16(*m_RequestId);
        }
    }

    void CellsResponse::fromJson(const void* jsonIfc)
    {
        ::nlohmann::json& json = *((::nlohmann::json*)jsonIfc);
        if (json.contains("RequestId") && !json["RequestId"].is_null()) {
            m_RequestId = std::make_shared< std::wstring >(
                convertUtf8( json["RequestId"].get< std::string >() )
            );
        }
    }

    std::shared_ptr< std::wstring > CellsResponse::getRequestId() const
    {
        return m_RequestId;
    }

    void CellsResponse::setRequestId(std::shared_ptr< std::wstring > value)
    {
        m_RequestId = value;
    }

    /*
     * Error implementation
     */
    void Error::toJson(void* jsonIfc) const
    {
        ::nlohmann::json& json = *((::nlohmann::json*)jsonIfc);
        if (m_Code) {
            json["Code"] = convertUtf16(*m_Code);
        }
        if (m_Description) {
            json["Description"] = convertUtf16(*m_Description);
        }
        if (m_InnerError) {
            m_InnerError->toJson(&json["InnerError"]);
        }
        if (m_Message) {
            json["Message"] = convertUtf16(*m_Message);
        }
    }

    void Error::fromJson(const void* jsonIfc)
    {
        ::nlohmann::json& json = *((::nlohmann::json*)jsonIfc);
        if (json.contains("Code") && !json["Code"].is_null()) {
            m_Code = std::make_shared< std::wstring >(
                convertUtf8( json["Code"].get< std::string >() )
            );
        }
        if (json.contains("Description") && !json["Description"].is_null()) {
            m_Description = std::make_shared< std::wstring >(
                convertUtf8( json["Description"].get< std::string >() )
            );
        }
        if (json.contains("InnerError") && !json["InnerError"].is_null()) {
            m_InnerError = std::make_shared< aspose::cells::cloud::models::ErrorDetails >();
            m_InnerError->fromJson(&json["InnerError"]);
        }
        if (json.contains("Message") && !json["Message"].is_null()) {
            m_Message = std::make_shared< std::wstring >(
                convertUtf8( json["Message"].get< std::string >() )
            );
        }
    }

    std::shared_ptr< std::wstring > Error::getCode() const
    {
        return m_Code;
    }

    void Error::setCode(std::shared_ptr< std::wstring > value)
    {
        m_Code = value;
    }

    std::shared_ptr< std::wstring > Error::getDescription() const
    {
        return m_Description;
    }

    void Error::setDescription(std::shared_ptr< std::wstring > value)
    {
        m_Description = value;
    }

    std::shared_ptr< aspose::cells::cloud::models::ErrorDetails > Error::getInnerError() const
    {
        return m_InnerError;
    }

    void Error::setInnerError(std::shared_ptr< aspose::cells::cloud::models::ErrorDetails > value)
    {
        m_InnerError = value;
    }

    std::shared_ptr< std::wstring > Error::getMessage() const
    {
        return m_Message;
    }

    void Error::setMessage(std::shared_ptr< std::wstring > value)
    {
        m_Message = value;
    }


    /*
     * ErrorDetails implementation
     */
    void ErrorDetails::toJson(void* jsonIfc) const
    {
        ::nlohmann::json& json = *((::nlohmann::json*)jsonIfc);
        if (m_ErrorDateTime) {
            json["ErrorDateTime"] = convertUtf16(*m_ErrorDateTime);
        }
        if (m_RequestId) {
            json["RequestId"] = convertUtf16(*m_RequestId);
        }
    }

    void ErrorDetails::fromJson(const void* jsonIfc)
    {
        ::nlohmann::json& json = *((::nlohmann::json*)jsonIfc);
        if (json.contains("ErrorDateTime") && !json["ErrorDateTime"].is_null()) {
            m_ErrorDateTime = std::make_shared< std::wstring >(
                convertUtf8( json["ErrorDateTime"].get< std::string >() )
            );
        }
        if (json.contains("RequestId") && !json["RequestId"].is_null()) {
            m_RequestId = std::make_shared< std::wstring >(
                convertUtf8( json["RequestId"].get< std::string >() )
            );
        }
    }

    std::shared_ptr< std::wstring > ErrorDetails::getErrorDateTime() const
    {
        return m_ErrorDateTime;
    }

    void ErrorDetails::setErrorDateTime(std::shared_ptr< std::wstring > value)
    {
        m_ErrorDateTime = value;
    }

    std::shared_ptr< std::wstring > ErrorDetails::getRequestId() const
    {
        return m_RequestId;
    }

    void ErrorDetails::setRequestId(std::shared_ptr< std::wstring > value)
    {
        m_RequestId = value;
    }

   /*
     * FileLink implementation
     */
    void FileLink::toJson(void* jsonIfc) const
    {
        Link::toJson(jsonIfc);
    }

    void FileLink::fromJson(const void* jsonIfc)
    {
        Link::fromJson(jsonIfc);
    }

    /*
     * FilesList implementation
     */
    void FilesList::toJson(void* jsonIfc) const
    {
        ::nlohmann::json& json = *((::nlohmann::json*)jsonIfc);
        if (m_Value) {
            json["Value"] = ::nlohmann::json::array();
            for (auto& element : *m_Value) {
                element->toJson(&json["Value"].emplace_back());
            }
        }
    }

    void FilesList::fromJson(const void* jsonIfc)
    {
        ::nlohmann::json& json = *((::nlohmann::json*)jsonIfc);
        if (json.contains("Value") && !json["Value"].is_null()) {
            m_Value = std::make_shared< std::vector<std::shared_ptr<aspose::cells::cloud::models::StorageFile>> >();
            for (auto& element : json["Value"]) {
                m_Value->emplace_back(std::make_shared< aspose::cells::cloud::models::StorageFile >())->fromJson(&element);
            }
        }
    }

    std::shared_ptr< std::vector<std::shared_ptr<aspose::cells::cloud::models::StorageFile>> > FilesList::getValue() const
    {
        return m_Value;
    }

    void FilesList::setValue(std::shared_ptr< std::vector<std::shared_ptr<aspose::cells::cloud::models::StorageFile>> > value)
    {
        m_Value = value;
    }


    /*
     * FilesUploadResult implementation
     */
    void FilesUploadResult::toJson(void* jsonIfc) const
    {
        ::nlohmann::json& json = *((::nlohmann::json*)jsonIfc);
        if (m_Errors) {
            json["Errors"] = ::nlohmann::json::array();
            for (auto& element : *m_Errors) {
                element->toJson(&json["Errors"].emplace_back());
            }
        }
        if (m_Uploaded) {
            json["Uploaded"] = ::nlohmann::json::array();
            for (auto& element : *m_Uploaded) {
                json["Uploaded"].push_back(convertUtf16(*element));
            }
        }
    }

    void FilesUploadResult::fromJson(const void* jsonIfc)
    {
        ::nlohmann::json& json = *((::nlohmann::json*)jsonIfc);
        if (json.contains("Errors") && !json["Errors"].is_null()) {
            m_Errors = std::make_shared< std::vector<std::shared_ptr<aspose::cells::cloud::models::Error>> >();
            for (auto& element : json["Errors"]) {
                m_Errors->emplace_back(std::make_shared< aspose::cells::cloud::models::Error >())->fromJson(&element);
            }
        }
        if (json.contains("Uploaded") && !json["Uploaded"].is_null()) {
            m_Uploaded = std::make_shared< std::vector<std::shared_ptr<std::wstring>> >();
            for (auto& element : json["Uploaded"]) {
                m_Uploaded->push_back(std::make_shared< std::wstring >(convertUtf8( element.get< std::string >() )));
            }
        }
    }

    std::shared_ptr< std::vector<std::shared_ptr<aspose::cells::cloud::models::Error>> > FilesUploadResult::getErrors() const
    {
        return m_Errors;
    }

    void FilesUploadResult::setErrors(std::shared_ptr< std::vector<std::shared_ptr<aspose::cells::cloud::models::Error>> > value)
    {
        m_Errors = value;
    }

    std::shared_ptr< std::vector<std::shared_ptr<std::wstring>> > FilesUploadResult::getUploaded() const
    {
        return m_Uploaded;
    }

    void FilesUploadResult::setUploaded(std::shared_ptr< std::vector<std::shared_ptr<std::wstring>> > value)
    {
        m_Uploaded = value;
    }

    /*
     * Link implementation
     */
    void Link::toJson(void* jsonIfc) const
    {
        ::nlohmann::json& json = *((::nlohmann::json*)jsonIfc);
        if (m_Href) {
            json["Href"] = convertUtf16(*m_Href);
        }
        if (m_Rel) {
            json["Rel"] = convertUtf16(*m_Rel);
        }
        if (m_Title) {
            json["Title"] = convertUtf16(*m_Title);
        }
        if (m_Type) {
            json["Type"] = convertUtf16(*m_Type);
        }
    }

    void Link::fromJson(const void* jsonIfc)
    {
        ::nlohmann::json& json = *((::nlohmann::json*)jsonIfc);
        if (json.contains("Href") && !json["Href"].is_null()) {
            m_Href = std::make_shared< std::wstring >(
                convertUtf8( json["Href"].get< std::string >() )
            );
        }
        if (json.contains("Rel") && !json["Rel"].is_null()) {
            m_Rel = std::make_shared< std::wstring >(
                convertUtf8( json["Rel"].get< std::string >() )
            );
        }
        if (json.contains("Title") && !json["Title"].is_null()) {
            m_Title = std::make_shared< std::wstring >(
                convertUtf8( json["Title"].get< std::string >() )
            );
        }
        if (json.contains("Type") && !json["Type"].is_null()) {
            m_Type = std::make_shared< std::wstring >(
                convertUtf8( json["Type"].get< std::string >() )
            );
        }
    }

    std::shared_ptr< std::wstring > Link::getHref() const
    {
        return m_Href;
    }

    void Link::setHref(std::shared_ptr< std::wstring > value)
    {
        m_Href = value;
    }

    std::shared_ptr< std::wstring > Link::getRel() const
    {
        return m_Rel;
    }

    void Link::setRel(std::shared_ptr< std::wstring > value)
    {
        m_Rel = value;
    }

    std::shared_ptr< std::wstring > Link::getTitle() const
    {
        return m_Title;
    }

    void Link::setTitle(std::shared_ptr< std::wstring > value)
    {
        m_Title = value;
    }

    std::shared_ptr< std::wstring > Link::getType() const
    {
        return m_Type;
    }

    void Link::setType(std::shared_ptr< std::wstring > value)
    {
        m_Type = value;
    }

    /*
     * PublicKeyResponse implementation
     */
    void PublicKeyResponse::toJson(void* jsonIfc) const
    {
        CellsResponse::toJson(jsonIfc);
        ::nlohmann::json& json = *((::nlohmann::json*)jsonIfc);
        if (m_Exponent) {
            json["Exponent"] = convertUtf16(*m_Exponent);
        }
        if (m_Modulus) {
            json["Modulus"] = convertUtf16(*m_Modulus);
        }
    }

    void PublicKeyResponse::fromJson(const void* jsonIfc)
    {
        CellsResponse::fromJson(jsonIfc);
        ::nlohmann::json& json = *((::nlohmann::json*)jsonIfc);
        if (json.contains("Exponent") && !json["Exponent"].is_null()) {
            m_Exponent = std::make_shared< std::wstring >(
                convertUtf8( json["Exponent"].get< std::string >() )
            );
        }
        if (json.contains("Modulus") && !json["Modulus"].is_null()) {
            m_Modulus = std::make_shared< std::wstring >(
                convertUtf8( json["Modulus"].get< std::string >() )
            );
        }
    }

    std::shared_ptr< std::wstring > PublicKeyResponse::getExponent() const
    {
        return m_Exponent;
    }

    void PublicKeyResponse::setExponent(std::shared_ptr< std::wstring > value)
    {
        m_Exponent = value;
    }

    std::shared_ptr< std::wstring > PublicKeyResponse::getModulus() const
    {
        return m_Modulus;
    }

    void PublicKeyResponse::setModulus(std::shared_ptr< std::wstring > value)
    {
        m_Modulus = value;
    }
    /*
     * StorageFile implementation
     */
    void StorageFile::toJson(void* jsonIfc) const
    {
        ::nlohmann::json& json = *((::nlohmann::json*)jsonIfc);
        if (m_IsFolder) {
            json["IsFolder"] = *m_IsFolder;
        }
        if (m_ModifiedDate) {
            json["ModifiedDate"] = convertUtf16(*m_ModifiedDate);
        }
        if (m_Name) {
            json["Name"] = convertUtf16(*m_Name);
        }
        if (m_Path) {
            json["Path"] = convertUtf16(*m_Path);
        }
        if (m_Size) {
            json["Size"] = *m_Size;
        }
    }

    void StorageFile::fromJson(const void* jsonIfc)
    {
        ::nlohmann::json& json = *((::nlohmann::json*)jsonIfc);
        if (json.contains("IsFolder") && !json["IsFolder"].is_null()) {
            m_IsFolder = std::make_shared< bool >(
                json["IsFolder"].get< bool >()
            );
        }
        if (json.contains("ModifiedDate") && !json["ModifiedDate"].is_null()) {
            m_ModifiedDate = std::make_shared< std::wstring >(
                convertUtf8( json["ModifiedDate"].get< std::string >() )
            );
        }
        if (json.contains("Name") && !json["Name"].is_null()) {
            m_Name = std::make_shared< std::wstring >(
                convertUtf8( json["Name"].get< std::string >() )
            );
        }
        if (json.contains("Path") && !json["Path"].is_null()) {
            m_Path = std::make_shared< std::wstring >(
                convertUtf8( json["Path"].get< std::string >() )
            );
        }
        if (json.contains("Size") && !json["Size"].is_null()) {
            m_Size = std::make_shared< int32_t >(
                json["Size"].get< int32_t >()
            );
        }
    }

    std::shared_ptr< bool > StorageFile::getIsFolder() const
    {
        return m_IsFolder;
    }

    void StorageFile::setIsFolder(std::shared_ptr< bool > value)
    {
        m_IsFolder = value;
    }

    std::shared_ptr< std::wstring > StorageFile::getModifiedDate() const
    {
        return m_ModifiedDate;
    }

    void StorageFile::setModifiedDate(std::shared_ptr< std::wstring > value)
    {
        m_ModifiedDate = value;
    }

    std::shared_ptr< std::wstring > StorageFile::getName() const
    {
        return m_Name;
    }

    void StorageFile::setName(std::shared_ptr< std::wstring > value)
    {
        m_Name = value;
    }

    std::shared_ptr< std::wstring > StorageFile::getPath() const
    {
        return m_Path;
    }

    void StorageFile::setPath(std::shared_ptr< std::wstring > value)
    {
        m_Path = value;
    }

    std::shared_ptr< int32_t > StorageFile::getSize() const
    {
        return m_Size;
    }

    void StorageFile::setSize(std::shared_ptr< int32_t > value)
    {
        m_Size = value;
    }


    /*
     * FileInfo implementation
     */
    void FileInfo::toJson(void* jsonIfc) const
    {
        ::nlohmann::json& json = *((::nlohmann::json*)jsonIfc);
        if (m_Filename) {
            json["Filename"] = convertUtf16(*m_Filename);
        }
        if (m_FileSize) {
            json["FileSize"] = *m_FileSize;
        }
        if (m_FileContent) {
            json["FileContent"] = convertUtf16(*m_FileContent);
        }
    }

    void FileInfo::fromJson(const void* jsonIfc)
    {
        ::nlohmann::json& json = *((::nlohmann::json*)jsonIfc);
        if (json.contains("Filename") && !json["Filename"].is_null()) {
            m_Filename = std::make_shared< std::wstring >(
                convertUtf8( json["Filename"].get< std::string >() )
            );
        }
        if (json.contains("FileSize") && !json["FileSize"].is_null()) {
            m_FileSize = std::make_shared< long >(
                json["FileSize"].get< long >()
            );
        }
        if (json.contains("FileContent") && !json["FileContent"].is_null()) {
            m_FileContent = std::make_shared< std::wstring >(
                convertUtf8( json["FileContent"].get< std::string >() )
            );
        }
    }

    std::shared_ptr< std::wstring > FileInfo::getFilename() const
    {
        return m_Filename;
    }

    void FileInfo::setFilename(std::shared_ptr< std::wstring > value)
    {
        m_Filename = value;
    }

    std::shared_ptr< std::wstring > FileInfo::getFileContent() const
    {
        return m_FileContent;
    }

    void FileInfo::setFileContent(std::shared_ptr< std::wstring > value)
    {
        m_FileContent = value;
    }


    std::shared_ptr< long > FileInfo::getFileSize() const
    {
        return m_FileSize;
    }

    void FileInfo::setFileSize(std::shared_ptr< long > value)
    {
        m_FileSize = value;
    }


    /*
     * FilesResult implementation
     */
    void FilesResult::toJson(void* jsonIfc) const
    {
        ::nlohmann::json& json = *((::nlohmann::json*)jsonIfc);
        if (m_Files) {
            json["Files"] = ::nlohmann::json::array();
            for (auto& element : *m_Files) {
                element->toJson(&json["Files"].emplace_back());
            }
        }
    }

    void FilesResult::fromJson(const void* jsonIfc)
    {
        ::nlohmann::json& json = *((::nlohmann::json*)jsonIfc);
        if (json.contains("Files") && !json["Files"].is_null()) {
            m_Files = std::make_shared< std::vector<std::shared_ptr<aspose::cells::cloud::models::FileInfo>> >();
            for (auto& element : json["Files"]) {
                m_Files->emplace_back(std::make_shared< aspose::cells::cloud::models::FileInfo >())->fromJson(&element);
            }
        }
    }

    std::shared_ptr< std::vector<std::shared_ptr<aspose::cells::cloud::models::FileInfo>> > FilesResult::getFiles() const
    {
        return m_Files;
    }

    void FilesResult::setFiles(std::shared_ptr< std::vector<std::shared_ptr<aspose::cells::cloud::models::FileInfo>> > value)
    {
        m_Files = value;
    }

    /*
     * Workbook implementation
     */
    void Workbook::toJson(void* jsonIfc) const
    {
        ::nlohmann::json& json = *((::nlohmann::json*)jsonIfc);
        if (m_Password) {
            json["Password"] = convertUtf16(*m_Password);
        }
        if (m_FileName) {
            json["FileName"] = convertUtf16(*m_FileName);
        }
        if (m_DocumentProperties) {
            m_DocumentProperties->toJson(&json["DocumentProperties"]);
        }
        if (m_Worksheets) {
            m_Worksheets->toJson(&json["Worksheets"]);
        }
        if (m_DefaultStyle) {
            m_DefaultStyle->toJson(&json["DefaultStyle"]);
        }
        if (m_Names) {
            m_Names->toJson(&json["Names"]);
        }
        if (m_Settings) {
            m_Settings->toJson(&json["Settings"]);
        }
        if (m_Links) {
            json["Links"] = ::nlohmann::json::array();
            for (auto& element : *m_Links) {
                element->toJson(&json["Links"].emplace_back());
            }
        }
    }

    void Workbook::fromJson(const void* jsonIfc)
    {
        ::nlohmann::json& json = *((::nlohmann::json*)jsonIfc);
        if (json.contains("FileName") && !json["FileName"].is_null()) {
            m_FileName = std::make_shared< std::wstring >(
                convertUtf8( json["FileName"].get< std::string >() )
            );
        }
        if (json.contains("Password") && !json["Password"].is_null()) {
            m_Password = std::make_shared< std::wstring >(
                convertUtf8( json["Password"].get< std::string >() )
            );
        }
        if (json.contains("Links") && !json["Links"].is_null()) {
            m_Links = std::make_shared< std::vector<std::shared_ptr<aspose::cells::cloud::models::Link>> >();
            for (auto& element : json["Links"]) {
                m_Links->emplace_back(std::make_shared< aspose::cells::cloud::models::Link >())->fromJson(&element);
            }
        }
        if (json.contains("Worksheets") && !json["Worksheets"].is_null()) {
            m_Worksheets = std::make_shared< aspose::cells::cloud::models::Link >();
            m_Worksheets->fromJson(&json["Worksheets"]);
        }
        if (json.contains("DefaultStyle") && !json["DefaultStyle"].is_null()) {
            m_DefaultStyle = std::make_shared< aspose::cells::cloud::models::Link >();
            m_DefaultStyle->fromJson(&json["DefaultStyle"]);
        }
        if (json.contains("DocumentProperties") && !json["DocumentProperties"].is_null()) {
            m_DocumentProperties = std::make_shared< aspose::cells::cloud::models::Link >();
            m_DocumentProperties->fromJson(&json["DocumentProperties"]);
        }
        if (json.contains("Names") && !json["Names"].is_null()) {
            m_Names = std::make_shared< aspose::cells::cloud::models::Link >();
            m_Names->fromJson(&json["Names"]);
        }
        if (json.contains("Settings") && !json["Settings"].is_null()) {
            m_Settings = std::make_shared< aspose::cells::cloud::models::Link >();
            m_Settings->fromJson(&json["m_Settings"]);
        }
    }

    std::shared_ptr< std::wstring > Workbook::getFileName() const
    {
        return m_FileName;
    };
        

    void Workbook::setFileName(std::shared_ptr< std::wstring > value)
    {
        m_FileName =value;
    }
    std::shared_ptr< std::wstring > Workbook::getPassword() const
    {
        return  m_Password;
    }

    void Workbook::setPassword(std::shared_ptr< std::wstring > value)
    {
        m_Password =value;
    }

    std::shared_ptr< std::vector<std::shared_ptr<aspose::cells::cloud::models::Link>> > Workbook::getLinks() const
    {
        return m_Links;
    }


    void Workbook::setLinks(std::shared_ptr< std::vector<std::shared_ptr<aspose::cells::cloud::models::Link>> > value)
    {
        m_Links = value;
    }


    std::shared_ptr<aspose::cells::cloud::models::Link> Workbook::getWorksheets() const{
        return m_Worksheets;
    }

    void Workbook::setWorksheets(std::shared_ptr<aspose::cells::cloud::models::Link> value)
    {
        m_Worksheets = value;
    }

    std::shared_ptr<aspose::cells::cloud::models::Link> Workbook::getDefaultStyle() const
    {
        return m_DefaultStyle;
    }


    void Workbook::setDefaultStyle(std::shared_ptr<aspose::cells::cloud::models::Link> value)
    {
        m_DefaultStyle =value;
    }


    std::shared_ptr<aspose::cells::cloud::models::Link> Workbook::getDocumentProperties() const
    {
        return m_DocumentProperties;
    }


    void Workbook::setDocumentProperties(std::shared_ptr<aspose::cells::cloud::models::Link> value)
    {
        m_DocumentProperties = value;
    }


    std::shared_ptr<aspose::cells::cloud::models::Link> Workbook::getNames() const{
        return m_Names;
    }


    void Workbook::setNames(std::shared_ptr<aspose::cells::cloud::models::Link> value)
    {
        m_Names = value;
    }


    std::shared_ptr<aspose::cells::cloud::models::Link> Workbook::getSettings() const
    {
        return m_Settings;
    }


    void Workbook::setSettings(std::shared_ptr<aspose::cells::cloud::models::Link> value)
    {
        m_Settings = value;
    }
    /*
     * WorkbookResponse implementation
     */
    void WorkbookResponse::toJson(void* jsonIfc) const
    {
        ::nlohmann::json& json = *((::nlohmann::json*)jsonIfc);
        if (m_Workbook) {
            m_Workbook->toJson(&json["Workbook"]);
        }
        
    }

    void WorkbookResponse::fromJson(const void* jsonIfc)
    {
        ::nlohmann::json& json = *((::nlohmann::json*)jsonIfc);
        if (json.contains("Workbook") && !json["Workbook"].is_null()) {
            m_Workbook = std::make_shared< aspose::cells::cloud::models::Workbook >();
            m_Workbook->fromJson(&json["Workbook"]);
        }
    }

    std::shared_ptr<  aspose::cells::cloud::models::Workbook > WorkbookResponse::getWorkbook() const
    {
        return m_Workbook;
    };
        

    void WorkbookResponse::setWorkbook(std::shared_ptr<  aspose::cells::cloud::models::Workbook > value)
    {
        m_Workbook =value;
    }

    /*
     * WorkbookEncryptionRequest implementation
     */
    void WorkbookEncryptionRequest::toJson(void* jsonIfc) const
    {
        ::nlohmann::json& json = *((::nlohmann::json*)jsonIfc);
        if (m_Password) {
            json["Password"] = convertUtf16(*m_Password);
        }
        if (m_EncryptionType) {
            json["EncryptionType"] = convertUtf16(*m_EncryptionType);
        }       
        if (m_KeyLength) {
            json["KeyLength"] = *m_KeyLength;
        }  
    }

    void WorkbookEncryptionRequest::fromJson(const void* jsonIfc)
    {
        ::nlohmann::json& json = *((::nlohmann::json*)jsonIfc);
        if (json.contains("EncryptionType") && !json["EncryptionType"].is_null()) {
            m_EncryptionType = std::make_shared< std::wstring >(
                convertUtf8( json["EncryptionType"].get< std::string >() )
            );
        }
        if (json.contains("Password") && !json["Password"].is_null()) {
            m_Password = std::make_shared< std::wstring >(
                convertUtf8( json["Password"].get< std::string >() )
            );
        }
        if (json.contains("KeyLength") && !json["KeyLength"].is_null()) {
            m_KeyLength = std::make_shared< int >(
                json["KeyLength"].get< int >()
            );
        }
    }

    std::shared_ptr< std::wstring > WorkbookEncryptionRequest::getEncryptionType() const
    {
        return m_EncryptionType;
    };
        

    void WorkbookEncryptionRequest::setEncryptionType(std::shared_ptr< std::wstring > value)
    {
        m_EncryptionType =value;
    }

    std::shared_ptr< std::wstring > WorkbookEncryptionRequest::getPassword() const
    {
        return  m_Password;
    }

    void WorkbookEncryptionRequest::setPassword(std::shared_ptr< std::wstring > value)
    {
        m_Password =value;
    }    

    std::shared_ptr< int > WorkbookEncryptionRequest::getKeyLength() const
    {
        return  m_KeyLength;
    }

    void WorkbookEncryptionRequest::setKeyLength(std::shared_ptr< int > value)
    {
        m_KeyLength =value;
    }    

    /// <summary>
    /// SaveOptions class implementation
    /// </summary>
    void SaveOptions::toJson(void* jsonIfc) const
    {
        ::nlohmann::json& json = *((::nlohmann::json*)jsonIfc);
        if (m_EnableHTTPCompression) {
            json["EnableHTTPCompression"] =*m_EnableHTTPCompression;
        }
        if (m_SaveFormat) {
            json["SaveFormat"] = convertUtf16(*m_SaveFormat);
        }
        if (m_ClearData) {
            json["ClearData"] =*m_ClearData;
        }
        if (m_CachedFileFolder) {
            json["CachedFileFolder"] = convertUtf16(*m_CachedFileFolder);
        }
        if (m_ValidateMergedAreas) {
            json["ValidateMergedAreas"] =*m_ValidateMergedAreas;
        }
        if (m_RefreshChartCache) {
            json["RefreshChartCache"] =*m_RefreshChartCache;
        }
        if (m_CreateDirectory) {
            json["CreateDirectory"] =*m_CreateDirectory;
        }
        if (m_SortNames) {
            json["SortNames"] =*m_SortNames;
        }
    }
    void SaveOptions::fromJson(const void* jsonIfc)
    {
        ::nlohmann::json& json = *((::nlohmann::json*)jsonIfc);
        if (json.contains("EnableHTTPCompression") && !json["EnableHTTPCompression"].is_null()) {
            m_EnableHTTPCompression = std::make_shared< bool >( json["EnableHTTPCompression"].get< bool >());
        }
        if (json.contains("SaveFormat") && !json["SaveFormat"].is_null()) {
            m_SaveFormat = std::make_shared< std::wstring >( convertUtf8( json["SaveFormat"].get< std::string >() ));
        }
        if (json.contains("ClearData") && !json["ClearData"].is_null()) {
            m_ClearData = std::make_shared< bool >( json["ClearData"].get< bool >());
        }
        if (json.contains("CachedFileFolder") && !json["CachedFileFolder"].is_null()) {
            m_CachedFileFolder = std::make_shared< std::wstring >( convertUtf8( json["CachedFileFolder"].get< std::string >() ));
        }
        if (json.contains("ValidateMergedAreas") && !json["ValidateMergedAreas"].is_null()) {
            m_ValidateMergedAreas = std::make_shared< bool >( json["ValidateMergedAreas"].get< bool >());
        }
        if (json.contains("RefreshChartCache") && !json["RefreshChartCache"].is_null()) {
            m_RefreshChartCache = std::make_shared< bool >( json["RefreshChartCache"].get< bool >());
        }
        if (json.contains("CreateDirectory") && !json["CreateDirectory"].is_null()) {
            m_CreateDirectory = std::make_shared< bool >( json["CreateDirectory"].get< bool >());
        }
        if (json.contains("SortNames") && !json["SortNames"].is_null()) {
            m_SortNames = std::make_shared< bool >( json["SortNames"].get< bool >());
        }
    }
    std::shared_ptr< bool > SaveOptions::getEnableHTTPCompression() const
    {
        return m_EnableHTTPCompression;
    }
    void SaveOptions::setEnableHTTPCompression( std::shared_ptr< bool > value)
    {
        m_EnableHTTPCompression = value;
    }
    std::shared_ptr< std::wstring > SaveOptions::getSaveFormat() const
    {
        return m_SaveFormat;
    }
    void SaveOptions::setSaveFormat( std::shared_ptr< std::wstring > value)
    {
        m_SaveFormat = value;
    }
    std::shared_ptr< bool > SaveOptions::getClearData() const
    {
        return m_ClearData;
    }
    void SaveOptions::setClearData( std::shared_ptr< bool > value)
    {
        m_ClearData = value;
    }
    std::shared_ptr< std::wstring > SaveOptions::getCachedFileFolder() const
    {
        return m_CachedFileFolder;
    }
    void SaveOptions::setCachedFileFolder( std::shared_ptr< std::wstring > value)
    {
        m_CachedFileFolder = value;
    }
    std::shared_ptr< bool > SaveOptions::getValidateMergedAreas() const
    {
        return m_ValidateMergedAreas;
    }
    void SaveOptions::setValidateMergedAreas( std::shared_ptr< bool > value)
    {
        m_ValidateMergedAreas = value;
    }
    std::shared_ptr< bool > SaveOptions::getRefreshChartCache() const
    {
        return m_RefreshChartCache;
    }
    void SaveOptions::setRefreshChartCache( std::shared_ptr< bool > value)
    {
        m_RefreshChartCache = value;
    }
    std::shared_ptr< bool > SaveOptions::getCreateDirectory() const
    {
        return m_CreateDirectory;
    }
    void SaveOptions::setCreateDirectory( std::shared_ptr< bool > value)
    {
        m_CreateDirectory = value;
    }
    std::shared_ptr< bool > SaveOptions::getSortNames() const
    {
        return m_SortNames;
    }
    void SaveOptions::setSortNames( std::shared_ptr< bool > value)
    {
        m_SortNames = value;
    }
    /// <summary>
    /// ImageSaveOptions class implementation
    /// </summary>
    void ImageSaveOptions::toJson(void* jsonIfc) const
    {
        SaveOptions::toJson(jsonIfc);
        ::nlohmann::json& json = *((::nlohmann::json*)jsonIfc);
        if (m_ChartImageType) {
            json["ChartImageType"] = convertUtf16(*m_ChartImageType);
        }
        if (m_EmbededImageNameInSvg) {
            json["EmbededImageNameInSvg"] = convertUtf16(*m_EmbededImageNameInSvg);
        }
        if (m_HorizontalResolution) {
            json["HorizontalResolution"] =*m_HorizontalResolution;
        }
        if (m_ImageFormat) {
            json["ImageFormat"] = convertUtf16(*m_ImageFormat);
        }
        if (m_IsCellAutoFit) {
            json["IsCellAutoFit"] =*m_IsCellAutoFit;
        }
        if (m_OnePagePerSheet) {
            json["OnePagePerSheet"] =*m_OnePagePerSheet;
        }
        if (m_OnlyArea) {
            json["OnlyArea"] =*m_OnlyArea;
        }
        if (m_PrintingPage) {
            json["PrintingPage"] = convertUtf16(*m_PrintingPage);
        }
        if (m_PrintWithStatusDialog) {
            json["PrintWithStatusDialog"] =*m_PrintWithStatusDialog;
        }
        if (m_Quality) {
            json["Quality"] =*m_Quality;
        }
        if (m_TiffCompression) {
            json["TiffCompression"] = convertUtf16(*m_TiffCompression);
        }
        if (m_VerticalResolution) {
            json["VerticalResolution"] =*m_VerticalResolution;
        }
    }
    void ImageSaveOptions::fromJson(const void* jsonIfc)
    {
        SaveOptions::fromJson(jsonIfc);
        ::nlohmann::json& json = *((::nlohmann::json*)jsonIfc);
        if (json.contains("ChartImageType") && !json["ChartImageType"].is_null()) {
            m_ChartImageType = std::make_shared< std::wstring >( convertUtf8( json["ChartImageType"].get< std::string >() ));
        }
        if (json.contains("EmbededImageNameInSvg") && !json["EmbededImageNameInSvg"].is_null()) {
            m_EmbededImageNameInSvg = std::make_shared< std::wstring >( convertUtf8( json["EmbededImageNameInSvg"].get< std::string >() ));
        }
        if (json.contains("HorizontalResolution") && !json["HorizontalResolution"].is_null()) {
            m_HorizontalResolution = std::make_shared< int >( json["HorizontalResolution"].get< int >());
        }
        if (json.contains("ImageFormat") && !json["ImageFormat"].is_null()) {
            m_ImageFormat = std::make_shared< std::wstring >( convertUtf8( json["ImageFormat"].get< std::string >() ));
        }
        if (json.contains("IsCellAutoFit") && !json["IsCellAutoFit"].is_null()) {
            m_IsCellAutoFit = std::make_shared< bool >( json["IsCellAutoFit"].get< bool >());
        }
        if (json.contains("OnePagePerSheet") && !json["OnePagePerSheet"].is_null()) {
            m_OnePagePerSheet = std::make_shared< bool >( json["OnePagePerSheet"].get< bool >());
        }
        if (json.contains("OnlyArea") && !json["OnlyArea"].is_null()) {
            m_OnlyArea = std::make_shared< bool >( json["OnlyArea"].get< bool >());
        }
        if (json.contains("PrintingPage") && !json["PrintingPage"].is_null()) {
            m_PrintingPage = std::make_shared< std::wstring >( convertUtf8( json["PrintingPage"].get< std::string >() ));
        }
        if (json.contains("PrintWithStatusDialog") && !json["PrintWithStatusDialog"].is_null()) {
            m_PrintWithStatusDialog = std::make_shared< int >( json["PrintWithStatusDialog"].get< int >());
        }
        if (json.contains("Quality") && !json["Quality"].is_null()) {
            m_Quality = std::make_shared< int >( json["Quality"].get< int >());
        }
        if (json.contains("TiffCompression") && !json["TiffCompression"].is_null()) {
            m_TiffCompression = std::make_shared< std::wstring >( convertUtf8( json["TiffCompression"].get< std::string >() ));
        }
        if (json.contains("VerticalResolution") && !json["VerticalResolution"].is_null()) {
            m_VerticalResolution = std::make_shared< int >( json["VerticalResolution"].get< int >());
        }
    }
    std::shared_ptr< std::wstring > ImageSaveOptions::getChartImageType() const
    {
        return m_ChartImageType;
    }
    void ImageSaveOptions::setChartImageType( std::shared_ptr< std::wstring > value)
    {
        m_ChartImageType = value;
    }
    std::shared_ptr< std::wstring > ImageSaveOptions::getEmbededImageNameInSvg() const
    {
        return m_EmbededImageNameInSvg;
    }
    void ImageSaveOptions::setEmbededImageNameInSvg( std::shared_ptr< std::wstring > value)
    {
        m_EmbededImageNameInSvg = value;
    }
    std::shared_ptr< int > ImageSaveOptions::getHorizontalResolution() const
    {
        return m_HorizontalResolution;
    }
    void ImageSaveOptions::setHorizontalResolution( std::shared_ptr< int > value)
    {
        m_HorizontalResolution = value;
    }
    std::shared_ptr< std::wstring > ImageSaveOptions::getImageFormat() const
    {
        return m_ImageFormat;
    }
    void ImageSaveOptions::setImageFormat( std::shared_ptr< std::wstring > value)
    {
        m_ImageFormat = value;
    }
    std::shared_ptr< bool > ImageSaveOptions::getIsCellAutoFit() const
    {
        return m_IsCellAutoFit;
    }
    void ImageSaveOptions::setIsCellAutoFit( std::shared_ptr< bool > value)
    {
        m_IsCellAutoFit = value;
    }
    std::shared_ptr< bool > ImageSaveOptions::getOnePagePerSheet() const
    {
        return m_OnePagePerSheet;
    }
    void ImageSaveOptions::setOnePagePerSheet( std::shared_ptr< bool > value)
    {
        m_OnePagePerSheet = value;
    }
    std::shared_ptr< bool > ImageSaveOptions::getOnlyArea() const
    {
        return m_OnlyArea;
    }
    void ImageSaveOptions::setOnlyArea( std::shared_ptr< bool > value)
    {
        m_OnlyArea = value;
    }
    std::shared_ptr< std::wstring > ImageSaveOptions::getPrintingPage() const
    {
        return m_PrintingPage;
    }
    void ImageSaveOptions::setPrintingPage( std::shared_ptr< std::wstring > value)
    {
        m_PrintingPage = value;
    }
    std::shared_ptr< int > ImageSaveOptions::getPrintWithStatusDialog() const
    {
        return m_PrintWithStatusDialog;
    }
    void ImageSaveOptions::setPrintWithStatusDialog( std::shared_ptr< int > value)
    {
        m_PrintWithStatusDialog = value;
    }
    std::shared_ptr< int > ImageSaveOptions::getQuality() const
    {
        return m_Quality;
    }
    void ImageSaveOptions::setQuality( std::shared_ptr< int > value)
    {
        m_Quality = value;
    }
    std::shared_ptr< std::wstring > ImageSaveOptions::getTiffCompression() const
    {
        return m_TiffCompression;
    }
    void ImageSaveOptions::setTiffCompression( std::shared_ptr< std::wstring > value)
    {
        m_TiffCompression = value;
    }
    std::shared_ptr< int > ImageSaveOptions::getVerticalResolution() const
    {
        return m_VerticalResolution;
    }
    void ImageSaveOptions::setVerticalResolution( std::shared_ptr< int > value)
    {
        m_VerticalResolution = value;
    }
    /// <summary>
    /// DifSaveOptions class implementation
    /// </summary>
    void DifSaveOptions::toJson(void* jsonIfc) const
    {
        SaveOptions::toJson(jsonIfc);
        ::nlohmann::json& json = *((::nlohmann::json*)jsonIfc);
    }
    void DifSaveOptions::fromJson(const void* jsonIfc)
    {
        SaveOptions::fromJson(jsonIfc);
        ::nlohmann::json& json = *((::nlohmann::json*)jsonIfc);
    }
    /// <summary>
    /// DocxSaveOptions class implementation
    /// </summary>
    void DocxSaveOptions::toJson(void* jsonIfc) const
    {
        SaveOptions::toJson(jsonIfc);
        ::nlohmann::json& json = *((::nlohmann::json*)jsonIfc);
    }
    void DocxSaveOptions::fromJson(const void* jsonIfc)
    {
        SaveOptions::fromJson(jsonIfc);
        ::nlohmann::json& json = *((::nlohmann::json*)jsonIfc);
    }    
    /// <summary>
    /// PptxSaveOptions class implementation
    /// </summary>
    void PptxSaveOptions::toJson(void* jsonIfc) const
    {
        SaveOptions::toJson(jsonIfc);
        ::nlohmann::json& json = *((::nlohmann::json*)jsonIfc);
    }
    void PptxSaveOptions::fromJson(const void* jsonIfc)
    {
        SaveOptions::fromJson(jsonIfc);
        ::nlohmann::json& json = *((::nlohmann::json*)jsonIfc);
    }    
    /// <summary>
    /// OdsSaveOptions class implementation
    /// </summary>
    void OdsSaveOptions::toJson(void* jsonIfc) const
    {
        SaveOptions::toJson(jsonIfc);
        ::nlohmann::json& json = *((::nlohmann::json*)jsonIfc);
    }
    void OdsSaveOptions::fromJson(const void* jsonIfc)
    {
        SaveOptions::fromJson(jsonIfc);
        ::nlohmann::json& json = *((::nlohmann::json*)jsonIfc);
    }
    /// <summary>
    /// JsonSaveOptions class implementation
    /// </summary>
    void JsonSaveOptions::toJson(void* jsonIfc) const
    {
        SaveOptions::toJson(jsonIfc);
        ::nlohmann::json& json = *((::nlohmann::json*)jsonIfc);
        if (m_Indent) {
            json["Indent"] =convertUtf16(*m_Indent);
        }
        if (m_HasHeaderRow) {
            json["HasHeaderRow"] =*m_HasHeaderRow;
        }
        if (m_ExportAsString) {
            json["ExportAsString"] =*m_ExportAsString;
        }
    }
    void JsonSaveOptions::fromJson(const void* jsonIfc)
    {
        SaveOptions::fromJson(jsonIfc);
        ::nlohmann::json& json = *((::nlohmann::json*)jsonIfc);
        if (json.contains("HasHeaderRow") && !json["HasHeaderRow"].is_null()) {
            m_HasHeaderRow = std::make_shared< bool >( json["HasHeaderRow"].get< bool >());
        }
        if (json.contains("ExportAsString") && !json["ExportAsString"].is_null()) {
            m_ExportAsString = std::make_shared< bool >( json["ExportAsString"].get< bool >());
        }
        if (json.contains("Indent") && !json["Indent"].is_null()) {
            m_Indent = std::make_shared< std::wstring >( convertUtf8( json["Indent"].get< std::string >() ));
        }
    }    
    std::shared_ptr< bool > JsonSaveOptions::getExportAsString() const
    {
        return m_ExportAsString;
    }
    void JsonSaveOptions::setExportAsString( std::shared_ptr< bool > value)
    {
        m_ExportAsString = value;
    }
    std::shared_ptr< bool > JsonSaveOptions::getHasHeaderRow() const
    {
        return m_HasHeaderRow;
    }
    void JsonSaveOptions::setHasHeaderRow( std::shared_ptr< bool > value)
    {
        m_HasHeaderRow= value;
    }
    std::shared_ptr< std::wstring > JsonSaveOptions::getIndent() const
    {
        return m_Indent;
    }
    void JsonSaveOptions::setIndent( std::shared_ptr< std::wstring > value)
    {
        m_Indent = value;
    }

    /// <summary>
    /// JsonSaveOptions class implementation
    /// </summary>
    void SqlScriptSaveOptions::toJson(void* jsonIfc) const
    {
        SaveOptions::toJson(jsonIfc);
        ::nlohmann::json& json = *((::nlohmann::json*)jsonIfc);
        if (m_ColumnTypeMap) {
            json["ColumnTypeMap"] =convertUtf16(*m_ColumnTypeMap);
        }
        if (m_OperatorType) {
            json["OperatorType"] =convertUtf16(*m_OperatorType);
        }
        if (m_IdName) {
            json["IdName"] =convertUtf16(*m_IdName);
        }
        if (m_TableName) {
            json["TableName"] =convertUtf16(*m_TableName);
        }

        if (m_CheckIfTableExists) {
            json["CheckIfTableExists"] =*m_CheckIfTableExists;
        }
        if (m_CheckAllDataForColumnType) {
            json["CheckAllDataForColumnType"] =*m_CheckAllDataForColumnType;
        }
        if (m_AddBlankLineBetweenRows) {
            json["AddBlankLineBetweenRows"] =*m_AddBlankLineBetweenRows;
        }
        if (m_CreateTable) {
            json["CreateTable"] =*m_CreateTable;
        }
        if (m_HasHeaderRow) {
            json["HasHeaderRow"] =*m_HasHeaderRow;
        }
        if (m_Separator) {
            json["Separator"] =*m_Separator;
        }
        if (m_PrimaryKey) {
            json["PrimaryKey"] =*m_PrimaryKey;
        }
        if (m_StartId) {
            json["StartId"] =*m_StartId;
        }
        if (m_ExportAsString) {
            json["ExportAsString"] =*m_ExportAsString;
        }
    }
    void SqlScriptSaveOptions::fromJson(const void* jsonIfc)
    {
        SaveOptions::fromJson(jsonIfc);
        ::nlohmann::json& json = *((::nlohmann::json*)jsonIfc);
        if (json.contains("HasHeaderRow") && !json["HasHeaderRow"].is_null()) {
            m_HasHeaderRow = std::make_shared< bool >( json["HasHeaderRow"].get< bool >());
        }
        if (json.contains("CheckIfTableExists") && !json["CheckIfTableExists"].is_null()) {
            m_CheckIfTableExists = std::make_shared< bool >( json["CheckIfTableExists"].get< bool >());
        }
        if (json.contains("CheckAllDataForColumnType") && !json["CheckAllDataForColumnType"].is_null()) {
            m_CheckAllDataForColumnType = std::make_shared< bool >( json["CheckAllDataForColumnType"].get< bool >());
        }
        if (json.contains("AddBlankLineBetweenRows") && !json["AddBlankLineBetweenRows"].is_null()) {
            m_AddBlankLineBetweenRows = std::make_shared< bool >( json["AddBlankLineBetweenRows"].get< bool >());
        }
        if (json.contains("CreateTable") && !json["CreateTable"].is_null()) {
            m_CreateTable = std::make_shared< bool >( json["CreateTable"].get< bool >());
        }
        if (json.contains("Separator") && !json["Separator"].is_null()) {
            m_Separator = std::make_shared< char >( json["Separator"].get< bool >());
        }
        if (json.contains("PrimaryKey") && !json["PrimaryKey"].is_null()) {
            m_PrimaryKey = std::make_shared< int >( json["PrimaryKey"].get< int >());
        }
        if (json.contains("StartId") && !json["StartId"].is_null()) {
            m_StartId = std::make_shared< int >( json["StartId"].get< int >());
        }
        if (json.contains("ExportAsString") && !json["ExportAsString"].is_null()) {
            m_ExportAsString = std::make_shared< int >( json["ExportAsString"].get< int >());
        }
        if (json.contains("ColumnTypeMap") && !json["ColumnTypeMap"].is_null()) {
            m_ColumnTypeMap = std::make_shared< std::wstring >( convertUtf8( json["ColumnTypeMap"].get< std::string >() ));
        }
        if (json.contains("OperatorType") && !json["OperatorType"].is_null()) {
            m_OperatorType = std::make_shared< std::wstring >( convertUtf8( json["OperatorType"].get< std::string >() ));
        }
        if (json.contains("IdName") && !json["IdName"].is_null()) {
            m_IdName = std::make_shared< std::wstring >( convertUtf8( json["IdName"].get< std::string >() ));
        }
        if (json.contains("TableName") && !json["TableName"].is_null()) {
            m_TableName = std::make_shared< std::wstring >( convertUtf8( json["TableName"].get< std::string >() ));
        }        
    } 
        std::shared_ptr< bool > SqlScriptSaveOptions::SqlScriptSaveOptions::getCheckIfTableExists() const
        {
            return m_CheckIfTableExists;
        }
        void SqlScriptSaveOptions::SqlScriptSaveOptions::setCheckIfTableExists(  std::shared_ptr< bool> value )
        {
            m_CheckIfTableExists = value;
        }
        std::shared_ptr< bool > SqlScriptSaveOptions::getCheckAllDataForColumnType() const
        {
            return m_CheckAllDataForColumnType;
        }
        void SqlScriptSaveOptions::setCheckAllDataForColumnType(  std::shared_ptr< bool> value )
        {
            m_CheckAllDataForColumnType = value;
        }
        std::shared_ptr< bool > SqlScriptSaveOptions::getAddBlankLineBetweenRows() const
        {
            return m_AddBlankLineBetweenRows;
        }
        void SqlScriptSaveOptions::setAddBlankLineBetweenRows(  std::shared_ptr< bool> value )
        {
            m_AddBlankLineBetweenRows = value;
        }
        std::shared_ptr< bool > SqlScriptSaveOptions::getCreateTable() const
        {
            return m_CreateTable;
        }
        void SqlScriptSaveOptions::setCreateTable(  std::shared_ptr< bool> value )
        {
            m_CreateTable = value;
        }
        std::shared_ptr< bool > SqlScriptSaveOptions::getHasHeaderRow() const
        {
            return m_HasHeaderRow;
        }
        void SqlScriptSaveOptions::setHasHeaderRow(  std::shared_ptr< bool> value )
        {
            m_HasHeaderRow = value;
        }

        std::shared_ptr< char > SqlScriptSaveOptions::getSeparator() const
        {
            return m_Separator;
        }
        void SqlScriptSaveOptions::setSeparator(  std::shared_ptr< char> value )
        {
            m_Separator = value;
        }
        std::shared_ptr< int > SqlScriptSaveOptions::getPrimaryKey() const
        {
            return m_PrimaryKey;
        }
        void SqlScriptSaveOptions::setPrimaryKey(  std::shared_ptr< int> value )
        {
            m_PrimaryKey = value;
        }
        std::shared_ptr< int > SqlScriptSaveOptions::getStartId() const
        {
            return m_StartId;
        }
        void SqlScriptSaveOptions::setStartId(  std::shared_ptr< int> value )
        {
            m_StartId = value;
        }
        std::shared_ptr< int > SqlScriptSaveOptions::getExportAsString() const
        {
            return m_ExportAsString;
        }
        void SqlScriptSaveOptions::setExportAsString(  std::shared_ptr< int> value )
        {
            m_ExportAsString = value;
        }

        std::shared_ptr< std::wstring  > SqlScriptSaveOptions::getColumnTypeMap() const
        {
            return m_ColumnTypeMap;
        }
        void SqlScriptSaveOptions::setColumnTypeMap ( std::shared_ptr< std::wstring > value )
        {
            m_ColumnTypeMap = value;
        }
        std::shared_ptr< std::wstring  > SqlScriptSaveOptions::getOperatorType() const
        {
            return m_OperatorType;
        }
        void SqlScriptSaveOptions::setOperatorType ( std::shared_ptr< std::wstring > value )
        {
            m_OperatorType = value;
        }
        std::shared_ptr< std::wstring  > SqlScriptSaveOptions::getIdName() const
        {
            return m_IdName;
        }
        void SqlScriptSaveOptions::setIdName ( std::shared_ptr< std::wstring > value )
        {
            m_IdName = value;
        }
        std::shared_ptr< std::wstring  > SqlScriptSaveOptions::getTableName() const
        {
            return m_TableName;
        }
        void SqlScriptSaveOptions::setTableName ( std::shared_ptr< std::wstring > value )
        {
           m_TableName  = value;
        }
    /// <summary>
    /// OoxmlSaveOptions class implementation
    /// </summary>
    void OoxmlSaveOptions::toJson(void* jsonIfc) const
    {
        SaveOptions::toJson(jsonIfc);
        ::nlohmann::json& json = *((::nlohmann::json*)jsonIfc);
        if (m_ExportCellName) {
            json["ExportCellName"] =*m_ExportCellName;
        }
    }

    void OoxmlSaveOptions::fromJson(const void* jsonIfc)
    {
        SaveOptions::fromJson(jsonIfc);
        ::nlohmann::json& json = *((::nlohmann::json*)jsonIfc);
        if (json.contains("ExportCellName") && !json["ExportCellName"].is_null()) {
            m_ExportCellName = std::make_shared< bool >( json["ExportCellName"].get< bool >());
        }
    }
    std::shared_ptr< bool > OoxmlSaveOptions::getExportCellName() const
    {
        return m_ExportCellName;
    }
    void OoxmlSaveOptions::setExportCellName( std::shared_ptr< bool > value)
    {
        m_ExportCellName = value;
    }
    /// <summary>
    /// SvgSaveOptions class implementation
    /// </summary>
    void SvgSaveOptions::toJson(void* jsonIfc) const
    {
        SaveOptions::toJson(jsonIfc);
        ::nlohmann::json& json = *((::nlohmann::json*)jsonIfc);
        if (m_SheetIndex) {
            json["SheetIndex"] =*m_SheetIndex;
        }
    }
    void SvgSaveOptions::fromJson(const void* jsonIfc)
    {
        SaveOptions::fromJson(jsonIfc);
        ::nlohmann::json& json = *((::nlohmann::json*)jsonIfc);
        if (json.contains("SheetIndex") && !json["SheetIndex"].is_null()) {
            m_SheetIndex = std::make_shared< int >( json["SheetIndex"].get< int >());
        }
    }
    std::shared_ptr< int > SvgSaveOptions::getSheetIndex() const
    {
        return m_SheetIndex;
    }
    void SvgSaveOptions::setSheetIndex( std::shared_ptr< int > value)
    {
        m_SheetIndex = value;
    }
    /// <summary>
    /// MarkdownSaveOptions class implementation
    /// </summary>
    void MarkdownSaveOptions::toJson(void* jsonIfc) const
    {
        SaveOptions::toJson(jsonIfc);
        ::nlohmann::json& json = *((::nlohmann::json*)jsonIfc);
        if (m_Encoding) {
            json["Encoding"] = convertUtf16(*m_Encoding);
        }
        if (m_FormatStrategy) {
            json["FormatStrategy"] = convertUtf16(*m_FormatStrategy);
        }
        if (m_LineSeparator) {
            json["LineSeparator"] = convertUtf16(*m_LineSeparator);
        }
    }
    void MarkdownSaveOptions::fromJson(const void* jsonIfc)
    {
        SaveOptions::fromJson(jsonIfc);
        ::nlohmann::json& json = *((::nlohmann::json*)jsonIfc);
        if (json.contains("Encoding") && !json["Encoding"].is_null()) {
            m_Encoding = std::make_shared< std::wstring >( convertUtf8( json["Encoding"].get< std::string >() ));
        }
        if (json.contains("FormatStrategy") && !json["FormatStrategy"].is_null()) {
            m_FormatStrategy = std::make_shared< std::wstring >( convertUtf8( json["FormatStrategy"].get< std::string >() ));
        }
        if (json.contains("LineSeparator") && !json["LineSeparator"].is_null()) {
            m_LineSeparator = std::make_shared< std::wstring >( convertUtf8( json["LineSeparator"].get< std::string >() ));
        }
    }
    std::shared_ptr< std::wstring > MarkdownSaveOptions::getEncoding() const
    {
        return m_Encoding;
    }
    void MarkdownSaveOptions::setEncoding( std::shared_ptr< std::wstring > value)
    {
        m_Encoding = value;
    }
    std::shared_ptr< std::wstring > MarkdownSaveOptions::getFormatStrategy() const
    {
        return m_FormatStrategy;
    }
    void MarkdownSaveOptions::setFormatStrategy( std::shared_ptr< std::wstring > value)
    {
        m_FormatStrategy = value;
    }
    std::shared_ptr< std::wstring > MarkdownSaveOptions::getLineSeparator() const
    {
        return m_LineSeparator;
    }
    void MarkdownSaveOptions::setLineSeparator( std::shared_ptr< std::wstring > value)
    {
        m_LineSeparator = value;
    }
    /// <summary>
    /// TxtSaveOptions class implementation
    /// </summary>
    void TxtSaveOptions::toJson(void* jsonIfc) const
    {
        SaveOptions::toJson(jsonIfc);
        ::nlohmann::json& json = *((::nlohmann::json*)jsonIfc);
        if (m_QuoteType) {
            json["QuoteType"] = convertUtf16(*m_QuoteType);
        }
        if (m_Separator) {
            json["Separator"] = convertUtf16(*m_Separator);
        }
        if (m_SeparatorString) {
            json["SeparatorString"] = convertUtf16(*m_SeparatorString);
        }
        if (m_AlwaysQuoted) {
            json["AlwaysQuoted"] =*m_AlwaysQuoted;
        }
    }
    void TxtSaveOptions::fromJson(const void* jsonIfc)
    {
        SaveOptions::fromJson(jsonIfc);
        ::nlohmann::json& json = *((::nlohmann::json*)jsonIfc);
        if (json.contains("QuoteType") && !json["QuoteType"].is_null()) {
            m_QuoteType = std::make_shared< std::wstring >( convertUtf8( json["QuoteType"].get< std::string >() ));
        }
        if (json.contains("Separator") && !json["Separator"].is_null()) {
            m_Separator = std::make_shared< std::wstring >( convertUtf8( json["Separator"].get< std::string >() ));
        }
        if (json.contains("SeparatorString") && !json["SeparatorString"].is_null()) {
            m_SeparatorString = std::make_shared< std::wstring >( convertUtf8( json["SeparatorString"].get< std::string >() ));
        }
        if (json.contains("AlwaysQuoted") && !json["AlwaysQuoted"].is_null()) {
            m_AlwaysQuoted = std::make_shared< bool >( json["AlwaysQuoted"].get< bool >());
        }
    }
    std::shared_ptr< std::wstring > TxtSaveOptions::getQuoteType() const
    {
        return m_QuoteType;
    }
    void TxtSaveOptions::setQuoteType( std::shared_ptr< std::wstring > value)
    {
        m_QuoteType = value;
    }
    std::shared_ptr< std::wstring > TxtSaveOptions::getSeparator() const
    {
        return m_Separator;
    }
    void TxtSaveOptions::setSeparator( std::shared_ptr< std::wstring > value)
    {
        m_Separator = value;
    }
    std::shared_ptr< std::wstring > TxtSaveOptions::getSeparatorString() const
    {
        return m_SeparatorString;
    }
    void TxtSaveOptions::setSeparatorString( std::shared_ptr< std::wstring > value)
    {
        m_SeparatorString = value;
    }
    std::shared_ptr< bool > TxtSaveOptions::getAlwaysQuoted() const
    {
        return m_AlwaysQuoted;
    }
    void TxtSaveOptions::setAlwaysQuoted( std::shared_ptr< bool > value)
    {
        m_AlwaysQuoted = value;
    }
    /// <summary>
    /// MHtmlSaveOptions class implementation
    /// </summary>
    void MHtmlSaveOptions::toJson(void* jsonIfc) const
    {
        SaveOptions::toJson(jsonIfc);
        ::nlohmann::json& json = *((::nlohmann::json*)jsonIfc);
        if (m_AttachedFilesDirectory) {
            json["AttachedFilesDirectory"] = convertUtf16(*m_AttachedFilesDirectory);
        }
        if (m_AttachedFilesUrlPrefix) {
            json["AttachedFilesUrlPrefix"] = convertUtf16(*m_AttachedFilesUrlPrefix);
        }
        if (m_Encoding) {
            json["Encoding"] = convertUtf16(*m_Encoding);
        }
        if (m_ExportActiveWorksheetOnly) {
            json["ExportActiveWorksheetOnly"] =*m_ExportActiveWorksheetOnly;
        }
        if (m_ExportChartImageFormat) {
            json["ExportChartImageFormat"] = convertUtf16(*m_ExportChartImageFormat);
        }
        if (m_ExportImagesAsBase64) {
            json["ExportImagesAsBase64"] =*m_ExportImagesAsBase64;
        }
        if (m_HiddenColDisplayType) {
            json["HiddenColDisplayType"] = convertUtf16(*m_HiddenColDisplayType);
        }
        if (m_HiddenRowDisplayType) {
            json["HiddenRowDisplayType"] = convertUtf16(*m_HiddenRowDisplayType);
        }
        if (m_HtmlCrossStringType) {
            json["HtmlCrossStringType"] = convertUtf16(*m_HtmlCrossStringType);
        }
        if (m_IsExpImageToTempDir) {
            json["IsExpImageToTempDir"] =*m_IsExpImageToTempDir;
        }
        if (m_PageTitle) {
            json["PageTitle"] = convertUtf16(*m_PageTitle);
        }
        if (m_ParseHtmlTagInCell) {
            json["ParseHtmlTagInCell"] =*m_ParseHtmlTagInCell;
        }
    }
    void MHtmlSaveOptions::fromJson(const void* jsonIfc)
    {
        SaveOptions::fromJson(jsonIfc);
        ::nlohmann::json& json = *((::nlohmann::json*)jsonIfc);
        if (json.contains("AttachedFilesDirectory") && !json["AttachedFilesDirectory"].is_null()) {
            m_AttachedFilesDirectory = std::make_shared< std::wstring >( convertUtf8( json["AttachedFilesDirectory"].get< std::string >() ));
        }
        if (json.contains("AttachedFilesUrlPrefix") && !json["AttachedFilesUrlPrefix"].is_null()) {
            m_AttachedFilesUrlPrefix = std::make_shared< std::wstring >( convertUtf8( json["AttachedFilesUrlPrefix"].get< std::string >() ));
        }
        if (json.contains("Encoding") && !json["Encoding"].is_null()) {
            m_Encoding = std::make_shared< std::wstring >( convertUtf8( json["Encoding"].get< std::string >() ));
        }
        if (json.contains("ExportActiveWorksheetOnly") && !json["ExportActiveWorksheetOnly"].is_null()) {
            m_ExportActiveWorksheetOnly = std::make_shared< bool >( json["ExportActiveWorksheetOnly"].get< bool >());
        }
        if (json.contains("ExportChartImageFormat") && !json["ExportChartImageFormat"].is_null()) {
            m_ExportChartImageFormat = std::make_shared< std::wstring >( convertUtf8( json["ExportChartImageFormat"].get< std::string >() ));
        }
        if (json.contains("ExportImagesAsBase64") && !json["ExportImagesAsBase64"].is_null()) {
            m_ExportImagesAsBase64 = std::make_shared< bool >( json["ExportImagesAsBase64"].get< bool >());
        }
        if (json.contains("HiddenColDisplayType") && !json["HiddenColDisplayType"].is_null()) {
            m_HiddenColDisplayType = std::make_shared< std::wstring >( convertUtf8( json["HiddenColDisplayType"].get< std::string >() ));
        }
        if (json.contains("HiddenRowDisplayType") && !json["HiddenRowDisplayType"].is_null()) {
            m_HiddenRowDisplayType = std::make_shared< std::wstring >( convertUtf8( json["HiddenRowDisplayType"].get< std::string >() ));
        }
        if (json.contains("HtmlCrossStringType") && !json["HtmlCrossStringType"].is_null()) {
            m_HtmlCrossStringType = std::make_shared< std::wstring >( convertUtf8( json["HtmlCrossStringType"].get< std::string >() ));
        }
        if (json.contains("IsExpImageToTempDir") && !json["IsExpImageToTempDir"].is_null()) {
            m_IsExpImageToTempDir = std::make_shared< bool >( json["IsExpImageToTempDir"].get< bool >());
        }
        if (json.contains("PageTitle") && !json["PageTitle"].is_null()) {
            m_PageTitle = std::make_shared< std::wstring >( convertUtf8( json["PageTitle"].get< std::string >() ));
        }
        if (json.contains("ParseHtmlTagInCell") && !json["ParseHtmlTagInCell"].is_null()) {
            m_ParseHtmlTagInCell = std::make_shared< bool >( json["ParseHtmlTagInCell"].get< bool >());
        }
    }
    std::shared_ptr< std::wstring > MHtmlSaveOptions::getAttachedFilesDirectory() const
    {
        return m_AttachedFilesDirectory;
    }
    void MHtmlSaveOptions::setAttachedFilesDirectory( std::shared_ptr< std::wstring > value)
    {
        m_AttachedFilesDirectory = value;
    }
    std::shared_ptr< std::wstring > MHtmlSaveOptions::getAttachedFilesUrlPrefix() const
    {
        return m_AttachedFilesUrlPrefix;
    }
    void MHtmlSaveOptions::setAttachedFilesUrlPrefix( std::shared_ptr< std::wstring > value)
    {
        m_AttachedFilesUrlPrefix = value;
    }
    std::shared_ptr< std::wstring > MHtmlSaveOptions::getEncoding() const
    {
        return m_Encoding;
    }
    void MHtmlSaveOptions::setEncoding( std::shared_ptr< std::wstring > value)
    {
        m_Encoding = value;
    }
    std::shared_ptr< bool > MHtmlSaveOptions::getExportActiveWorksheetOnly() const
    {
        return m_ExportActiveWorksheetOnly;
    }
    void MHtmlSaveOptions::setExportActiveWorksheetOnly( std::shared_ptr< bool > value)
    {
        m_ExportActiveWorksheetOnly = value;
    }
    std::shared_ptr< std::wstring > MHtmlSaveOptions::getExportChartImageFormat() const
    {
        return m_ExportChartImageFormat;
    }
    void MHtmlSaveOptions::setExportChartImageFormat( std::shared_ptr< std::wstring > value)
    {
        m_ExportChartImageFormat = value;
    }
    std::shared_ptr< bool > MHtmlSaveOptions::getExportImagesAsBase64() const
    {
        return m_ExportImagesAsBase64;
    }
    void MHtmlSaveOptions::setExportImagesAsBase64( std::shared_ptr< bool > value)
    {
        m_ExportImagesAsBase64 = value;
    }
    std::shared_ptr< std::wstring > MHtmlSaveOptions::getHiddenColDisplayType() const
    {
        return m_HiddenColDisplayType;
    }
    void MHtmlSaveOptions::setHiddenColDisplayType( std::shared_ptr< std::wstring > value)
    {
        m_HiddenColDisplayType = value;
    }
    std::shared_ptr< std::wstring > MHtmlSaveOptions::getHiddenRowDisplayType() const
    {
        return m_HiddenRowDisplayType;
    }
    void MHtmlSaveOptions::setHiddenRowDisplayType( std::shared_ptr< std::wstring > value)
    {
        m_HiddenRowDisplayType = value;
    }
    std::shared_ptr< std::wstring > MHtmlSaveOptions::getHtmlCrossStringType() const
    {
        return m_HtmlCrossStringType;
    }
    void MHtmlSaveOptions::setHtmlCrossStringType( std::shared_ptr< std::wstring > value)
    {
        m_HtmlCrossStringType = value;
    }
    std::shared_ptr< bool > MHtmlSaveOptions::getIsExpImageToTempDir() const
    {
        return m_IsExpImageToTempDir;
    }
    void MHtmlSaveOptions::setIsExpImageToTempDir( std::shared_ptr< bool > value)
    {
        m_IsExpImageToTempDir = value;
    }
    std::shared_ptr< std::wstring > MHtmlSaveOptions::getPageTitle() const
    {
        return m_PageTitle;
    }
    void MHtmlSaveOptions::setPageTitle( std::shared_ptr< std::wstring > value)
    {
        m_PageTitle = value;
    }
    std::shared_ptr< bool > MHtmlSaveOptions::getParseHtmlTagInCell() const
    {
        return m_ParseHtmlTagInCell;
    }
    void MHtmlSaveOptions::setParseHtmlTagInCell( std::shared_ptr< bool > value)
    {
        m_ParseHtmlTagInCell = value;
    }
    /// <summary>
    /// HtmlSaveOptions class implementation
    /// </summary>
    void HtmlSaveOptions::toJson(void* jsonIfc) const
    {
        SaveOptions::toJson(jsonIfc);
        ::nlohmann::json& json = *((::nlohmann::json*)jsonIfc);
        if (m_SaveAsSingleFile) {
            json["SaveAsSingleFile"] = convertUtf16(*m_SaveAsSingleFile);
        }
        if (m_ExportHiddenWorksheet) {
            json["ExportHiddenWorksheet"] = convertUtf16(*m_ExportHiddenWorksheet);
        }
        if (m_ExportGridLines) {
            json["ExportGridLines"] = convertUtf16(*m_ExportGridLines);
        }
        if (m_PresentationPreference) {
            json["PresentationPreference"] = convertUtf16(*m_PresentationPreference);
        }
        if (m_CellCssPrefix) {
            json["CellCssPrefix"] = convertUtf16(*m_CellCssPrefix);
        }
        if (m_TableCssId) {
            json["TableCssId"] = convertUtf16(*m_TableCssId);
        }
        if (m_IsFullPathLink) {
            json["IsFullPathLink"] = convertUtf16(*m_IsFullPathLink);
        }
        if (m_ExportWorksheetCSSSeparately) {
            json["ExportWorksheetCSSSeparately"] = convertUtf16(*m_ExportWorksheetCSSSeparately);
        }
        if (m_ExportSimilarBorderStyle) {
            json["ExportSimilarBorderStyle"] = convertUtf16(*m_ExportSimilarBorderStyle);
        }
        if (m_MergeEmptyTdForcely) {
            json["MergeEmptyTdForcely"] = convertUtf16(*m_MergeEmptyTdForcely);
        }
        if (m_ExportCellCoordinate) {
            json["ExportCellCoordinate"] = convertUtf16(*m_ExportCellCoordinate);
        }
        if (m_ExportExtraHeadings) {
            json["ExportExtraHeadings"] = convertUtf16(*m_ExportExtraHeadings);
        }
        if (m_ExportHeadings) {
            json["ExportHeadings"] = convertUtf16(*m_ExportHeadings);
        }
        if (m_ExportFormula) {
            json["ExportFormula"] = convertUtf16(*m_ExportFormula);
        }
        if (m_AddTooltipText) {
            json["AddTooltipText"] = convertUtf16(*m_AddTooltipText);
        }
        if (m_ExportBogusRowData) {
            json["ExportBogusRowData"] = convertUtf16(*m_ExportBogusRowData);
        }
        if (m_ExcludeUnusedStyles) {
            json["ExcludeUnusedStyles"] = convertUtf16(*m_ExcludeUnusedStyles);
        }
        if (m_ExportDocumentProperties) {
            json["ExportDocumentProperties"] = convertUtf16(*m_ExportDocumentProperties);
        }
        if (m_ExportWorksheetProperties) {
            json["ExportWorksheetProperties"] = convertUtf16(*m_ExportWorksheetProperties);
        }
        if (m_ExportWorkbookProperties) {
            json["ExportWorkbookProperties"] = convertUtf16(*m_ExportWorkbookProperties);
        }
        if (m_ExportFrameScriptsAndProperties) {
            json["ExportFrameScriptsAndProperties"] = convertUtf16(*m_ExportFrameScriptsAndProperties);
        }
        if (m_AttachedFilesDirectory) {
            json["AttachedFilesDirectory"] = convertUtf16(*m_AttachedFilesDirectory);
        }
        if (m_AttachedFilesUrlPrefix) {
            json["AttachedFilesUrlPrefix"] = convertUtf16(*m_AttachedFilesUrlPrefix);
        }
        if (m_Encoding) {
            json["Encoding"] = convertUtf16(*m_Encoding);
        }
        if (m_ExportActiveWorksheetOnly) {
            json["ExportActiveWorksheetOnly"] =*m_ExportActiveWorksheetOnly;
        }
        if (m_ExportChartImageFormat) {
            json["ExportChartImageFormat"] = convertUtf16(*m_ExportChartImageFormat);
        }
        if (m_ExportImagesAsBase64) {
            json["ExportImagesAsBase64"] =*m_ExportImagesAsBase64;
        }
        if (m_HiddenColDisplayType) {
            json["HiddenColDisplayType"] = convertUtf16(*m_HiddenColDisplayType);
        }
        if (m_HiddenRowDisplayType) {
            json["HiddenRowDisplayType"] = convertUtf16(*m_HiddenRowDisplayType);
        }
        if (m_HtmlCrossStringType) {
            json["HtmlCrossStringType"] = convertUtf16(*m_HtmlCrossStringType);
        }
        if (m_IsExpImageToTempDir) {
            json["IsExpImageToTempDir"] =*m_IsExpImageToTempDir;
        }
        if (m_PageTitle) {
            json["PageTitle"] = convertUtf16(*m_PageTitle);
        }
        if (m_ParseHtmlTagInCell) {
            json["ParseHtmlTagInCell"] =*m_ParseHtmlTagInCell;
        }
    }
    void HtmlSaveOptions::fromJson(const void* jsonIfc)
    {
        SaveOptions::fromJson(jsonIfc);
        ::nlohmann::json& json = *((::nlohmann::json*)jsonIfc);
        if (json.contains("SaveAsSingleFile") && !json["SaveAsSingleFile"].is_null()) {
            m_SaveAsSingleFile = std::make_shared< std::wstring >( convertUtf8( json["SaveAsSingleFile"].get< std::string >() ));
        }
        if (json.contains("ExportHiddenWorksheet") && !json["ExportHiddenWorksheet"].is_null()) {
            m_ExportHiddenWorksheet = std::make_shared< std::wstring >( convertUtf8( json["ExportHiddenWorksheet"].get< std::string >() ));
        }
        if (json.contains("ExportGridLines") && !json["ExportGridLines"].is_null()) {
            m_ExportGridLines = std::make_shared< std::wstring >( convertUtf8( json["ExportGridLines"].get< std::string >() ));
        }
        if (json.contains("PresentationPreference") && !json["PresentationPreference"].is_null()) {
            m_PresentationPreference = std::make_shared< std::wstring >( convertUtf8( json["PresentationPreference"].get< std::string >() ));
        }
        if (json.contains("CellCssPrefix") && !json["CellCssPrefix"].is_null()) {
            m_CellCssPrefix = std::make_shared< std::wstring >( convertUtf8( json["CellCssPrefix"].get< std::string >() ));
        }
        if (json.contains("TableCssId") && !json["TableCssId"].is_null()) {
            m_TableCssId = std::make_shared< std::wstring >( convertUtf8( json["TableCssId"].get< std::string >() ));
        }
        if (json.contains("IsFullPathLink") && !json["IsFullPathLink"].is_null()) {
            m_IsFullPathLink = std::make_shared< std::wstring >( convertUtf8( json["IsFullPathLink"].get< std::string >() ));
        }
        if (json.contains("ExportWorksheetCSSSeparately") && !json["ExportWorksheetCSSSeparately"].is_null()) {
            m_ExportWorksheetCSSSeparately = std::make_shared< std::wstring >( convertUtf8( json["ExportWorksheetCSSSeparately"].get< std::string >() ));
        }
        if (json.contains("ExportSimilarBorderStyle") && !json["ExportSimilarBorderStyle"].is_null()) {
            m_ExportSimilarBorderStyle = std::make_shared< std::wstring >( convertUtf8( json["ExportSimilarBorderStyle"].get< std::string >() ));
        }
        if (json.contains("MergeEmptyTdForcely") && !json["MergeEmptyTdForcely"].is_null()) {
            m_MergeEmptyTdForcely = std::make_shared< std::wstring >( convertUtf8( json["MergeEmptyTdForcely"].get< std::string >() ));
        }
        if (json.contains("ExportCellCoordinate") && !json["ExportCellCoordinate"].is_null()) {
            m_ExportCellCoordinate = std::make_shared< std::wstring >( convertUtf8( json["ExportCellCoordinate"].get< std::string >() ));
        }
        if (json.contains("ExportExtraHeadings") && !json["ExportExtraHeadings"].is_null()) {
            m_ExportExtraHeadings = std::make_shared< std::wstring >( convertUtf8( json["ExportExtraHeadings"].get< std::string >() ));
        }
        if (json.contains("ExportHeadings") && !json["ExportHeadings"].is_null()) {
            m_ExportHeadings = std::make_shared< std::wstring >( convertUtf8( json["ExportHeadings"].get< std::string >() ));
        }
        if (json.contains("ExportFormula") && !json["ExportFormula"].is_null()) {
            m_ExportFormula = std::make_shared< std::wstring >( convertUtf8( json["ExportFormula"].get< std::string >() ));
        }
        if (json.contains("AddTooltipText") && !json["AddTooltipText"].is_null()) {
            m_AddTooltipText = std::make_shared< std::wstring >( convertUtf8( json["AddTooltipText"].get< std::string >() ));
        }
        if (json.contains("ExportBogusRowData") && !json["ExportBogusRowData"].is_null()) {
            m_ExportBogusRowData = std::make_shared< std::wstring >( convertUtf8( json["ExportBogusRowData"].get< std::string >() ));
        }
        if (json.contains("ExcludeUnusedStyles") && !json["ExcludeUnusedStyles"].is_null()) {
            m_ExcludeUnusedStyles = std::make_shared< std::wstring >( convertUtf8( json["ExcludeUnusedStyles"].get< std::string >() ));
        }
        if (json.contains("ExportDocumentProperties") && !json["ExportDocumentProperties"].is_null()) {
            m_ExportDocumentProperties = std::make_shared< std::wstring >( convertUtf8( json["ExportDocumentProperties"].get< std::string >() ));
        }
        if (json.contains("ExportWorksheetProperties") && !json["ExportWorksheetProperties"].is_null()) {
            m_ExportWorksheetProperties = std::make_shared< std::wstring >( convertUtf8( json["ExportWorksheetProperties"].get< std::string >() ));
        }
        if (json.contains("ExportWorkbookProperties") && !json["ExportWorkbookProperties"].is_null()) {
            m_ExportWorkbookProperties = std::make_shared< std::wstring >( convertUtf8( json["ExportWorkbookProperties"].get< std::string >() ));
        }
        if (json.contains("ExportFrameScriptsAndProperties") && !json["ExportFrameScriptsAndProperties"].is_null()) {
            m_ExportFrameScriptsAndProperties = std::make_shared< std::wstring >( convertUtf8( json["ExportFrameScriptsAndProperties"].get< std::string >() ));
        }
        if (json.contains("AttachedFilesDirectory") && !json["AttachedFilesDirectory"].is_null()) {
            m_AttachedFilesDirectory = std::make_shared< std::wstring >( convertUtf8( json["AttachedFilesDirectory"].get< std::string >() ));
        }
        if (json.contains("AttachedFilesUrlPrefix") && !json["AttachedFilesUrlPrefix"].is_null()) {
            m_AttachedFilesUrlPrefix = std::make_shared< std::wstring >( convertUtf8( json["AttachedFilesUrlPrefix"].get< std::string >() ));
        }
        if (json.contains("Encoding") && !json["Encoding"].is_null()) {
            m_Encoding = std::make_shared< std::wstring >( convertUtf8( json["Encoding"].get< std::string >() ));
        }
        if (json.contains("ExportActiveWorksheetOnly") && !json["ExportActiveWorksheetOnly"].is_null()) {
            m_ExportActiveWorksheetOnly = std::make_shared< bool >( json["ExportActiveWorksheetOnly"].get< bool >());
        }
        if (json.contains("ExportChartImageFormat") && !json["ExportChartImageFormat"].is_null()) {
            m_ExportChartImageFormat = std::make_shared< std::wstring >( convertUtf8( json["ExportChartImageFormat"].get< std::string >() ));
        }
        if (json.contains("ExportImagesAsBase64") && !json["ExportImagesAsBase64"].is_null()) {
            m_ExportImagesAsBase64 = std::make_shared< bool >( json["ExportImagesAsBase64"].get< bool >());
        }
        if (json.contains("HiddenColDisplayType") && !json["HiddenColDisplayType"].is_null()) {
            m_HiddenColDisplayType = std::make_shared< std::wstring >( convertUtf8( json["HiddenColDisplayType"].get< std::string >() ));
        }
        if (json.contains("HiddenRowDisplayType") && !json["HiddenRowDisplayType"].is_null()) {
            m_HiddenRowDisplayType = std::make_shared< std::wstring >( convertUtf8( json["HiddenRowDisplayType"].get< std::string >() ));
        }
        if (json.contains("HtmlCrossStringType") && !json["HtmlCrossStringType"].is_null()) {
            m_HtmlCrossStringType = std::make_shared< std::wstring >( convertUtf8( json["HtmlCrossStringType"].get< std::string >() ));
        }
        if (json.contains("IsExpImageToTempDir") && !json["IsExpImageToTempDir"].is_null()) {
            m_IsExpImageToTempDir = std::make_shared< bool >( json["IsExpImageToTempDir"].get< bool >());
        }
        if (json.contains("PageTitle") && !json["PageTitle"].is_null()) {
            m_PageTitle = std::make_shared< std::wstring >( convertUtf8( json["PageTitle"].get< std::string >() ));
        }
        if (json.contains("ParseHtmlTagInCell") && !json["ParseHtmlTagInCell"].is_null()) {
            m_ParseHtmlTagInCell = std::make_shared< bool >( json["ParseHtmlTagInCell"].get< bool >());
        }
    }
    std::shared_ptr< std::wstring > HtmlSaveOptions::getSaveAsSingleFile() const
    {
        return m_SaveAsSingleFile;
    }
    void HtmlSaveOptions::setSaveAsSingleFile( std::shared_ptr< std::wstring > value)
    {
        m_SaveAsSingleFile = value;
    }
    std::shared_ptr< std::wstring > HtmlSaveOptions::getExportHiddenWorksheet() const
    {
        return m_ExportHiddenWorksheet;
    }
    void HtmlSaveOptions::setExportHiddenWorksheet( std::shared_ptr< std::wstring > value)
    {
        m_ExportHiddenWorksheet = value;
    }
    std::shared_ptr< std::wstring > HtmlSaveOptions::getExportGridLines() const
    {
        return m_ExportGridLines;
    }
    void HtmlSaveOptions::setExportGridLines( std::shared_ptr< std::wstring > value)
    {
        m_ExportGridLines = value;
    }
    std::shared_ptr< std::wstring > HtmlSaveOptions::getPresentationPreference() const
    {
        return m_PresentationPreference;
    }
    void HtmlSaveOptions::setPresentationPreference( std::shared_ptr< std::wstring > value)
    {
        m_PresentationPreference = value;
    }
    std::shared_ptr< std::wstring > HtmlSaveOptions::getCellCssPrefix() const
    {
        return m_CellCssPrefix;
    }
    void HtmlSaveOptions::setCellCssPrefix( std::shared_ptr< std::wstring > value)
    {
        m_CellCssPrefix = value;
    }
    std::shared_ptr< std::wstring > HtmlSaveOptions::getTableCssId() const
    {
        return m_TableCssId;
    }
    void HtmlSaveOptions::setTableCssId( std::shared_ptr< std::wstring > value)
    {
        m_TableCssId = value;
    }
    std::shared_ptr< std::wstring > HtmlSaveOptions::getIsFullPathLink() const
    {
        return m_IsFullPathLink;
    }
    void HtmlSaveOptions::setIsFullPathLink( std::shared_ptr< std::wstring > value)
    {
        m_IsFullPathLink = value;
    }
    std::shared_ptr< std::wstring > HtmlSaveOptions::getExportWorksheetCSSSeparately() const
    {
        return m_ExportWorksheetCSSSeparately;
    }
    void HtmlSaveOptions::setExportWorksheetCSSSeparately( std::shared_ptr< std::wstring > value)
    {
        m_ExportWorksheetCSSSeparately = value;
    }
    std::shared_ptr< std::wstring > HtmlSaveOptions::getExportSimilarBorderStyle() const
    {
        return m_ExportSimilarBorderStyle;
    }
    void HtmlSaveOptions::setExportSimilarBorderStyle( std::shared_ptr< std::wstring > value)
    {
        m_ExportSimilarBorderStyle = value;
    }
    std::shared_ptr< std::wstring > HtmlSaveOptions::getMergeEmptyTdForcely() const
    {
        return m_MergeEmptyTdForcely;
    }
    void HtmlSaveOptions::setMergeEmptyTdForcely( std::shared_ptr< std::wstring > value)
    {
        m_MergeEmptyTdForcely = value;
    }
    std::shared_ptr< std::wstring > HtmlSaveOptions::getExportCellCoordinate() const
    {
        return m_ExportCellCoordinate;
    }
    void HtmlSaveOptions::setExportCellCoordinate( std::shared_ptr< std::wstring > value)
    {
        m_ExportCellCoordinate = value;
    }
    std::shared_ptr< std::wstring > HtmlSaveOptions::getExportExtraHeadings() const
    {
        return m_ExportExtraHeadings;
    }
    void HtmlSaveOptions::setExportExtraHeadings( std::shared_ptr< std::wstring > value)
    {
        m_ExportExtraHeadings = value;
    }
    std::shared_ptr< std::wstring > HtmlSaveOptions::getExportHeadings() const
    {
        return m_ExportHeadings;
    }
    void HtmlSaveOptions::setExportHeadings( std::shared_ptr< std::wstring > value)
    {
        m_ExportHeadings = value;
    }
    std::shared_ptr< std::wstring > HtmlSaveOptions::getExportFormula() const
    {
        return m_ExportFormula;
    }
    void HtmlSaveOptions::setExportFormula( std::shared_ptr< std::wstring > value)
    {
        m_ExportFormula = value;
    }
    std::shared_ptr< std::wstring > HtmlSaveOptions::getAddTooltipText() const
    {
        return m_AddTooltipText;
    }
    void HtmlSaveOptions::setAddTooltipText( std::shared_ptr< std::wstring > value)
    {
        m_AddTooltipText = value;
    }
    std::shared_ptr< std::wstring > HtmlSaveOptions::getExportBogusRowData() const
    {
        return m_ExportBogusRowData;
    }
    void HtmlSaveOptions::setExportBogusRowData( std::shared_ptr< std::wstring > value)
    {
        m_ExportBogusRowData = value;
    }
    std::shared_ptr< std::wstring > HtmlSaveOptions::getExcludeUnusedStyles() const
    {
        return m_ExcludeUnusedStyles;
    }
    void HtmlSaveOptions::setExcludeUnusedStyles( std::shared_ptr< std::wstring > value)
    {
        m_ExcludeUnusedStyles = value;
    }
    std::shared_ptr< std::wstring > HtmlSaveOptions::getExportDocumentProperties() const
    {
        return m_ExportDocumentProperties;
    }
    void HtmlSaveOptions::setExportDocumentProperties( std::shared_ptr< std::wstring > value)
    {
        m_ExportDocumentProperties = value;
    }
    std::shared_ptr< std::wstring > HtmlSaveOptions::getExportWorksheetProperties() const
    {
        return m_ExportWorksheetProperties;
    }
    void HtmlSaveOptions::setExportWorksheetProperties( std::shared_ptr< std::wstring > value)
    {
        m_ExportWorksheetProperties = value;
    }
    std::shared_ptr< std::wstring > HtmlSaveOptions::getExportWorkbookProperties() const
    {
        return m_ExportWorkbookProperties;
    }
    void HtmlSaveOptions::setExportWorkbookProperties( std::shared_ptr< std::wstring > value)
    {
        m_ExportWorkbookProperties = value;
    }
    std::shared_ptr< std::wstring > HtmlSaveOptions::getExportFrameScriptsAndProperties() const
    {
        return m_ExportFrameScriptsAndProperties;
    }
    void HtmlSaveOptions::setExportFrameScriptsAndProperties( std::shared_ptr< std::wstring > value)
    {
        m_ExportFrameScriptsAndProperties = value;
    }
    std::shared_ptr< std::wstring > HtmlSaveOptions::getAttachedFilesDirectory() const
    {
        return m_AttachedFilesDirectory;
    }
    void HtmlSaveOptions::setAttachedFilesDirectory( std::shared_ptr< std::wstring > value)
    {
        m_AttachedFilesDirectory = value;
    }
    std::shared_ptr< std::wstring > HtmlSaveOptions::getAttachedFilesUrlPrefix() const
    {
        return m_AttachedFilesUrlPrefix;
    }
    void HtmlSaveOptions::setAttachedFilesUrlPrefix( std::shared_ptr< std::wstring > value)
    {
        m_AttachedFilesUrlPrefix = value;
    }
    std::shared_ptr< std::wstring > HtmlSaveOptions::getEncoding() const
    {
        return m_Encoding;
    }
    void HtmlSaveOptions::setEncoding( std::shared_ptr< std::wstring > value)
    {
        m_Encoding = value;
    }
    std::shared_ptr< bool > HtmlSaveOptions::getExportActiveWorksheetOnly() const
    {
        return m_ExportActiveWorksheetOnly;
    }
    void HtmlSaveOptions::setExportActiveWorksheetOnly( std::shared_ptr< bool > value)
    {
        m_ExportActiveWorksheetOnly = value;
    }
    std::shared_ptr< std::wstring > HtmlSaveOptions::getExportChartImageFormat() const
    {
        return m_ExportChartImageFormat;
    }
    void HtmlSaveOptions::setExportChartImageFormat( std::shared_ptr< std::wstring > value)
    {
        m_ExportChartImageFormat = value;
    }
    std::shared_ptr< bool > HtmlSaveOptions::getExportImagesAsBase64() const
    {
        return m_ExportImagesAsBase64;
    }
    void HtmlSaveOptions::setExportImagesAsBase64( std::shared_ptr< bool > value)
    {
        m_ExportImagesAsBase64 = value;
    }
    std::shared_ptr< std::wstring > HtmlSaveOptions::getHiddenColDisplayType() const
    {
        return m_HiddenColDisplayType;
    }
    void HtmlSaveOptions::setHiddenColDisplayType( std::shared_ptr< std::wstring > value)
    {
        m_HiddenColDisplayType = value;
    }
    std::shared_ptr< std::wstring > HtmlSaveOptions::getHiddenRowDisplayType() const
    {
        return m_HiddenRowDisplayType;
    }
    void HtmlSaveOptions::setHiddenRowDisplayType( std::shared_ptr< std::wstring > value)
    {
        m_HiddenRowDisplayType = value;
    }
    std::shared_ptr< std::wstring > HtmlSaveOptions::getHtmlCrossStringType() const
    {
        return m_HtmlCrossStringType;
    }
    void HtmlSaveOptions::setHtmlCrossStringType( std::shared_ptr< std::wstring > value)
    {
        m_HtmlCrossStringType = value;
    }
    std::shared_ptr< bool > HtmlSaveOptions::getIsExpImageToTempDir() const
    {
        return m_IsExpImageToTempDir;
    }
    void HtmlSaveOptions::setIsExpImageToTempDir( std::shared_ptr< bool > value)
    {
        m_IsExpImageToTempDir = value;
    }
    std::shared_ptr< std::wstring > HtmlSaveOptions::getPageTitle() const
    {
        return m_PageTitle;
    }
    void HtmlSaveOptions::setPageTitle( std::shared_ptr< std::wstring > value)
    {
        m_PageTitle = value;
    }
    std::shared_ptr< bool > HtmlSaveOptions::getParseHtmlTagInCell() const
    {
        return m_ParseHtmlTagInCell;
    }
    void HtmlSaveOptions::setParseHtmlTagInCell( std::shared_ptr< bool > value)
    {
        m_ParseHtmlTagInCell = value;
    }
    /// <summary>
    /// SpreadsheetML2003SaveOptions class implementation
    /// </summary>
    void SpreadsheetML2003SaveOptions::toJson(void* jsonIfc) const
    {
        SaveOptions::toJson(jsonIfc);
        ::nlohmann::json& json = *((::nlohmann::json*)jsonIfc);
        if (m_ExportColumnIndexOfCell) {
            json["ExportColumnIndexOfCell"] =*m_ExportColumnIndexOfCell;
        }
        if (m_IsIndentedFormatting) {
            json["IsIndentedFormatting"] =*m_IsIndentedFormatting;
        }
        if (m_LimitAsXls) {
            json["LimitAsXls"] =*m_LimitAsXls;
        }
    }
    void SpreadsheetML2003SaveOptions::fromJson(const void* jsonIfc)
    {
        SaveOptions::fromJson(jsonIfc);
        ::nlohmann::json& json = *((::nlohmann::json*)jsonIfc);
        if (json.contains("ExportColumnIndexOfCell") && !json["ExportColumnIndexOfCell"].is_null()) {
            m_ExportColumnIndexOfCell = std::make_shared< bool >( json["ExportColumnIndexOfCell"].get< bool >());
        }
        if (json.contains("IsIndentedFormatting") && !json["IsIndentedFormatting"].is_null()) {
            m_IsIndentedFormatting = std::make_shared< bool >( json["IsIndentedFormatting"].get< bool >());
        }
        if (json.contains("LimitAsXls") && !json["LimitAsXls"].is_null()) {
            m_LimitAsXls = std::make_shared< bool >( json["LimitAsXls"].get< bool >());
        }
    }
    std::shared_ptr< bool > SpreadsheetML2003SaveOptions::getExportColumnIndexOfCell() const
    {
        return m_ExportColumnIndexOfCell;
    }
    void SpreadsheetML2003SaveOptions::setExportColumnIndexOfCell( std::shared_ptr< bool > value)
    {
        m_ExportColumnIndexOfCell = value;
    }
    std::shared_ptr< bool > SpreadsheetML2003SaveOptions::getIsIndentedFormatting() const
    {
        return m_IsIndentedFormatting;
    }
    void SpreadsheetML2003SaveOptions::setIsIndentedFormatting( std::shared_ptr< bool > value)
    {
        m_IsIndentedFormatting = value;
    }
    std::shared_ptr< bool > SpreadsheetML2003SaveOptions::getLimitAsXls() const
    {
        return m_LimitAsXls;
    }
    void SpreadsheetML2003SaveOptions::setLimitAsXls( std::shared_ptr< bool > value)
    {
        m_LimitAsXls = value;
    }
    /// <summary>
    /// XlsbSaveOptions class implementation
    /// </summary>
    void XlsbSaveOptions::toJson(void* jsonIfc) const
    {
        SaveOptions::toJson(jsonIfc);
        ::nlohmann::json& json = *((::nlohmann::json*)jsonIfc);
    }
    void XlsbSaveOptions::fromJson(const void* jsonIfc)
    {
        SaveOptions::fromJson(jsonIfc);
        ::nlohmann::json& json = *((::nlohmann::json*)jsonIfc);
    }
    /// <summary>
    /// XlsSaveOptions class implementation
    /// </summary>
    void XlsSaveOptions::toJson(void* jsonIfc) const
    {
        SaveOptions::toJson(jsonIfc);
        ::nlohmann::json& json = *((::nlohmann::json*)jsonIfc);
    }
    void XlsSaveOptions::fromJson(const void* jsonIfc)
    {
        SaveOptions::fromJson(jsonIfc);
        ::nlohmann::json& json = *((::nlohmann::json*)jsonIfc);
    }
    /// <summary>
    /// XpsSaveOptions class implementation
    /// </summary>
    void XpsSaveOptions::toJson(void* jsonIfc) const
    {
        SaveOptions::toJson(jsonIfc);
        ::nlohmann::json& json = *((::nlohmann::json*)jsonIfc);
    }
    void XpsSaveOptions::fromJson(const void* jsonIfc)
    {
        SaveOptions::fromJson(jsonIfc);
        ::nlohmann::json& json = *((::nlohmann::json*)jsonIfc);
    }
    /// <summary>
    /// PdfSaveOptions class implementation
    /// </summary>
    void PdfSaveOptions::toJson(void* jsonIfc) const
    {
        SaveOptions::toJson(jsonIfc);
        ::nlohmann::json& json = *((::nlohmann::json*)jsonIfc);
        if (m_CalculateFormula) {
            json["CalculateFormula"] =*m_CalculateFormula;
        }
        if (m_CheckFontCompatibility) {
            json["CheckFontCompatibility"] =*m_CheckFontCompatibility;
        }
        if (m_OnePagePerSheet) {
            json["OnePagePerSheet"] =*m_OnePagePerSheet;
        }
        if (m_Compliance) {
            json["Compliance"] = convertUtf16(*m_Compliance);
        }
        if (m_DefaultFont) {
            json["DefaultFont"] = convertUtf16(*m_DefaultFont);
        }
        if (m_PrintingPageType) {
            json["PrintingPageType"] = convertUtf16(*m_PrintingPageType);
        }
        if (m_ImageType) {
            json["ImageType"] = convertUtf16(*m_ImageType);
        }
        if (m_DesiredPPI) {
            json["DesiredPPI"] =*m_DesiredPPI;
        }
        if (m_JpegQuality) {
            json["JpegQuality"] =*m_JpegQuality;
        }
        if (m_SecurityOptions) {
            m_SecurityOptions->toJson(&json["SecurityOptions"]);
        }
    }
    void PdfSaveOptions::fromJson(const void* jsonIfc)
    {
        SaveOptions::fromJson(jsonIfc);
        ::nlohmann::json& json = *((::nlohmann::json*)jsonIfc);
        if (json.contains("CalculateFormula") && !json["CalculateFormula"].is_null()) {
            m_CalculateFormula = std::make_shared< bool >( json["CalculateFormula"].get< bool >());
        }
        if (json.contains("CheckFontCompatibility") && !json["CheckFontCompatibility"].is_null()) {
            m_CheckFontCompatibility = std::make_shared< bool >( json["CheckFontCompatibility"].get< bool >());
        }
        if (json.contains("OnePagePerSheet") && !json["OnePagePerSheet"].is_null()) {
            m_OnePagePerSheet = std::make_shared< bool >( json["OnePagePerSheet"].get< bool >());
        }
        if (json.contains("Compliance") && !json["Compliance"].is_null()) {
            m_Compliance = std::make_shared< std::wstring >( convertUtf8( json["Compliance"].get< std::string >() ));
        }
        if (json.contains("DefaultFont") && !json["DefaultFont"].is_null()) {
            m_DefaultFont = std::make_shared< std::wstring >( convertUtf8( json["DefaultFont"].get< std::string >() ));
        }
        if (json.contains("PrintingPageType") && !json["PrintingPageType"].is_null()) {
            m_PrintingPageType = std::make_shared< std::wstring >( convertUtf8( json["PrintingPageType"].get< std::string >() ));
        }
        if (json.contains("ImageType") && !json["ImageType"].is_null()) {
            m_ImageType = std::make_shared< std::wstring >( convertUtf8( json["ImageType"].get< std::string >() ));
        }
        if (json.contains("DesiredPPI") && !json["DesiredPPI"].is_null()) {
            m_DesiredPPI = std::make_shared< int >( json["DesiredPPI"].get< int >());
        }
        if (json.contains("JpegQuality") && !json["JpegQuality"].is_null()) {
            m_JpegQuality = std::make_shared< int >( json["JpegQuality"].get< int >());
        }
        if (json.contains("SecurityOptions") && !json["SecurityOptions"].is_null()) {
            m_SecurityOptions = std::make_shared< aspose::cells::cloud::models::PdfSecurityOptions >();
            m_SecurityOptions->fromJson(&json["SecurityOptions"]);
        }
    }
    std::shared_ptr< bool > PdfSaveOptions::getCalculateFormula() const
    {
        return m_CalculateFormula;
    }
    void PdfSaveOptions::setCalculateFormula( std::shared_ptr< bool > value)
    {
        m_CalculateFormula = value;
    }
    std::shared_ptr< bool > PdfSaveOptions::getCheckFontCompatibility() const
    {
        return m_CheckFontCompatibility;
    }
    void PdfSaveOptions::setCheckFontCompatibility( std::shared_ptr< bool > value)
    {
        m_CheckFontCompatibility = value;
    }
    std::shared_ptr< bool > PdfSaveOptions::getOnePagePerSheet() const
    {
        return m_OnePagePerSheet;
    }
    void PdfSaveOptions::setOnePagePerSheet( std::shared_ptr< bool > value)
    {
        m_OnePagePerSheet = value;
    }
    std::shared_ptr< std::wstring > PdfSaveOptions::getCompliance() const
    {
        return m_Compliance;
    }
    void PdfSaveOptions::setCompliance( std::shared_ptr< std::wstring > value)
    {
        m_Compliance = value;
    }
    std::shared_ptr< std::wstring > PdfSaveOptions::getDefaultFont() const
    {
        return m_DefaultFont;
    }
    void PdfSaveOptions::setDefaultFont( std::shared_ptr< std::wstring > value)
    {
        m_DefaultFont = value;
    }
    std::shared_ptr< std::wstring > PdfSaveOptions::getPrintingPageType() const
    {
        return m_PrintingPageType;
    }
    void PdfSaveOptions::setPrintingPageType( std::shared_ptr< std::wstring > value)
    {
        m_PrintingPageType = value;
    }
    std::shared_ptr< std::wstring > PdfSaveOptions::getImageType() const
    {
        return m_ImageType;
    }
    void PdfSaveOptions::setImageType( std::shared_ptr< std::wstring > value)
    {
        m_ImageType = value;
    }
    std::shared_ptr< int > PdfSaveOptions::getDesiredPPI() const
    {
        return m_DesiredPPI;
    }
    void PdfSaveOptions::setDesiredPPI( std::shared_ptr< int > value)
    {
        m_DesiredPPI = value;
    }
    std::shared_ptr< int > PdfSaveOptions::getJpegQuality() const
    {
        return m_JpegQuality;
    }
    void PdfSaveOptions::setJpegQuality( std::shared_ptr< int > value)
    {
        m_JpegQuality = value;
    }
    std::shared_ptr< aspose::cells::cloud::models::PdfSecurityOptions > PdfSaveOptions::getSecurityOptions() const
    {
        return m_SecurityOptions;
    }
    void PdfSaveOptions::setSecurityOptions( std::shared_ptr< aspose::cells::cloud::models::PdfSecurityOptions > value)
    {
        m_SecurityOptions = value;
    }
    /// <summary>
    /// PdfSecurityOptions class implementation
    /// </summary>
    void PdfSecurityOptions::toJson(void* jsonIfc) const
    {
        ::nlohmann::json& json = *((::nlohmann::json*)jsonIfc);
        if (m_AnnotationsPermission) {
            json["AnnotationsPermission"] =*m_AnnotationsPermission;
        }
        if (m_AssembleDocumentPermission) {
            json["AssembleDocumentPermission"] =*m_AssembleDocumentPermission;
        }
        if (m_ExtractContentPermission) {
            json["ExtractContentPermission"] =*m_ExtractContentPermission;
        }
        if (m_ExtractContentPermissionObsolete) {
            json["ExtractContentPermissionObsolete"] =*m_ExtractContentPermissionObsolete;
        }
        if (m_FillFormsPermission) {
            json["FillFormsPermission"] =*m_FillFormsPermission;
        }
        if (m_FullQualityPrintPermission) {
            json["FullQualityPrintPermission"] =*m_FullQualityPrintPermission;
        }
        if (m_ModifyDocumentPermission) {
            json["ModifyDocumentPermission"] =*m_ModifyDocumentPermission;
        }
        if (m_OwnerPassword) {
            json["OwnerPassword"] = convertUtf16(*m_OwnerPassword);
        }
        if (m_PrintPermission) {
            json["PrintPermission"] =*m_PrintPermission;
        }
        if (m_UserPassword) {
            json["UserPassword"] = convertUtf16(*m_UserPassword);
        }
    }
    void PdfSecurityOptions::fromJson(const void* jsonIfc)
    {
        ::nlohmann::json& json = *((::nlohmann::json*)jsonIfc);
        if (json.contains("AnnotationsPermission") && !json["AnnotationsPermission"].is_null()) {
            m_AnnotationsPermission = std::make_shared< bool >( json["AnnotationsPermission"].get< bool >());
        }
        if (json.contains("AssembleDocumentPermission") && !json["AssembleDocumentPermission"].is_null()) {
            m_AssembleDocumentPermission = std::make_shared< bool >( json["AssembleDocumentPermission"].get< bool >());
        }
        if (json.contains("ExtractContentPermission") && !json["ExtractContentPermission"].is_null()) {
            m_ExtractContentPermission = std::make_shared< bool >( json["ExtractContentPermission"].get< bool >());
        }
        if (json.contains("ExtractContentPermissionObsolete") && !json["ExtractContentPermissionObsolete"].is_null()) {
            m_ExtractContentPermissionObsolete = std::make_shared< bool >( json["ExtractContentPermissionObsolete"].get< bool >());
        }
        if (json.contains("FillFormsPermission") && !json["FillFormsPermission"].is_null()) {
            m_FillFormsPermission = std::make_shared< bool >( json["FillFormsPermission"].get< bool >());
        }
        if (json.contains("FullQualityPrintPermission") && !json["FullQualityPrintPermission"].is_null()) {
            m_FullQualityPrintPermission = std::make_shared< bool >( json["FullQualityPrintPermission"].get< bool >());
        }
        if (json.contains("ModifyDocumentPermission") && !json["ModifyDocumentPermission"].is_null()) {
            m_ModifyDocumentPermission = std::make_shared< bool >( json["ModifyDocumentPermission"].get< bool >());
        }
        if (json.contains("OwnerPassword") && !json["OwnerPassword"].is_null()) {
            m_OwnerPassword = std::make_shared< std::wstring >( convertUtf8( json["OwnerPassword"].get< std::string >() ));
        }
        if (json.contains("PrintPermission") && !json["PrintPermission"].is_null()) {
            m_PrintPermission = std::make_shared< bool >( json["PrintPermission"].get< bool >());
        }
        if (json.contains("UserPassword") && !json["UserPassword"].is_null()) {
            m_UserPassword = std::make_shared< std::wstring >( convertUtf8( json["UserPassword"].get< std::string >() ));
        }
    }
    std::shared_ptr< bool > PdfSecurityOptions::getAnnotationsPermission() const
    {
        return m_AnnotationsPermission;
    }
    void PdfSecurityOptions::setAnnotationsPermission( std::shared_ptr< bool > value)
    {
        m_AnnotationsPermission = value;
    }
    std::shared_ptr< bool > PdfSecurityOptions::getAssembleDocumentPermission() const
    {
        return m_AssembleDocumentPermission;
    }
    void PdfSecurityOptions::setAssembleDocumentPermission( std::shared_ptr< bool > value)
    {
        m_AssembleDocumentPermission = value;
    }
    std::shared_ptr< bool > PdfSecurityOptions::getExtractContentPermission() const
    {
        return m_ExtractContentPermission;
    }
    void PdfSecurityOptions::setExtractContentPermission( std::shared_ptr< bool > value)
    {
        m_ExtractContentPermission = value;
    }
    std::shared_ptr< bool > PdfSecurityOptions::getExtractContentPermissionObsolete() const
    {
        return m_ExtractContentPermissionObsolete;
    }
    void PdfSecurityOptions::setExtractContentPermissionObsolete( std::shared_ptr< bool > value)
    {
        m_ExtractContentPermissionObsolete = value;
    }
    std::shared_ptr< bool > PdfSecurityOptions::getFillFormsPermission() const
    {
        return m_FillFormsPermission;
    }
    void PdfSecurityOptions::setFillFormsPermission( std::shared_ptr< bool > value)
    {
        m_FillFormsPermission = value;
    }
    std::shared_ptr< bool > PdfSecurityOptions::getFullQualityPrintPermission() const
    {
        return m_FullQualityPrintPermission;
    }
    void PdfSecurityOptions::setFullQualityPrintPermission( std::shared_ptr< bool > value)
    {
        m_FullQualityPrintPermission = value;
    }
    std::shared_ptr< bool > PdfSecurityOptions::getModifyDocumentPermission() const
    {
        return m_ModifyDocumentPermission;
    }
    void PdfSecurityOptions::setModifyDocumentPermission( std::shared_ptr< bool > value)
    {
        m_ModifyDocumentPermission = value;
    }
    std::shared_ptr< std::wstring > PdfSecurityOptions::getOwnerPassword() const
    {
        return m_OwnerPassword;
    }
    void PdfSecurityOptions::setOwnerPassword( std::shared_ptr< std::wstring > value)
    {
        m_OwnerPassword = value;
    }
    std::shared_ptr< bool > PdfSecurityOptions::getPrintPermission() const
    {
        return m_PrintPermission;
    }
    void PdfSecurityOptions::setPrintPermission( std::shared_ptr< bool > value)
    {
        m_PrintPermission = value;
    }
    std::shared_ptr< std::wstring > PdfSecurityOptions::getUserPassword() const
    {
        return m_UserPassword;
    }
    void PdfSecurityOptions::setUserPassword( std::shared_ptr< std::wstring > value)
    {
        m_UserPassword = value;
    }

    /// <summary>
    /// SaveResult class implementation
    /// </summary>
    void SaveResult::toJson(void* jsonIfc) const
    {
        ::nlohmann::json& json = *((::nlohmann::json*)jsonIfc);
        if (m_Documents) {
            json["Documents"] = ::nlohmann::json::array();
            for (auto& element : *m_Documents) {
                element->toJson(&json["Documents"].emplace_back());
            }
        }
    }
    void SaveResult::fromJson(const void* jsonIfc)
    {
        ::nlohmann::json& json = *((::nlohmann::json*)jsonIfc);
        if (json.contains("Documents") && !json["Documents"].is_null()) {
            m_Documents = std::make_shared< std::vector< std::shared_ptr<aspose::cells::cloud::models::CellsCloudFileInfo>> >();
            for (auto& element : *m_Documents) {
                m_Documents->emplace_back( std::shared_ptr<aspose::cells::cloud::models::CellsCloudFileInfo>())->fromJson(&element);
            }
        }
    }
    std::shared_ptr< std::vector< std::shared_ptr<aspose::cells::cloud::models::CellsCloudFileInfo>> > SaveResult::getDocuments() const
    {
        return m_Documents;
    }
    void SaveResult::setDocuments( std::shared_ptr< std::vector< std::shared_ptr<aspose::cells::cloud::models::CellsCloudFileInfo>> > value)
    {
        m_Documents = value;
    }
    /// <summary>
    /// SaveResponse class implementation
    /// </summary>
    void SaveResponse::toJson(void* jsonIfc) const
    {
        CellsCloudResponse::toJson(jsonIfc);
        ::nlohmann::json& json = *((::nlohmann::json*)jsonIfc);
        if (m_SaveResult) {
            m_SaveResult->toJson(&json["SaveResult"]);
        }
    }
    void SaveResponse::fromJson(const void* jsonIfc)
    {
        CellsCloudResponse::fromJson(jsonIfc);
        ::nlohmann::json& json = *((::nlohmann::json*)jsonIfc);
        if (json.contains("SaveResult") && !json["SaveResult"].is_null()) {
            m_SaveResult = std::make_shared< aspose::cells::cloud::models::SaveResult >();
            m_SaveResult->fromJson(&json["SaveResult"]);
        }
    }
    std::shared_ptr< aspose::cells::cloud::models::SaveResult > SaveResponse::getSaveResult() const
    {
        return m_SaveResult;
    }
    void SaveResponse::setSaveResult( std::shared_ptr< aspose::cells::cloud::models::SaveResult > value)
    {
        m_SaveResult = value;
    }
    /// <summary>
    /// CellsCloudResponse class implementation
    /// </summary>
    void CellsCloudResponse::toJson(void* jsonIfc) const
    {
        ::nlohmann::json& json = *((::nlohmann::json*)jsonIfc);
        if (m_Status) {
            json["Status"] = convertUtf16(*m_Status);
        }
        if (m_Code) {
            json["Code"] =*m_Code;
        }
    }
    void CellsCloudResponse::fromJson(const void* jsonIfc)
    {
        ::nlohmann::json& json = *((::nlohmann::json*)jsonIfc);
        if (json.contains("Status") && !json["Status"].is_null()) {
            m_Status = std::make_shared< std::wstring >( convertUtf8( json["Status"].get< std::string >() ));
        }
        if (json.contains("Code") && !json["Code"].is_null()) {
            m_Code = std::make_shared< int >( json["Code"].get< int >());
        }
    }
    std::shared_ptr< std::wstring > CellsCloudResponse::getStatus() const
    {
        return m_Status;
    }
    void CellsCloudResponse::setStatus( std::shared_ptr< std::wstring > value)
    {
        m_Status = value;
    }
    std::shared_ptr< int > CellsCloudResponse::getCode() const
    {
        return m_Code;
    }
    void CellsCloudResponse::setCode( std::shared_ptr< int > value)
    {
        m_Code = value;
    }
    /// <summary>
    /// CellsCloudFileInfo class implementation
    /// </summary>
    void CellsCloudFileInfo::toJson(void* jsonIfc) const
    {
        ::nlohmann::json& json = *((::nlohmann::json*)jsonIfc);
        if (m_Name) {
            json["Name"] = convertUtf16(*m_Name);
        }
        if (m_Size) {
            json["Size"] =*m_Size;
        }
        if (m_Folder) {
            json["Folder"] = convertUtf16(*m_Folder);
        }
        if (m_Storage) {
            json["Storage"] = convertUtf16(*m_Storage);
        }
    }
    void CellsCloudFileInfo::fromJson(const void* jsonIfc)
    {
        ::nlohmann::json& json = *((::nlohmann::json*)jsonIfc);
        if (json.contains("Name") && !json["Name"].is_null()) {
            m_Name = std::make_shared< std::wstring >( convertUtf8( json["Name"].get< std::string >() ));
        }
        if (json.contains("Size") && !json["Size"].is_null()) {
            m_Size = std::make_shared< int >( json["Size"].get< int >());
        }
        if (json.contains("Folder") && !json["Folder"].is_null()) {
            m_Folder = std::make_shared< std::wstring >( convertUtf8( json["Folder"].get< std::string >() ));
        }
        if (json.contains("Storage") && !json["Storage"].is_null()) {
            m_Storage = std::make_shared< std::wstring >( convertUtf8( json["Storage"].get< std::string >() ));
        }
    }
    std::shared_ptr< std::wstring > CellsCloudFileInfo::getName() const
    {
        return m_Name;
    }
    void CellsCloudFileInfo::setName( std::shared_ptr< std::wstring > value)
    {
        m_Name = value;
    }
    std::shared_ptr< int > CellsCloudFileInfo::getSize() const
    {
        return m_Size;
    }
    void CellsCloudFileInfo::setSize( std::shared_ptr< int > value)
    {
        m_Size = value;
    }
    std::shared_ptr< std::wstring > CellsCloudFileInfo::getFolder() const
    {
        return m_Folder;
    }
    void CellsCloudFileInfo::setFolder( std::shared_ptr< std::wstring > value)
    {
        m_Folder = value;
    }
    std::shared_ptr< std::wstring > CellsCloudFileInfo::getStorage() const
    {
        return m_Storage;
    }
    void CellsCloudFileInfo::setStorage( std::shared_ptr< std::wstring > value)
    {
        m_Storage = value;
    }
    /// <summary>
    /// SplitResult class implementation
    /// </summary>
    void SplitResult::toJson(void* jsonIfc) const
    {
        ::nlohmann::json& json = *((::nlohmann::json*)jsonIfc);
        if (m_Documents) {
            json["Documents"] = ::nlohmann::json::array();
            for (auto& element : *m_Documents) {
                element->toJson(&json["Documents"].emplace_back());
            }
        }
    }
    void SplitResult::fromJson(const void* jsonIfc)
    {
        ::nlohmann::json& json = *((::nlohmann::json*)jsonIfc);
        if (json.contains("Documents") && !json["Documents"].is_null()) {
            m_Documents = std::make_shared< std::vector< std::shared_ptr<aspose::cells::cloud::models::CellsCloudFileInfo>> >();
            for (auto& element : *m_Documents) {
                m_Documents->emplace_back( std::shared_ptr<aspose::cells::cloud::models::CellsCloudFileInfo>())->fromJson(&element);
            }
        }
    }
    std::shared_ptr< std::vector< std::shared_ptr<aspose::cells::cloud::models::CellsCloudFileInfo>> > SplitResult::getDocuments() const
    {
        return m_Documents;
    }
    void SplitResult::setDocuments( std::shared_ptr< std::vector< std::shared_ptr<aspose::cells::cloud::models::CellsCloudFileInfo>> > value)
    {
        m_Documents = value;
    }
    /// <summary>
    /// SplitResultResponse class implementation
    /// </summary>
    void SplitResultResponse::toJson(void* jsonIfc) const
    {
        CellsCloudResponse::toJson(jsonIfc);
        ::nlohmann::json& json = *((::nlohmann::json*)jsonIfc);
        if (m_Result) {
            m_Result->toJson(&json["Result"]);
        }
    }
    void SplitResultResponse::fromJson(const void* jsonIfc)
    {
        CellsCloudResponse::fromJson(jsonIfc);
        ::nlohmann::json& json = *((::nlohmann::json*)jsonIfc);
        if (json.contains("Result") && !json["Result"].is_null()) {
            m_Result = std::make_shared< aspose::cells::cloud::models::SplitResult >();
            m_Result->fromJson(&json["Result"]);
        }
    }
    std::shared_ptr< aspose::cells::cloud::models::SplitResult > SplitResultResponse::getResult() const
    {
        return m_Result;
    }
    void SplitResultResponse::setResult( std::shared_ptr< aspose::cells::cloud::models::SplitResult > value)
    {
        m_Result = value;
    }
    /// <summary>
    /// SplitResultDocument class implementation
    /// </summary>
    void SplitResultDocument::toJson(void* jsonIfc) const
    {
        Link::toJson(jsonIfc);
        ::nlohmann::json& json = *((::nlohmann::json*)jsonIfc);
        if (m_Id) {
            json["Id"] =*m_Id;
        }
    }
    void SplitResultDocument::fromJson(const void* jsonIfc)
    {
        Link::fromJson(jsonIfc);
        ::nlohmann::json& json = *((::nlohmann::json*)jsonIfc);
        if (json.contains("Id") && !json["Id"].is_null()) {
            m_Id = std::make_shared< int >( json["Id"].get< int >());
        }
    }
    std::shared_ptr< int > SplitResultDocument::getId() const
    {
        return m_Id;
    }
    void SplitResultDocument::setId( std::shared_ptr< int > value)
    {
        m_Id = value;
    }   
// <summary>
    /// BatchConvertRequest class implementation
    /// </summary>
    void BatchConvertRequest::toJson(void* jsonIfc) const
    {
        ::nlohmann::json& json = *((::nlohmann::json*)jsonIfc);
        if (m_SourceFolder) {
            json["SourceFolder"] = convertUtf16(*m_SourceFolder);
        }
        if (m_SourceStorage) {
            json["SourceStorage"] = convertUtf16(*m_SourceStorage);
        }
        if (m_MatchCondition) {
            m_MatchCondition->toJson(&json["MatchCondition"]);
        }
        if (m_Format) {
            json["Format"] = convertUtf16(*m_Format);
        }
        if (m_OutFolder) {
            json["OutFolder"] = convertUtf16(*m_OutFolder);
        }
        if (m_OutStorage) {
            json["OutStorage"] = convertUtf16(*m_OutStorage);
        }
        if (m_SaveOptions) {
            m_SaveOptions->toJson(&json["SaveOptions"]);
        }
    }
    void BatchConvertRequest::fromJson(const void* jsonIfc)
    {
        ::nlohmann::json& json = *((::nlohmann::json*)jsonIfc);
        if (json.contains("SourceFolder") && !json["SourceFolder"].is_null()) {
            m_SourceFolder = std::make_shared< std::wstring >( convertUtf8( json["SourceFolder"].get< std::string >() ));
        }
        if (json.contains("SourceStorage") && !json["SourceStorage"].is_null()) {
            m_SourceStorage = std::make_shared< std::wstring >( convertUtf8( json["SourceStorage"].get< std::string >() ));
        }
        if (json.contains("MatchCondition") && !json["MatchCondition"].is_null()) {
            m_MatchCondition = std::make_shared< aspose::cells::cloud::models::MatchConditionRequest >();
            m_MatchCondition->fromJson(&json["MatchCondition"]);
        }
        if (json.contains("Format") && !json["Format"].is_null()) {
            m_Format = std::make_shared< std::wstring >( convertUtf8( json["Format"].get< std::string >() ));
        }
        if (json.contains("OutFolder") && !json["OutFolder"].is_null()) {
            m_OutFolder = std::make_shared< std::wstring >( convertUtf8( json["OutFolder"].get< std::string >() ));
        }
        if (json.contains("OutStorage") && !json["OutStorage"].is_null()) {
            m_OutStorage = std::make_shared< std::wstring >( convertUtf8( json["OutStorage"].get< std::string >() ));
        }
        if (json.contains("SaveOptions") && !json["SaveOptions"].is_null()) {
            m_SaveOptions = std::make_shared< aspose::cells::cloud::models::SaveOptions >();
            m_SaveOptions->fromJson(&json["SaveOptions"]);
        }
    }
    std::shared_ptr< std::wstring > BatchConvertRequest::getSourceFolder() const
    {
        return m_SourceFolder;
    }
    void BatchConvertRequest::setSourceFolder( std::shared_ptr< std::wstring > value)
    {
        m_SourceFolder = value;
    }
    std::shared_ptr< std::wstring > BatchConvertRequest::getSourceStorage() const
    {
        return m_SourceStorage;
    }
    void BatchConvertRequest::setSourceStorage( std::shared_ptr< std::wstring > value)
    {
        m_SourceStorage = value;
    }
    std::shared_ptr< aspose::cells::cloud::models::MatchConditionRequest > BatchConvertRequest::getMatchCondition() const
    {
        return m_MatchCondition;
    }
    void BatchConvertRequest::setMatchCondition( std::shared_ptr< aspose::cells::cloud::models::MatchConditionRequest > value)
    {
        m_MatchCondition = value;
    }
    std::shared_ptr< std::wstring > BatchConvertRequest::getFormat() const
    {
        return m_Format;
    }
    void BatchConvertRequest::setFormat( std::shared_ptr< std::wstring > value)
    {
        m_Format = value;
    }
    std::shared_ptr< std::wstring > BatchConvertRequest::getOutFolder() const
    {
        return m_OutFolder;
    }
    void BatchConvertRequest::setOutFolder( std::shared_ptr< std::wstring > value)
    {
        m_OutFolder = value;
    }
    std::shared_ptr< std::wstring > BatchConvertRequest::getOutStorage() const
    {
        return m_OutStorage;
    }
    void BatchConvertRequest::setOutStorage( std::shared_ptr< std::wstring > value)
    {
        m_OutStorage = value;
    }
    std::shared_ptr< aspose::cells::cloud::models::SaveOptions > BatchConvertRequest::getSaveOptions() const
    {
        return m_SaveOptions;
    }
    void BatchConvertRequest::setSaveOptions( std::shared_ptr< aspose::cells::cloud::models::SaveOptions > value)
    {
        m_SaveOptions = value;
    }        
    /// <summary>
    /// MatchConditionRequest class implementation
    /// </summary>
    void MatchConditionRequest::toJson(void* jsonIfc) const
    {
        ::nlohmann::json& json = *((::nlohmann::json*)jsonIfc);
        if (m_RegexPattern) {
            json["RegexPattern"] = convertUtf16(*m_RegexPattern);
        }
        if (m_FullMatchConditions) {
            json["FullMatchConditions"] = ::nlohmann::json::array();
            for (auto& element : *m_FullMatchConditions) {
                json["FullMatchConditions"].push_back(convertUtf16(*element));
            }
        }
    }
    void MatchConditionRequest::fromJson(const void* jsonIfc)
    {
        ::nlohmann::json& json = *((::nlohmann::json*)jsonIfc);
        if (json.contains("RegexPattern") && !json["RegexPattern"].is_null()) {
            m_RegexPattern = std::make_shared< std::wstring >( convertUtf8( json["RegexPattern"].get< std::string >() ));
        }
        if (json.contains("FullMatchConditions") && !json["FullMatchConditions"].is_null()) {
            m_FullMatchConditions = std::make_shared< std::vector< std::shared_ptr<std::wstring>> >();
            for (auto& element : json["FullMatchConditions"]) {
                m_FullMatchConditions->push_back(std::make_shared< std::wstring >(convertUtf8( element.get< std::string >() )));
            }
        }
    }
    std::shared_ptr< std::wstring > MatchConditionRequest::getRegexPattern() const
    {
        return m_RegexPattern;
    }
    void MatchConditionRequest::setRegexPattern( std::shared_ptr< std::wstring > value)
    {
        m_RegexPattern = value;
    }
    std::shared_ptr< std::vector< std::shared_ptr<std::wstring>> > MatchConditionRequest::getFullMatchConditions() const
    {
        return m_FullMatchConditions;
    }
    void MatchConditionRequest::setFullMatchConditions( std::shared_ptr< std::vector< std::shared_ptr<std::wstring>> > value)
    {
        m_FullMatchConditions = value;
    }     
}
