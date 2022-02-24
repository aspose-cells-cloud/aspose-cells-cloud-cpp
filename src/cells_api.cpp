/** --------------------------------------------------------------------------------------------------------------------
* <copyright company="Aspose" file="cells_api.cpp">
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

namespace aspose::cells::cloud::api {
    
    CellsApi::CellsApi(std::shared_ptr<ApiConfiguration> configuration)
        : m_ApiClient(std::make_shared<ApiClient>(configuration)) { 
          
        }

    void CellsApi::copyFile(std::shared_ptr<aspose::cells::cloud::requests::CopyFileRequest> request)
    {
        auto response = std::make_shared< aspose::cells::cloud::responses::CopyFileResponse >();
        m_ApiClient->call( request->createHttpRequest(), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::cells::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }
    }

    void CellsApi::copyFolder(std::shared_ptr<aspose::cells::cloud::requests::CopyFolderRequest> request)
    {
        auto response = std::make_shared< aspose::cells::cloud::responses::CopyFolderResponse >();
        m_ApiClient->call( request->createHttpRequest(), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::cells::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }
    }

    void CellsApi::createFolder(std::shared_ptr<aspose::cells::cloud::requests::CreateFolderRequest> request)
    {
        auto response = std::make_shared< aspose::cells::cloud::responses::CreateFolderResponse >();
        m_ApiClient->call( request->createHttpRequest(), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::cells::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }
    }

    void CellsApi::deleteFile(std::shared_ptr<aspose::cells::cloud::requests::DeleteFileRequest> request)
    {
        auto response = std::make_shared< aspose::cells::cloud::responses::DeleteFileResponse >();
        m_ApiClient->call( request->createHttpRequest(), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::cells::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }
    }

    void CellsApi::deleteFolder(std::shared_ptr<aspose::cells::cloud::requests::DeleteFolderRequest> request)
    {
        auto response = std::make_shared< aspose::cells::cloud::responses::DeleteFolderResponse >();
        m_ApiClient->call( request->createHttpRequest(), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::cells::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }
    }

    std::shared_ptr< std::istream > CellsApi::downloadFile(std::shared_ptr<aspose::cells::cloud::requests::DownloadFileRequest> request)
    {
        auto response = std::make_shared< aspose::cells::cloud::responses::DownloadFileResponse >();
        m_ApiClient->call( request->createHttpRequest(), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::cells::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getResult();
    }

    std::shared_ptr< aspose::cells::cloud::models::PublicKeyResponse > CellsApi::getPublicKey(std::shared_ptr<aspose::cells::cloud::requests::GetPublicKeyRequest> request)
    {
        auto response = std::make_shared< aspose::cells::cloud::responses::GetPublicKeyResponse >();
        m_ApiClient->call( request->createHttpRequest(), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::cells::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getResult();
    }
    std::shared_ptr< aspose::cells::cloud::models::FilesList > CellsApi::getFilesList(std::shared_ptr<aspose::cells::cloud::requests::GetFilesListRequest> request)
    {
        auto response = std::make_shared< aspose::cells::cloud::responses::GetFilesListResponse >();
        m_ApiClient->call( request->createHttpRequest(), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::cells::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getResult();
    }
    void CellsApi::moveFile(std::shared_ptr<aspose::cells::cloud::requests::MoveFileRequest> request)
    {
        auto response = std::make_shared< aspose::cells::cloud::responses::MoveFileResponse >();
        m_ApiClient->call( request->createHttpRequest(), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::cells::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }
    }

    void CellsApi::moveFolder(std::shared_ptr<aspose::cells::cloud::requests::MoveFolderRequest> request)
    {
        auto response = std::make_shared< aspose::cells::cloud::responses::MoveFolderResponse >();
        m_ApiClient->call( request->createHttpRequest(), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::cells::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }
    }
    
    std::shared_ptr< aspose::cells::cloud::models::FilesUploadResult > CellsApi::uploadFile(std::shared_ptr<aspose::cells::cloud::requests::UploadFileRequest> request)
    {
        auto response = std::make_shared< aspose::cells::cloud::responses::UploadFileResponse >();
        m_ApiClient->call( request->createHttpRequest(), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::cells::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getResult();
    }

    ////////////////////////////////////////////////

    std::shared_ptr< std::istream > CellsApi::convert(std::shared_ptr<aspose::cells::cloud::requests::ConvertRequest> request)
    {
        auto response = std::make_shared< aspose::cells::cloud::responses::ConvertResponse >();
        m_ApiClient->call( request->createHttpRequest(), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::cells::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }
        return response->getResult();
    }

    std::shared_ptr< std::istream > CellsApi::getWorkbook(std::shared_ptr<aspose::cells::cloud::requests::GetWorkbookRequest> request)
    {
        auto response = std::make_shared< aspose::cells::cloud::responses::GetWorkbookResponse >();
        m_ApiClient->call( request->createHttpRequest(), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::cells::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }
        return response->getResult();
    }

    std::shared_ptr< aspose::cells::cloud::models::FilesResult > CellsApi::protectWorkbook(std::shared_ptr<aspose::cells::cloud::requests::ProtectWorkbookRequest> request)
    {
        auto response = std::make_shared< aspose::cells::cloud::responses::ProtectWorkbookResponse >();
        m_ApiClient->call( request->createHttpRequest(), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::cells::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }
        return response->getResult();
    }

    std::shared_ptr< aspose::cells::cloud::models::CellsResponse > CellsApi::protectWorkbook(std::shared_ptr<aspose::cells::cloud::requests::EncryptionWorkbookRequest> request)
    {
        auto response = std::make_shared< aspose::cells::cloud::responses::EncryptionWorkbookResponse >();
        m_ApiClient->call( request->createHttpRequest(), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::cells::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }
        return response->getResult();
    }

    std::shared_ptr< aspose::cells::cloud::models::SaveResponse>  CellsApi::postDocumentSaveAs(std::shared_ptr<aspose::cells::cloud::requests::postDocumentSaveAsRequest> request)
    {
        auto response = std::make_shared< aspose::cells::cloud::responses::postDocumentSaveAsResponse >();
        m_ApiClient->call( request->createHttpRequest(), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::cells::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getResult();
    }    
    
    std::shared_ptr< aspose::cells::cloud::models::SplitResultResponse>  CellsApi::postWorkbookSplit(std::shared_ptr<aspose::cells::cloud::requests::PostWorkbookSplitRequest> request)
    {
        auto response = std::make_shared< aspose::cells::cloud::responses::PostWorkbookSplitResponse >();
        m_ApiClient->call( request->createHttpRequest(), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::cells::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getResult();
    }
    
    std::shared_ptr< aspose::cells::cloud::models::FilesResult>  CellsApi::postSplit(std::shared_ptr<aspose::cells::cloud::requests::PostSplitRequest> request)
    {
        auto response = std::make_shared< aspose::cells::cloud::responses::PostSplitResponse >();
        m_ApiClient->call( request->createHttpRequest(), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::cells::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getResult();
    }    

    std::shared_ptr< aspose::cells::cloud::models::WorkbookResponse>  CellsApi::postWorkbooksMerge(std::shared_ptr<aspose::cells::cloud::requests::PostWorkbooksMergeRequest> request)
    {
        auto response = std::make_shared< aspose::cells::cloud::responses::PostWorkbooksMergeResponse >();
        m_ApiClient->call( request->createHttpRequest(), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::cells::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getResult();
    }
    std::shared_ptr< aspose::cells::cloud::models::FileInfo>  CellsApi::postMerge(std::shared_ptr<aspose::cells::cloud::requests::PostMergeRequest> request)
    {
        auto response = std::make_shared< aspose::cells::cloud::responses::PostMergeResponse >();
        m_ApiClient->call( request->createHttpRequest(), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::cells::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getResult();
    }
}
