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
        if (json.contains("Password") && !json["FileName"].is_null()) {
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

    

}
