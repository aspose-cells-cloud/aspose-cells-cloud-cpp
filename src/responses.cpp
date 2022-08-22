/** --------------------------------------------------------------------------------------------------------------------
* <copyright company="Aspose" file="responses.cpp">
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
#include <sstream>
#include <unordered_map>
#include <vector>
#include <string_view>
#include <charconv>
#include "aspose_cells_cloud.h"

// USE THIRD PARTY LIBS ONLY IN CPP FILES!!!
#include "../thirdparty/json.hpp"
#include "../thirdparty/utf8.h"

namespace aspose::cells::cloud::responses {
    void parseMultipart(const std::string_view& data, std::vector<std::string_view>& result) {
        auto boundaryIndex = data.find("\r\n");
        if (boundaryIndex == std::string_view::npos)
            throw ApiException(400, L"Failed to parse multipart data.");

        auto boundary = data.substr(0, boundaryIndex);
        while (true) {
            auto lastBoundaryIndex = boundaryIndex;
            boundaryIndex = data.find(boundary, boundaryIndex + 2);
            if (boundaryIndex == std::string_view::npos)
                break;

            auto part = data.substr(lastBoundaryIndex + 2, boundaryIndex - lastBoundaryIndex - 4);
            result.push_back(part);
            boundaryIndex = boundaryIndex + boundary.size();
        }
    }

    void parseMultipart(const std::string_view& data, std::unordered_map<std::string, std::string_view>& result) {
        std::vector<std::string_view> parts;
        parseMultipart(data, parts);
        for (auto& part : parts) {
            auto bodyIndex = part.find("\r\n\r\n");
            if (bodyIndex == std::string_view::npos)
                throw ApiException(400, L"Failed to parse multipart data.");

            auto headersData = part.substr(0, bodyIndex + 2);
            auto bodyData = part.substr(bodyIndex + 4);

            size_t headerIndex = 0;
            while (true) {
                auto headerLastIndex = headerIndex;
                headerIndex = headersData.find("\r\n", headerIndex);
                if (headerIndex == std::string_view::npos)
                    throw ApiException(400, L"Failed to parse multipart data.");

                auto header = headersData.substr(headerLastIndex, headerIndex - headerLastIndex);
                auto headerDelimilter = header.find(":");
                if (headerDelimilter == std::string_view::npos)
                    throw ApiException(400, L"Failed to parse multipart data.");

                auto headerName = header.substr(0, headerDelimilter);
                if (headerName == "Content-Disposition") {
                    auto headerValue = header.substr(headerDelimilter + 1);
                    auto partNameIndex = headerValue.find("name=");
                    if (partNameIndex == std::string_view::npos)
                        throw ApiException(400, L"Failed to parse multipart data.");

                    auto partName = headerValue.substr(partNameIndex + 5, headerValue.find(";", partNameIndex + 5));
                    result.emplace(partName, bodyData);
                    break;
                }

                headerIndex = headerIndex + 2;
            }
        }
    }

    void ResponseModelBase::setStatusCode(int statusCode)
    {
        m_StatusCode = statusCode;
    }

    int ResponseModelBase::getStatusCode() const
    {
        return m_StatusCode;
    }

    void ResponseModelBase::setErrorData(const std::string_view& errorData)
    {
        m_ErrorMessage.clear();

        // Try to parse error from json
        if (errorData.size() > 0 && errorData.find('{') == 0) {
            auto json = ::nlohmann::json::parse(errorData);
            if (json.contains("Error") && json["Error"].contains("Message")) {
                if (json["Error"].contains("Code")) {
                    std::string codeStr = json["Error"]["Code"].get<std::string>();
                    ::utf8::utf8to16(codeStr.begin(), codeStr.end(), back_inserter(m_ErrorMessage));
                    m_ErrorMessage.append(L" - ");
                }

                std::string messageStr = json["Error"]["Message"].get<std::string>();
                ::utf8::utf8to16(messageStr.begin(), messageStr.end(), back_inserter(m_ErrorMessage));
                return;
            }
        }

        // Else use whole error data
        ::utf8::utf8to16(errorData.begin(), errorData.end(), back_inserter(m_ErrorMessage));
    }

    const std::wstring& ResponseModelBase::getErrorMessage() const
    {
        return m_ErrorMessage;
    }


/////////////////////////////////

    /*
     * CopyFile request implementation
     */

    void CopyFileResponse::deserialize(const std::string_view& response)
    {
    }

    /*
     * CopyFolder request implementation
     */

    void CopyFolderResponse::deserialize(const std::string_view& response)
    {
    }

    /*
     * CreateFolder request implementation
     */

    void CreateFolderResponse::deserialize(const std::string_view& response)
    {
    }

    /*
     * DeleteFile request implementation
     */

    void DeleteFileResponse::deserialize(const std::string_view& response)
    {
    }

    /*
     * DeleteFolder request implementation
     */

    void DeleteFolderResponse::deserialize(const std::string_view& response)
    {
    }

    /*
     * DownloadFile request implementation
     */
    std::shared_ptr< std::istream > DownloadFileResponse::getResult() const
    {
        return m_Result;
    }

    void DownloadFileResponse::deserialize(const std::string_view& response)
    {
        m_Result = std::shared_ptr< std::istream >(new std::istringstream(std::string(response), std::ios_base::in));
    }

    /*
     * GetFilesList request implementation
     */
    std::shared_ptr< aspose::cells::cloud::models::FilesList > GetFilesListResponse::getResult() const
    {
        return m_Result;
    }

    void GetFilesListResponse::deserialize(const std::string_view& response)
    {
        auto json = ::nlohmann::json::parse(response);
        m_Result = std::make_shared< aspose::cells::cloud::models::FilesList >();
        m_Result->fromJson(&json);
    }

    /*
     * GetPublicKey request implementation
     */
    std::shared_ptr< aspose::cells::cloud::models::PublicKeyResponse > GetPublicKeyResponse::getResult() const
    {
        return m_Result;
    }

    void GetPublicKeyResponse::deserialize(const std::string_view& response)
    {
        auto json = ::nlohmann::json::parse(response);
        m_Result = std::make_shared< aspose::cells::cloud::models::PublicKeyResponse >();
        m_Result->fromJson(&json);
    }

    /*
     * MoveFile request implementation
     */

    void MoveFileResponse::deserialize(const std::string_view& response)
    {
    }

    /*
     * MoveFolder request implementation
     */

    void MoveFolderResponse::deserialize(const std::string_view& response)
    {
    }


    /*
     * UploadFile request implementation
     */
    std::shared_ptr< aspose::cells::cloud::models::FilesUploadResult > UploadFileResponse::getResult() const
    {
        return m_Result;
    }

    void UploadFileResponse::deserialize(const std::string_view& response)
    {
        auto json = ::nlohmann::json::parse(response);
        m_Result = std::make_shared< aspose::cells::cloud::models::FilesUploadResult >();
        m_Result->fromJson(&json);
    }
/////////////////////////////////////
    /*
     * Convert Response implementation
     */
    std::shared_ptr< std::istream > ConvertResponse::getResult() const
    {
        return m_Result;
    }

    void ConvertResponse::deserialize(const std::string_view& response)
    {
        m_Result = std::shared_ptr< std::istream >(new std::istringstream(std::string(response), std::ios_base::in));
    }

    /*
     * GetWorkbook Response implementation
     */
    std::shared_ptr< std::istream  > GetWorkbookResponse::getResult() const
    {
        return m_Result;
    }

    void GetWorkbookResponse::deserialize(const std::string_view& response)
    {
        m_Result = std::shared_ptr< std::istream >(new std::istringstream(std::string(response), std::ios_base::in));
    }

    /*
     * Protect Workbook  Response implementation
     */
    std::shared_ptr< aspose::cells::cloud::models::FilesResult  > ProtectWorkbookResponse::getResult() const
    {
        return m_Result;
    }

    void ProtectWorkbookResponse::deserialize(const std::string_view& response)
    {
        auto json = ::nlohmann::json::parse(response);
        m_Result = std::make_shared< aspose::cells::cloud::models::FilesResult >();
        m_Result->fromJson(&json);
    }
    /*
     * Unlock Workbook  Response implementation
     */
    std::shared_ptr< aspose::cells::cloud::models::FilesResult  > UnlockWorkbookResponse::getResult() const
    {
        return m_Result;
    }

    void UnlockWorkbookResponse::deserialize(const std::string_view& response)
    {
        auto json = ::nlohmann::json::parse(response);
        m_Result = std::make_shared< aspose::cells::cloud::models::FilesResult >();
        m_Result->fromJson(&json);
    }

    /*
     * Protect online Workbook  Response implementation
     */
    std::shared_ptr< aspose::cells::cloud::models::CellsResponse  > EncryptionWorkbookResponse::getResult() const
    {
        return m_Result;
    }

    void EncryptionWorkbookResponse::deserialize(const std::string_view& response)
    {
        auto json = ::nlohmann::json::parse(response);
        m_Result = std::make_shared< aspose::cells::cloud::models::CellsResponse >();
        m_Result->fromJson(&json);
    }    
    /*
     * PostDocumentSaveAsResponse implementation
     */

    std::shared_ptr< aspose::cells::cloud::models::SaveResponse > PostDocumentSaveAsResponse::getResult() const
    {
        return m_Result;
    }

    void PostDocumentSaveAsResponse::deserialize(const std::string_view& response)
    {
        auto json = ::nlohmann::json::parse(response);
        m_Result = std::make_shared< aspose::cells::cloud::models::SaveResponse >();
        m_Result->fromJson(&json);
    }
    /*
     * PostWorkbookSplitResponse implementation
     */

    std::shared_ptr< aspose::cells::cloud::models::SplitResultResponse > PostWorkbookSplitResponse::getResult() const
    {
        return m_Result;
    }

    void PostWorkbookSplitResponse::deserialize(const std::string_view& response)
    {
        auto json = ::nlohmann::json::parse(response);
        m_Result = std::make_shared< aspose::cells::cloud::models::SplitResultResponse >();
        m_Result->fromJson(&json);
    }
    /*
     * PostSplitResponse implementation
     */

    std::shared_ptr< aspose::cells::cloud::models::FilesResult > PostSplitResponse::getResult() const
    {
        return m_Result;
    }

    void PostSplitResponse::deserialize(const std::string_view& response)
    {
        auto json = ::nlohmann::json::parse(response);
        m_Result = std::make_shared< aspose::cells::cloud::models::FilesResult >();
        m_Result->fromJson(&json);
    }    

    /*
     * PostMergeResponse implementation
     */

    std::shared_ptr< aspose::cells::cloud::models::FileInfo > PostMergeResponse::getResult() const
    {
        return m_Result;
    }

    void PostMergeResponse::deserialize(const std::string_view& response)
    {
        auto json = ::nlohmann::json::parse(response);
        m_Result = std::make_shared< aspose::cells::cloud::models::FileInfo >();
        m_Result->fromJson(&json);
    }
    /*
     * PostWorkbooksMergeResponse implementation
     */

    std::shared_ptr< aspose::cells::cloud::models::WorkbookResponse > PostWorkbooksMergeResponse::getResult() const
    {
        return m_Result;
    }

    void PostWorkbooksMergeResponse::deserialize(const std::string_view& response)
    {
        auto json = ::nlohmann::json::parse(response);
        m_Result = std::make_shared< aspose::cells::cloud::models::WorkbookResponse >();
        m_Result->fromJson(&json);
    }    
    /*
     * PostBatchConvertResponse implementation
    */

    std::shared_ptr< std::istream > PostBatchConvertResponse::getResult() const
    {
        return m_Result;
    }

    void PostBatchConvertResponse::deserialize(const std::string_view& response)
    {
        m_Result = std::shared_ptr< std::istream >(new std::istringstream(std::string(response), std::ios_base::in));
    }   
    /*
     * PostCompressResponse implementation
     */

    std::shared_ptr< aspose::cells::cloud::models::FilesResult > PostCompressResponse::getResult() const
    {
        return m_Result;
    }

    void PostCompressResponse::deserialize(const std::string_view& response)
    {
        auto json = ::nlohmann::json::parse(response);
        m_Result = std::make_shared< aspose::cells::cloud::models::FilesResult >();
        m_Result->fromJson(&json);
    }     
    /*
     * PostReplaceResponse implementation
     */

    std::shared_ptr< aspose::cells::cloud::models::FilesResult > PostReplaceResponse::getResult() const
    {
        return m_Result;
    }

    void PostReplaceResponse::deserialize(const std::string_view& response)
    {
        auto json = ::nlohmann::json::parse(response);
        m_Result = std::make_shared< aspose::cells::cloud::models::FilesResult >();
        m_Result->fromJson(&json);
    }   
    /*
     * PostClearObjectsResponse implementation
     */

    std::shared_ptr< aspose::cells::cloud::models::FilesResult > PostClearObjectsResponse::getResult() const
    {
        return m_Result;
    }

    void PostClearObjectsResponse::deserialize(const std::string_view& response)
    {
        auto json = ::nlohmann::json::parse(response);
        m_Result = std::make_shared< aspose::cells::cloud::models::FilesResult >();
        m_Result->fromJson(&json);
    } 
    /*
     * PostWatermarkResponse implementation
     */

    std::shared_ptr< aspose::cells::cloud::models::FilesResult > PostWatermarkResponse::getResult() const
    {
        return m_Result;
    }

    void PostWatermarkResponse::deserialize(const std::string_view& response)
    {
        auto json = ::nlohmann::json::parse(response);
        m_Result = std::make_shared< aspose::cells::cloud::models::FilesResult >();
        m_Result->fromJson(&json);
    } 
    /*
     * PostReverseResponse implementation
     */

    std::shared_ptr< aspose::cells::cloud::models::FilesResult > PostReverseResponse::getResult() const
    {
        return m_Result;
    }

    void PostReverseResponse::deserialize(const std::string_view& response)
    {
        auto json = ::nlohmann::json::parse(response);
        m_Result = std::make_shared< aspose::cells::cloud::models::FilesResult >();
        m_Result->fromJson(&json);
    }    

    /*
     * PostDigitalSignatureResponse implementation
     */

    std::shared_ptr< aspose::cells::cloud::models::CellsCloudResponse > PostDigitalSignatureResponse::getResult() const
    {
        return m_Result;
    }

    void PostDigitalSignatureResponse::deserialize(const std::string_view& response)
    {
        auto json = ::nlohmann::json::parse(response);
        m_Result = std::make_shared< aspose::cells::cloud::models::CellsCloudResponse >();
        m_Result->fromJson(&json);
    } 

    /*
     * PostRotateResponse implementation
     */

    std::shared_ptr< aspose::cells::cloud::models::FilesResult > PostRotateResponse::getResult() const
    {
        return m_Result;
    }

    void PostRotateResponse::deserialize(const std::string_view& response)
    {
        auto json = ::nlohmann::json::parse(response);
        m_Result = std::make_shared< aspose::cells::cloud::models::FilesResult >();
        m_Result->fromJson(&json);
    }    

}
