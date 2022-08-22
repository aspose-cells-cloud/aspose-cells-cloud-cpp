/** --------------------------------------------------------------------------------------------------------------------
* <copyright company="Aspose" file="requests.cpp">
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
#include "aspose_cells_cloud.h"

// USE THIRD PARTY LIBS ONLY IN CPP FILES!!!
#include "../thirdparty/utf8.h"

namespace aspose::cells::cloud::requests {

    /*
     * CopyFile request implementation
     */
    CopyFileRequest::CopyFileRequest(
        const std::shared_ptr< std::wstring > destPath,
        const std::shared_ptr< std::wstring > srcPath,
        const std::shared_ptr< std::wstring > srcStorageName,
        const std::shared_ptr< std::wstring > destStorageName,
        const std::shared_ptr< std::wstring > versionId
    ) : 
        m_DestPath(destPath),
        m_SrcPath(srcPath),
        m_SrcStorageName(srcStorageName),
        m_DestStorageName(destStorageName),
        m_VersionId(versionId)
    {
    }

    const std::shared_ptr< std::wstring > CopyFileRequest::getDestPath() const
    {
        return m_DestPath;
    }

    const std::shared_ptr< std::wstring > CopyFileRequest::getSrcPath() const
    {
        return m_SrcPath;
    }

    const std::shared_ptr< std::wstring > CopyFileRequest::getSrcStorageName() const
    {
        return m_SrcStorageName;
    }

    const std::shared_ptr< std::wstring > CopyFileRequest::getDestStorageName() const
    {
        return m_DestStorageName;
    }

    const std::shared_ptr< std::wstring > CopyFileRequest::getVersionId() const
    {
        return m_VersionId;
    }

    std::shared_ptr< aspose::cells::cloud::HttpRequestData > CopyFileRequest::createHttpRequest() const
    {
        auto result = std::make_shared<HttpRequestData>();
        result->setMethod(HttpRequestMethod::HttpPUT);
        result->setPath(L"/cells/storage/file/copy/{srcPath}");
        if (!m_SrcPath) throw aspose::cells::cloud::ApiException(400, L"Parameter 'SrcPath' is required.");
        result->setPathParam(L"{srcPath}", *m_SrcPath);
        if (m_DestPath) result->addQueryParam(L"destPath", *m_DestPath);
        else throw aspose::cells::cloud::ApiException(400, L"Parameter 'DestPath' is required.");
        if (m_SrcStorageName) result->addQueryParam(L"srcStorageName", *m_SrcStorageName);
        if (m_DestStorageName) result->addQueryParam(L"destStorageName", *m_DestStorageName);
        if (m_VersionId) result->addQueryParam(L"versionId", *m_VersionId);
        return result;
    }

    std::shared_ptr< aspose::cells::cloud::responses::ResponseModelBase > CopyFileRequest::createResponse() const
    {
        return std::shared_ptr< aspose::cells::cloud::responses::ResponseModelBase >(
            new aspose::cells::cloud::responses::CopyFileResponse()
        );
    }

    /*
     * CopyFolder request implementation
     */
    CopyFolderRequest::CopyFolderRequest(
        const std::shared_ptr< std::wstring > destPath,
        const std::shared_ptr< std::wstring > srcPath,
        const std::shared_ptr< std::wstring > srcStorageName,
        const std::shared_ptr< std::wstring > destStorageName
    ) : 
        m_DestPath(destPath),
        m_SrcPath(srcPath),
        m_SrcStorageName(srcStorageName),
        m_DestStorageName(destStorageName)
    {
    }

    const std::shared_ptr< std::wstring > CopyFolderRequest::getDestPath() const
    {
        return m_DestPath;
    }

    const std::shared_ptr< std::wstring > CopyFolderRequest::getSrcPath() const
    {
        return m_SrcPath;
    }

    const std::shared_ptr< std::wstring > CopyFolderRequest::getSrcStorageName() const
    {
        return m_SrcStorageName;
    }

    const std::shared_ptr< std::wstring > CopyFolderRequest::getDestStorageName() const
    {
        return m_DestStorageName;
    }

    std::shared_ptr< aspose::cells::cloud::HttpRequestData > CopyFolderRequest::createHttpRequest() const
    {
        auto result = std::make_shared<HttpRequestData>();
        result->setMethod(HttpRequestMethod::HttpPUT);
        result->setPath(L"/cells/storage/folder/copy/{srcPath}");
        if (!m_SrcPath) throw aspose::cells::cloud::ApiException(400, L"Parameter 'SrcPath' is required.");
        result->setPathParam(L"{srcPath}", *m_SrcPath);
        if (m_DestPath) result->addQueryParam(L"destPath", *m_DestPath);
        else throw aspose::cells::cloud::ApiException(400, L"Parameter 'DestPath' is required.");
        if (m_SrcStorageName) result->addQueryParam(L"srcStorageName", *m_SrcStorageName);
        if (m_DestStorageName) result->addQueryParam(L"destStorageName", *m_DestStorageName);
        return result;
    }

    std::shared_ptr< aspose::cells::cloud::responses::ResponseModelBase > CopyFolderRequest::createResponse() const
    {
        return std::shared_ptr< aspose::cells::cloud::responses::ResponseModelBase >(
            new aspose::cells::cloud::responses::CopyFolderResponse()
        );
    }
    

    /*
     * CreateFolder request implementation
     */
    CreateFolderRequest::CreateFolderRequest(
        const std::shared_ptr< std::wstring > path,
        const std::shared_ptr< std::wstring > storageName
    ) : 
        m_Path(path),
        m_StorageName(storageName)
    {
    }

    const std::shared_ptr< std::wstring > CreateFolderRequest::getPath() const
    {
        return m_Path;
    }

    const std::shared_ptr< std::wstring > CreateFolderRequest::getStorageName() const
    {
        return m_StorageName;
    }

    std::shared_ptr< aspose::cells::cloud::HttpRequestData > CreateFolderRequest::createHttpRequest() const
    {
        auto result = std::make_shared<HttpRequestData>();
        result->setMethod(HttpRequestMethod::HttpPUT);
        result->setPath(L"/cells/storage/folder/{path}");
        if (!m_Path) throw aspose::cells::cloud::ApiException(400, L"Parameter 'Path' is required.");
        result->setPathParam(L"{path}", *m_Path);
        if (m_StorageName) result->addQueryParam(L"storageName", *m_StorageName);
        return result;
    }

    std::shared_ptr< aspose::cells::cloud::responses::ResponseModelBase > CreateFolderRequest::createResponse() const
    {
        return std::shared_ptr< aspose::cells::cloud::responses::ResponseModelBase >(
            new aspose::cells::cloud::responses::CreateFolderResponse()
        );
    }
    /*
     * DeleteFile request implementation
     */
    DeleteFileRequest::DeleteFileRequest(
        const std::shared_ptr< std::wstring > path,
        const std::shared_ptr< std::wstring > storageName,
        const std::shared_ptr< std::wstring > versionId
    ) : 
        m_Path(path),
        m_StorageName(storageName),
        m_VersionId(versionId)
    {
    }

    const std::shared_ptr< std::wstring > DeleteFileRequest::getPath() const
    {
        return m_Path;
    }

    const std::shared_ptr< std::wstring > DeleteFileRequest::getStorageName() const
    {
        return m_StorageName;
    }

    const std::shared_ptr< std::wstring > DeleteFileRequest::getVersionId() const
    {
        return m_VersionId;
    }

    std::shared_ptr< aspose::cells::cloud::HttpRequestData > DeleteFileRequest::createHttpRequest() const
    {
        auto result = std::make_shared<HttpRequestData>();
        result->setMethod(HttpRequestMethod::HttpDELETE);
        result->setPath(L"/cells/storage/file/{path}");
        if (!m_Path) throw aspose::cells::cloud::ApiException(400, L"Parameter 'Path' is required.");
        result->setPathParam(L"{path}", *m_Path);
        if (m_StorageName) result->addQueryParam(L"storageName", *m_StorageName);
        if (m_VersionId) result->addQueryParam(L"versionId", *m_VersionId);
        return result;
    }

    std::shared_ptr< aspose::cells::cloud::responses::ResponseModelBase > DeleteFileRequest::createResponse() const
    {
        return std::shared_ptr< aspose::cells::cloud::responses::ResponseModelBase >(
            new aspose::cells::cloud::responses::DeleteFileResponse()
        );
    }

    /*
     * DeleteFolder request implementation
     */
    DeleteFolderRequest::DeleteFolderRequest(
        const std::shared_ptr< std::wstring > path,
        const std::shared_ptr< std::wstring > storageName,
        const std::shared_ptr< bool > recursive
    ) : 
        m_Path(path),
        m_StorageName(storageName),
        m_Recursive(recursive)
    {
    }

    const std::shared_ptr< std::wstring > DeleteFolderRequest::getPath() const
    {
        return m_Path;
    }

    const std::shared_ptr< std::wstring > DeleteFolderRequest::getStorageName() const
    {
        return m_StorageName;
    }

    const std::shared_ptr< bool > DeleteFolderRequest::getRecursive() const
    {
        return m_Recursive;
    }

    std::shared_ptr< aspose::cells::cloud::HttpRequestData > DeleteFolderRequest::createHttpRequest() const
    {
        auto result = std::make_shared<HttpRequestData>();
        result->setMethod(HttpRequestMethod::HttpDELETE);
        result->setPath(L"/cells/storage/folder/{path}");
        if (!m_Path) throw aspose::cells::cloud::ApiException(400, L"Parameter 'Path' is required.");
        result->setPathParam(L"{path}", *m_Path);
        if (m_StorageName) result->addQueryParam(L"storageName", *m_StorageName);
        if (m_Recursive) result->addQueryParam(L"recursive", *m_Recursive);
        return result;
    }

    std::shared_ptr< aspose::cells::cloud::responses::ResponseModelBase > DeleteFolderRequest::createResponse() const
    {
        return std::shared_ptr< aspose::cells::cloud::responses::ResponseModelBase >(
            new aspose::cells::cloud::responses::DeleteFolderResponse()
        );
    }
    /*
     * MoveFile request implementation
     */
    MoveFileRequest::MoveFileRequest(
        const std::shared_ptr< std::wstring > destPath,
        const std::shared_ptr< std::wstring > srcPath,
        const std::shared_ptr< std::wstring > srcStorageName,
        const std::shared_ptr< std::wstring > destStorageName,
        const std::shared_ptr< std::wstring > versionId
    ) : 
        m_DestPath(destPath),
        m_SrcPath(srcPath),
        m_SrcStorageName(srcStorageName),
        m_DestStorageName(destStorageName),
        m_VersionId(versionId)
    {
    }

    const std::shared_ptr< std::wstring > MoveFileRequest::getDestPath() const
    {
        return m_DestPath;
    }

    const std::shared_ptr< std::wstring > MoveFileRequest::getSrcPath() const
    {
        return m_SrcPath;
    }

    const std::shared_ptr< std::wstring > MoveFileRequest::getSrcStorageName() const
    {
        return m_SrcStorageName;
    }

    const std::shared_ptr< std::wstring > MoveFileRequest::getDestStorageName() const
    {
        return m_DestStorageName;
    }

    const std::shared_ptr< std::wstring > MoveFileRequest::getVersionId() const
    {
        return m_VersionId;
    }

    std::shared_ptr< aspose::cells::cloud::HttpRequestData > MoveFileRequest::createHttpRequest() const
    {
        auto result = std::make_shared<HttpRequestData>();
        result->setMethod(HttpRequestMethod::HttpPUT);
        result->setPath(L"/cells/storage/file/move/{srcPath}");
        if (!m_SrcPath) throw aspose::cells::cloud::ApiException(400, L"Parameter 'SrcPath' is required.");
        result->setPathParam(L"{srcPath}", *m_SrcPath);
        if (m_DestPath) result->addQueryParam(L"destPath", *m_DestPath);
        else throw aspose::cells::cloud::ApiException(400, L"Parameter 'DestPath' is required.");
        if (m_SrcStorageName) result->addQueryParam(L"srcStorageName", *m_SrcStorageName);
        if (m_DestStorageName) result->addQueryParam(L"destStorageName", *m_DestStorageName);
        if (m_VersionId) result->addQueryParam(L"versionId", *m_VersionId);
        return result;
    }

    std::shared_ptr< aspose::cells::cloud::responses::ResponseModelBase > MoveFileRequest::createResponse() const
    {
        return std::shared_ptr< aspose::cells::cloud::responses::ResponseModelBase >(
            new aspose::cells::cloud::responses::MoveFileResponse()
        );
    }

    /*
     * MoveFolder request implementation
     */
    MoveFolderRequest::MoveFolderRequest(
        const std::shared_ptr< std::wstring > destPath,
        const std::shared_ptr< std::wstring > srcPath,
        const std::shared_ptr< std::wstring > srcStorageName,
        const std::shared_ptr< std::wstring > destStorageName
    ) : 
        m_DestPath(destPath),
        m_SrcPath(srcPath),
        m_SrcStorageName(srcStorageName),
        m_DestStorageName(destStorageName)
    {
    }

    const std::shared_ptr< std::wstring > MoveFolderRequest::getDestPath() const
    {
        return m_DestPath;
    }

    const std::shared_ptr< std::wstring > MoveFolderRequest::getSrcPath() const
    {
        return m_SrcPath;
    }

    const std::shared_ptr< std::wstring > MoveFolderRequest::getSrcStorageName() const
    {
        return m_SrcStorageName;
    }

    const std::shared_ptr< std::wstring > MoveFolderRequest::getDestStorageName() const
    {
        return m_DestStorageName;
    }

    std::shared_ptr< aspose::cells::cloud::HttpRequestData > MoveFolderRequest::createHttpRequest() const
    {
        auto result = std::make_shared<HttpRequestData>();
        result->setMethod(HttpRequestMethod::HttpPUT);
        result->setPath(L"/cells/storage/folder/move/{srcPath}");
        if (!m_SrcPath) throw aspose::cells::cloud::ApiException(400, L"Parameter 'SrcPath' is required.");
        result->setPathParam(L"{srcPath}", *m_SrcPath);
        if (m_DestPath) result->addQueryParam(L"destPath", *m_DestPath);
        else throw aspose::cells::cloud::ApiException(400, L"Parameter 'DestPath' is required.");
        if (m_SrcStorageName) result->addQueryParam(L"srcStorageName", *m_SrcStorageName);
        if (m_DestStorageName) result->addQueryParam(L"destStorageName", *m_DestStorageName);
        return result;
    }

    std::shared_ptr< aspose::cells::cloud::responses::ResponseModelBase > MoveFolderRequest::createResponse() const
    {
        return std::shared_ptr< aspose::cells::cloud::responses::ResponseModelBase >(
            new aspose::cells::cloud::responses::MoveFolderResponse()
        );
    }
    /*
     * UploadFile request implementation
     */
    UploadFileRequest::UploadFileRequest(
        const std::shared_ptr< std::istream > fileContent,
        const std::shared_ptr< std::wstring > path,
        const std::shared_ptr< std::wstring > storageName
    ) : 
        m_FileContent(fileContent),
        m_Path(path),
        m_StorageName(storageName)
    {
    }

    const std::shared_ptr< std::istream > UploadFileRequest::getFileContent() const
    {
        return m_FileContent;
    }

    const std::shared_ptr< std::wstring > UploadFileRequest::getPath() const
    {
        return m_Path;
    }

    const std::shared_ptr< std::wstring > UploadFileRequest::getStorageName() const
    {
        return m_StorageName;
    }

    std::shared_ptr< aspose::cells::cloud::HttpRequestData > UploadFileRequest::createHttpRequest() const
    {
        auto result = std::make_shared<HttpRequestData>();
        result->setMethod(HttpRequestMethod::HttpPUT);
        result->setPath(L"/cells/storage/file/{path}");
        if (!m_Path) throw aspose::cells::cloud::ApiException(400, L"Parameter 'Path' is required.");
        result->setPathParam(L"{path}", *m_Path);
        if (m_StorageName) result->addQueryParam(L"storageName", *m_StorageName);
        if (m_FileContent) result->setBody(*m_FileContent);
        else throw aspose::cells::cloud::ApiException(400, L"Parameter 'FileContent' is required.");
        return result;
    }

    std::shared_ptr< aspose::cells::cloud::responses::ResponseModelBase > UploadFileRequest::createResponse() const
    {
        return std::shared_ptr< aspose::cells::cloud::responses::ResponseModelBase >(
            new aspose::cells::cloud::responses::UploadFileResponse()
        );
    }


///////////////////
    /*
     * GetPublicKey request implementation
     */
    GetPublicKeyRequest::GetPublicKeyRequest(
    ) 
    {
    }


    std::shared_ptr< aspose::cells::cloud::HttpRequestData > GetPublicKeyRequest::createHttpRequest() const
    {
        auto result = std::make_shared<HttpRequestData>();
        result->setMethod(HttpRequestMethod::HttpGET);
        result->setPath(L"/cells/encryption/publickey");
        return result;
    }

    std::shared_ptr< aspose::cells::cloud::responses::ResponseModelBase > GetPublicKeyRequest::createResponse() const
    {
        return std::shared_ptr< aspose::cells::cloud::responses::ResponseModelBase >(
            new aspose::cells::cloud::responses::GetPublicKeyResponse()
        );
    }

    
    /*
     * DownloadFile request implementation
     */
    DownloadFileRequest::DownloadFileRequest(
        const std::shared_ptr< std::wstring > path,
        const std::shared_ptr< std::wstring > storageName,
        const std::shared_ptr< std::wstring > versionId
    ) : 
        m_Path(path),
        m_StorageName(storageName),
        m_VersionId(versionId)
    {
    }

    const std::shared_ptr< std::wstring > DownloadFileRequest::getPath() const
    {
        return m_Path;
    }

    const std::shared_ptr< std::wstring > DownloadFileRequest::getStorageName() const
    {
        return m_StorageName;
    }

    const std::shared_ptr< std::wstring > DownloadFileRequest::getVersionId() const
    {
        return m_VersionId;
    }

    std::shared_ptr< aspose::cells::cloud::HttpRequestData > DownloadFileRequest::createHttpRequest() const
    {
        auto result = std::make_shared<HttpRequestData>();
        result->setMethod(HttpRequestMethod::HttpGET);
        result->setPath(L"/cells/storage/file/{path}");
        if (!m_Path) throw aspose::cells::cloud::ApiException(400, L"Parameter 'Path' is required.");
        result->setPathParam(L"{path}", *m_Path);
        if (m_StorageName) result->addQueryParam(L"storageName", *m_StorageName);
        if (m_VersionId) result->addQueryParam(L"versionId", *m_VersionId);
        return result;
    }

    std::shared_ptr< aspose::cells::cloud::responses::ResponseModelBase > DownloadFileRequest::createResponse() const
    {
        return std::shared_ptr< aspose::cells::cloud::responses::ResponseModelBase >(
            new aspose::cells::cloud::responses::DownloadFileResponse()
        );
    }

    /*
     * GetFilesList request implementation
     */

    GetFilesListRequest::GetFilesListRequest(
        const std::shared_ptr< std::wstring > path,
        const std::shared_ptr< std::wstring > storageName
    ) : 
        m_Path(path),
        m_StorageName(storageName)
    {
    }

    const std::shared_ptr< std::wstring > GetFilesListRequest::getPath() const
    {
        return m_Path;
    }

    const std::shared_ptr< std::wstring > GetFilesListRequest::getStorageName() const
    {
        return m_StorageName;
    }

    std::shared_ptr< aspose::cells::cloud::HttpRequestData > GetFilesListRequest::createHttpRequest() const
    {
        auto result = std::make_shared<HttpRequestData>();
        result->setMethod(HttpRequestMethod::HttpGET);
        result->setPath(L"/cells/storage/folder/{path}");
        if (!m_Path) throw aspose::cells::cloud::ApiException(400, L"Parameter 'Path' is required.");
        result->setPathParam(L"{path}", *m_Path);
        if (m_StorageName) result->addQueryParam(L"storageName", *m_StorageName);
        return result;
    }

    std::shared_ptr< aspose::cells::cloud::responses::ResponseModelBase > GetFilesListRequest::createResponse() const
    {
        return std::shared_ptr< aspose::cells::cloud::responses::ResponseModelBase >(
            new aspose::cells::cloud::responses::GetFilesListResponse()
        );
    }

    /*
     * ConvertRequest request implementation
    */

    ConvertRequest::ConvertRequest(
        const std::shared_ptr< std::wstring > format,
        const std::shared_ptr< std::istream > fileStream,
        const std::shared_ptr< std::wstring > outPath,
        const std::shared_ptr< std::wstring > storageName,
        const std::shared_ptr< std::wstring > password,
        const std::shared_ptr< bool > checkExcelRestriction
    ) : 
        m_Format(format),
        m_FileStream(fileStream),
        m_OutPath(outPath),              
        m_StorageName(storageName),
        m_Password(password),
        m_CheckExcelRestriction(checkExcelRestriction)
    {
    }

    const std::shared_ptr< std::wstring > ConvertRequest::getOutPath() const
    {
        return m_OutPath;
    }
    const std::shared_ptr< std::wstring > ConvertRequest::getFormat() const
    {
        return m_Format;
    }
    const std::shared_ptr< std::istream > ConvertRequest::getFileStream() const
    {
        return m_FileStream;
    }
    const std::shared_ptr< std::wstring > ConvertRequest::getStorageName() const
    {
        return m_StorageName;
    }
    const std::shared_ptr< std::wstring > ConvertRequest::getPassword() const
    {
        return m_Password;
    }
    const std::shared_ptr< bool > ConvertRequest::getCheckExcelRestriction() const
    {
        return m_CheckExcelRestriction;
    }
    std::shared_ptr< aspose::cells::cloud::HttpRequestData > ConvertRequest::createHttpRequest() const
    {
        auto result = std::make_shared<HttpRequestData>();
        result->setMethod(HttpRequestMethod::HttpPUT);
        result->setPath(L"/cells/convert");
        // if (!m_Path) throw aspose::cells::cloud::ApiException(400, L"Parameter 'Path' is required.");
        // if(! std::filesystem::exists(std::filesystem::path(*m_Path))) throw aspose::cells::cloud::ApiException(400, L"Parameter 'Path' no exists.");        
        if (!m_Format) throw aspose::cells::cloud::ApiException(400, L"Parameter 'm_Format' is required.");        
        if (m_Format) result->addQueryParam(L"format", *m_Format);
        if (m_Password) result->addQueryParam(L"password", *m_Password);
        if (m_OutPath) result->addQueryParam(L"outPath", *m_OutPath);
        if (m_StorageName) result->addQueryParam(L"storageName", *m_StorageName);
        if (m_CheckExcelRestriction) result->addQueryParam(L"checkExcelRestriction", *m_CheckExcelRestriction);
        // result->addFormDataParam(std::filesystem::path(*m_Path).filename().c_str(),*(std::shared_ptr<std::istream>(new std::ifstream(std::filesystem::path(m_Path.get()->c_str()), std::istream::binary))));       
        // result->addFormDataParam(L"SaveOptions",L"{\"SaveFormat\":\"pdf\"}");        
        // result->setBody(*(std::shared_ptr<std::istream>(new std::ifstream(std::filesystem::path(m_Path.get()->c_str()), std::istream::binary))));
        result->setBody(*m_FileStream);
        // result->addFormDataParam(*m_Filename,*m_FileStream);       
        return result;
    }

    std::shared_ptr< aspose::cells::cloud::responses::ResponseModelBase > ConvertRequest::createResponse() const
    {
        return std::shared_ptr< aspose::cells::cloud::responses::ResponseModelBase >(
            new aspose::cells::cloud::responses::ConvertResponse()
        );
    }

    /*
     * GetDocument request implementation
     */
    GetWorkbookRequest::GetWorkbookRequest(
        const std::shared_ptr< std::wstring > name,
        const std::shared_ptr< std::wstring > format,
        const std::shared_ptr< std::wstring > password,
        const std::shared_ptr< bool > isAutoFit,
        const std::shared_ptr< bool > onlySaveTable,
        const std::shared_ptr< std::wstring > folder,
        const std::shared_ptr< std::wstring > storageName,
        const std::shared_ptr< std::wstring > outPath,
        const std::shared_ptr< std::wstring > outStorageName,
        const std::shared_ptr< bool > checkExcelRestriction
    ) : 
        m_Name(name),
        m_Format(format),
        m_Password(password),        
        m_IsAutoFit(isAutoFit),
        m_OnlySaveTable(onlySaveTable),
        m_Folder(folder),
        m_StorageName(storageName),
        m_OutPath(outPath),
        m_OutStorageName(outStorageName),
        m_CheckExcelRestriction(checkExcelRestriction)
    {
    }

    const std::shared_ptr< std::wstring > GetWorkbookRequest::getName() const
    {
        return m_Name;
    }
    const std::shared_ptr< std::wstring > GetWorkbookRequest::getFormat() const
    {
        return m_Format;
    }

    const std::shared_ptr< std::wstring > GetWorkbookRequest::getPassword() const
    {
        return m_Password;
    }
    const std::shared_ptr< bool > GetWorkbookRequest::getIsAutoFit() const
    {
        return m_IsAutoFit;
    }

    const std::shared_ptr< bool > GetWorkbookRequest::getOnlySaveTable() const
    {
        return m_OnlySaveTable;
    }    
    const std::shared_ptr< std::wstring > GetWorkbookRequest::getFolder() const
    {
        return m_Folder;
    }

    const std::shared_ptr< std::wstring > GetWorkbookRequest::getStorageName() const
    {
        return m_StorageName;
    }

    const std::shared_ptr< std::wstring > GetWorkbookRequest::getOutPath() const
    {
        return m_OutPath;
    }

    const std::shared_ptr< std::wstring > GetWorkbookRequest::getOutStorageName() const
    {
        return m_OutStorageName;
    }
    const std::shared_ptr< bool > GetWorkbookRequest::getCheckExcelRestriction() const
    {
        return m_CheckExcelRestriction;
    }
    std::shared_ptr< aspose::cells::cloud::HttpRequestData > GetWorkbookRequest::createHttpRequest() const
    {
        auto result = std::make_shared<HttpRequestData>();
        result->setMethod(HttpRequestMethod::HttpGET);
        result->setPath(L"/cells/{name}");
        if (!m_Name) throw aspose::cells::cloud::ApiException(400, L"Parameter 'name' is required.");
        result->setPathParam(L"{name}", *m_Name);
        if (m_Format) result->addQueryParam(L"format", *m_Format);
        if (m_Password) result->addQueryParam(L"password", *m_Password);
        if (m_OnlySaveTable) result->addQueryParam(L"onlySaveTable", *m_OnlySaveTable?"true":"false" );
        if (m_IsAutoFit) result->addQueryParam(L"isAutoFit", *m_IsAutoFit?"true":"false");        
        if (m_Folder) result->addQueryParam(L"folder", *m_Folder);
        if (m_StorageName) result->addQueryParam(L"storageName", *m_StorageName);
        if (m_OutPath) result->addQueryParam(L"outPath", *m_OutPath);
        if (m_OutStorageName) result->addQueryParam(L"outStorageName", *m_OutStorageName);
        if (m_CheckExcelRestriction) result->addQueryParam(L"checkExcelRestriction", *m_CheckExcelRestriction?"true":"false"); 

        return result;
    }

    std::shared_ptr< aspose::cells::cloud::responses::ResponseModelBase > GetWorkbookRequest::createResponse() const
    {
        return std::shared_ptr< aspose::cells::cloud::responses::ResponseModelBase >(
            new aspose::cells::cloud::responses::GetWorkbookResponse()
        );
    }


    /*
     * ProtectWorkbookRequest implementation
    */

    ProtectWorkbookRequest::ProtectWorkbookRequest(
        std::shared_ptr< std::map< std::wstring ,std::shared_ptr<  std::istream >> > files,
        const std::shared_ptr< std::wstring > password       
    ) : 
        m_Files(files),
        m_Password(password)
    {
    }


    
    const  std::shared_ptr< std::map< std::wstring ,std::shared_ptr<  std::istream >> > ProtectWorkbookRequest::getFiles() const
    {
        return m_Files;
    }

    const std::shared_ptr< std::wstring > ProtectWorkbookRequest::getPassword() const
    {
        return m_Password;
    }

    std::shared_ptr< aspose::cells::cloud::HttpRequestData > ProtectWorkbookRequest::createHttpRequest() const
    {
        auto result = std::make_shared<HttpRequestData>();
        result->setMethod(HttpRequestMethod::HttpPOST);
        result->setPath(L"/cells/protect");

        if (m_Password) result->addQueryParam(L"password", *m_Password);
        
        if (!m_Files) throw aspose::cells::cloud::ApiException(400, L"Parameter 'Files' is required.");
        for(std::map< std::wstring ,std::shared_ptr<  std::istream > >::iterator it=m_Files->begin();it!=m_Files->end();it++)
        {             
            result->addFormDataParam(it->first, *(it->second));   
        }       
        return result;
    }

    std::shared_ptr< aspose::cells::cloud::responses::ResponseModelBase > ProtectWorkbookRequest::createResponse() const
    {
        return std::shared_ptr< aspose::cells::cloud::responses::ResponseModelBase >(
            new aspose::cells::cloud::responses::ProtectWorkbookResponse()
        );
    }
    /*
     * UnlockWorkbookRequest implementation
    */

    UnlockWorkbookRequest::UnlockWorkbookRequest(
        std::shared_ptr< std::map< std::wstring ,std::shared_ptr<  std::istream >> > files,
        const std::shared_ptr< std::wstring > password       
    ) : 
        m_Files(files),
        m_Password(password)
    {
    }


    
    const  std::shared_ptr< std::map< std::wstring ,std::shared_ptr<  std::istream >> > UnlockWorkbookRequest::getFiles() const
    {
        return m_Files;
    }

    const std::shared_ptr< std::wstring > UnlockWorkbookRequest::getPassword() const
    {
        return m_Password;
    }

    std::shared_ptr< aspose::cells::cloud::HttpRequestData > UnlockWorkbookRequest::createHttpRequest() const
    {
        auto result = std::make_shared<HttpRequestData>();
        result->setMethod(HttpRequestMethod::HttpPOST);
        result->setPath(L"/cells/unlock");

        if (m_Password) result->addQueryParam(L"password", *m_Password);
        
        if (!m_Files) throw aspose::cells::cloud::ApiException(400, L"Parameter 'Files' is required.");
        for(std::map< std::wstring ,std::shared_ptr<  std::istream > >::iterator it=m_Files->begin();it!=m_Files->end();it++)
        {             
            result->addFormDataParam(it->first, *(it->second));   
        }       
        return result;
    }

    std::shared_ptr< aspose::cells::cloud::responses::ResponseModelBase > UnlockWorkbookRequest::createResponse() const
    {
        return std::shared_ptr< aspose::cells::cloud::responses::ResponseModelBase >(
            new aspose::cells::cloud::responses::UnlockWorkbookResponse()
        );
    }

    /*
     * EncryptionWorkbookRequest implementation
    */

    EncryptionWorkbookRequest::EncryptionWorkbookRequest(
        const std::shared_ptr< std::wstring > name,
        const std::shared_ptr< aspose::cells::cloud::models::WorkbookEncryptionRequest > encryption,
        const std::shared_ptr< std::wstring > folder,
        const std::shared_ptr< std::wstring > storageName       
    ):
        m_Name(name),
        m_Encryption(encryption),
        m_Folder(folder),              
        m_StorageName(storageName)
    {
    }

    const std::shared_ptr< std::wstring > EncryptionWorkbookRequest::getName() const
    {
        return m_Name;
    }

    const std::shared_ptr< aspose::cells::cloud::models::WorkbookEncryptionRequest > EncryptionWorkbookRequest::getEncryption() const
    {
        return m_Encryption;
    }
    
    const std::shared_ptr< std::wstring > EncryptionWorkbookRequest::getFolder() const
    {
        return m_Folder;
    }

    const std::shared_ptr< std::wstring > EncryptionWorkbookRequest::getStorageName() const
    {
        return m_StorageName;
    }

    std::shared_ptr< aspose::cells::cloud::HttpRequestData > EncryptionWorkbookRequest::createHttpRequest() const
    {
        auto result = std::make_shared<HttpRequestData>();
        result->setMethod(HttpRequestMethod::HttpPOST);
        result->setPath(L"/cells/{name}/encryption");
        if (!m_Name) throw aspose::cells::cloud::ApiException(400, L"Parameter 'Name' is required.");        
        result->setPathParam(L"{name}", *m_Name);
        if (m_Folder) result->addQueryParam(L"folder", *m_Folder);
        if (m_StorageName) result->addQueryParam(L"storageName", *m_StorageName);
        if (m_Encryption) result->setBody(*m_Encryption);
        else throw aspose::cells::cloud::ApiException(400, L"Parameter 'm_Encryption' is required."); 
        return result;
    }

    std::shared_ptr< aspose::cells::cloud::responses::ResponseModelBase > EncryptionWorkbookRequest::createResponse() const
    {
        return std::shared_ptr< aspose::cells::cloud::responses::ResponseModelBase >(
            new aspose::cells::cloud::responses::EncryptionWorkbookResponse()
        );
    }
    /*
     * postDocumentSaveAsRequest implementation
     */

    PostDocumentSaveAsRequest::PostDocumentSaveAsRequest(
            const std::shared_ptr< std::wstring > name,
            const std::shared_ptr< aspose::cells::cloud::models::SaveOptions > saveOptions,
            const std::shared_ptr< std::wstring > newfilename,
            const std::shared_ptr< bool > isAutoFitRows,
            const std::shared_ptr< bool > isAutoFitColumns,
            const std::shared_ptr< std::wstring > folder,
            const std::shared_ptr< std::wstring > storageName,
            const std::shared_ptr< std::wstring > outStorageName,
            const std::shared_ptr< bool > checkExcelRestriction
    ) : 
            m_Name(name),
            m_SaveOptions(saveOptions),
            m_Newfilename(newfilename),
            m_IsAutoFitRows(isAutoFitRows),
            m_IsAutoFitColumns(isAutoFitColumns),
            m_Folder(folder),
            m_StorageName(storageName),
            m_OutStorageName(outStorageName),
            m_CheckExcelRestriction(checkExcelRestriction)
    {
    }

    const std::shared_ptr< std::wstring > PostDocumentSaveAsRequest::getName() const
    {
        return m_Name;
    }
    const std::shared_ptr< aspose::cells::cloud::models::SaveOptions > PostDocumentSaveAsRequest::getSaveOptions() const
    {
        return m_SaveOptions;
    }
    const std::shared_ptr< std::wstring > PostDocumentSaveAsRequest::getNewfilename() const
    {
        return m_Newfilename;
    }
    const std::shared_ptr< bool > PostDocumentSaveAsRequest::getIsAutoFitRows() const
    {
        return m_IsAutoFitRows;
    }
    const std::shared_ptr< bool > PostDocumentSaveAsRequest::getIsAutoFitColumns() const
    {
        return m_IsAutoFitColumns;
    }
    const std::shared_ptr< std::wstring > PostDocumentSaveAsRequest::getFolder() const
    {
        return m_Folder;
    }
    const std::shared_ptr< std::wstring > PostDocumentSaveAsRequest::getStorageName() const
    {
        return m_StorageName;
    }
    const std::shared_ptr< std::wstring > PostDocumentSaveAsRequest::getOutStorageName() const
    {
        return m_OutStorageName;
    }
    const std::shared_ptr< bool > PostDocumentSaveAsRequest::getCheckExcelRestriction() const
    {
        return m_CheckExcelRestriction;
    }

    std::shared_ptr< aspose::cells::cloud::HttpRequestData > PostDocumentSaveAsRequest::createHttpRequest() const
    {
        auto result = std::make_shared<HttpRequestData>();
        result->setMethod(HttpRequestMethod::HttpPOST);
        result->setPath(L"/cells/{name}/SaveAs");
        if (!m_Name) throw aspose::cells::cloud::ApiException(400, L"Parameter 'Name' is required.");
        result->setPathParam(L"{name}", *m_Name);
        if (m_SaveOptions) result->setBody(*m_SaveOptions);
        if (m_Newfilename) result->addQueryParam(L"newfilename", *m_Newfilename);
        else throw aspose::cells::cloud::ApiException(400, L"Parameter 'Newfilename' is required.");
        if (m_IsAutoFitRows) result->addQueryParam(L"isAutoFitRows", *m_IsAutoFitRows);        
        if (m_IsAutoFitColumns) result->addQueryParam(L"isAutoFitColumns", *m_IsAutoFitColumns);        
        if (m_Folder) result->addQueryParam(L"folder", *m_Folder);
        if (m_StorageName) result->addQueryParam(L"storageName", *m_StorageName);
        if (m_OutStorageName) result->addQueryParam(L"outStorageName", *m_OutStorageName);
        if (m_CheckExcelRestriction) result->addQueryParam(L"checkExcelRestriction", *m_CheckExcelRestriction?"true":"false"); 
        return result;
    }

    std::shared_ptr< aspose::cells::cloud::responses::ResponseModelBase > PostDocumentSaveAsRequest::createResponse() const
    {
        return std::shared_ptr< aspose::cells::cloud::responses::ResponseModelBase >(
            new aspose::cells::cloud::responses::PostDocumentSaveAsResponse()
        );
    }
    /*
     * PostWorkbookSplitRequest implementation
     */

    PostWorkbookSplitRequest::PostWorkbookSplitRequest(
            const std::shared_ptr< std::wstring > name,
            const std::shared_ptr< std::wstring > format,
            const std::shared_ptr< int > from,
            const std::shared_ptr< int > to,
            const std::shared_ptr< int > horizontalResolution,
            const std::shared_ptr< int > verticalResolution,
            const std::shared_ptr< std::wstring > folder,
            const std::shared_ptr< std::wstring > outFolder,
            const std::shared_ptr< std::wstring > storageName,
            const std::shared_ptr< std::wstring > outStorageName
    ) : 
            m_Name(name),
            m_Format(format),
            m_From(from),
            m_To(to),
            m_HorizontalResolution(horizontalResolution),
            m_VerticalResolution(verticalResolution),
            m_Folder(folder),
            m_OutFolder(outFolder),
            m_StorageName(storageName),
            m_OutStorageName(outStorageName)
    {
    }

    const std::shared_ptr< std::wstring > PostWorkbookSplitRequest::getName() const
    {
        return m_Name;
    }
    const std::shared_ptr< std::wstring > PostWorkbookSplitRequest::getFormat() const
    {
        return m_Format;
    }
    const std::shared_ptr< int > PostWorkbookSplitRequest::getFrom() const
    {
        return m_From;
    }
    const std::shared_ptr< int > PostWorkbookSplitRequest::getTo() const
    {
        return m_To;
    }
    const std::shared_ptr< int > PostWorkbookSplitRequest::getHorizontalResolution() const
    {
        return m_HorizontalResolution;
    }
    const std::shared_ptr< int > PostWorkbookSplitRequest::getVerticalResolution() const
    {
        return m_VerticalResolution;
    }
    const std::shared_ptr< std::wstring > PostWorkbookSplitRequest::getFolder() const
    {
        return m_Folder;
    }
    const std::shared_ptr< std::wstring > PostWorkbookSplitRequest::getOutFolder() const
    {
        return m_OutFolder;
    }
    const std::shared_ptr< std::wstring > PostWorkbookSplitRequest::getStorageName() const
    {
        return m_StorageName;
    }
    const std::shared_ptr< std::wstring > PostWorkbookSplitRequest::getOutStorageName() const
    {
        return m_OutStorageName;
    }

    std::shared_ptr< aspose::cells::cloud::HttpRequestData > PostWorkbookSplitRequest::createHttpRequest() const
    {
        auto result = std::make_shared<HttpRequestData>();
        result->setMethod(HttpRequestMethod::HttpPOST);
        result->setPath(L"/cells/{name}/split");
        if (!m_Name) throw aspose::cells::cloud::ApiException(400, L"Parameter 'Name' is required.");
        result->setPathParam(L"{name}", *m_Name);
        if (m_Format) result->addQueryParam(L"format", *m_Format);
        if (m_From) result->addQueryParam(L"from", *m_From);
        if (m_To) result->addQueryParam(L"to", *m_To);
        if (m_HorizontalResolution) result->addQueryParam(L"horizontalResolution", *m_HorizontalResolution);
        if (m_VerticalResolution) result->addQueryParam(L"verticalResolution", *m_VerticalResolution);
        if (m_Folder) result->addQueryParam(L"folder", *m_Folder);
        if (m_OutFolder) result->addQueryParam(L"outFolder", *m_OutFolder);
        if (m_StorageName) result->addQueryParam(L"storageName", *m_StorageName);
        if (m_OutStorageName) result->addQueryParam(L"outStorageName", *m_OutStorageName);
        return result;
    }

    std::shared_ptr< aspose::cells::cloud::responses::ResponseModelBase > PostWorkbookSplitRequest::createResponse() const
    {
        return std::shared_ptr< aspose::cells::cloud::responses::ResponseModelBase >(
            new aspose::cells::cloud::responses::PostWorkbookSplitResponse()
        );
    }
    /*
     * PostSplitRequest implementation
     */

    PostSplitRequest::PostSplitRequest(
            const std::shared_ptr< std::map< std::wstring ,std::shared_ptr<  std::istream >>> files,
            const std::shared_ptr< std::wstring > format,
            const std::shared_ptr< std::wstring > password,
            const std::shared_ptr< int > from,
            const std::shared_ptr< int > to,
            const std::shared_ptr< bool > checkExcelRestriction
    ) : 
            m_Files(files),
            m_Format(format),
            m_Password(password),
            m_From(from),
            m_To(to),
            m_CheckExcelRestriction(checkExcelRestriction)
    {
    }

    const std::shared_ptr< std::map< std::wstring ,std::shared_ptr<  std::istream >>> PostSplitRequest::getFiles() const
    {
        return m_Files;
    }
    const std::shared_ptr< std::wstring > PostSplitRequest::getFormat() const
    {
        return m_Format;
    }
    const std::shared_ptr< std::wstring > PostSplitRequest::getPassword() const
    {
        return m_Password;
    }
    const std::shared_ptr< int > PostSplitRequest::getFrom() const
    {
        return m_From;
    }
    const std::shared_ptr< int > PostSplitRequest::getTo() const
    {
        return m_To;
    }
    const std::shared_ptr< bool > PostSplitRequest::getCheckExcelRestriction() const
    {
        return m_CheckExcelRestriction;
    }

    std::shared_ptr< aspose::cells::cloud::HttpRequestData > PostSplitRequest::createHttpRequest() const
    {
        auto result = std::make_shared<HttpRequestData>();
        result->setMethod(HttpRequestMethod::HttpPOST);
        result->setPath(L"/cells/split");
        if (!m_Files) throw aspose::cells::cloud::ApiException(400, L"Parameter 'Files' is required.");
        for(std::map< std::wstring ,std::shared_ptr<  std::istream > >::iterator it=m_Files->begin();it!=m_Files->end();it++)
        {             
            result->addFormDataParam(it->first, *(it->second));   
        }     
        if (m_Format) result->addQueryParam(L"format", *m_Format);
        if (m_Password) result->addQueryParam(L"password", *m_Password);
        if (m_From) result->addQueryParam(L"from", *m_From);
        if (m_To) result->addQueryParam(L"to", *m_To);
        if (m_CheckExcelRestriction) result->addQueryParam(L"checkExcelRestriction", *m_CheckExcelRestriction?"true":"false"); 
        return result;
    }

    std::shared_ptr< aspose::cells::cloud::responses::ResponseModelBase > PostSplitRequest::createResponse() const
    {
        return std::shared_ptr< aspose::cells::cloud::responses::ResponseModelBase >(
            new aspose::cells::cloud::responses::PostSplitResponse()
        );
    }
    
    /*
     * PostMergeRequest implementation
     */

    PostMergeRequest::PostMergeRequest(
            std::shared_ptr< std::map< std::wstring ,std::shared_ptr<  std::istream >> > files,
            const std::shared_ptr< std::wstring > format,
            const std::shared_ptr< bool > mergeToOneSheet,
            const std::shared_ptr< bool > checkExcelRestriction
    ) : 
            // m_File(file),
            m_Files(files),
            m_Format(format),
            m_MergeToOneSheet(mergeToOneSheet),
            m_CheckExcelRestriction(checkExcelRestriction)
    {
    }

    const std::shared_ptr< bool > PostMergeRequest::getCheckExcelRestriction() const
    {
        return m_CheckExcelRestriction;
    }
    const std::shared_ptr< std::map< std::wstring,std::shared_ptr<  std::istream >> > PostMergeRequest::getFiles() const
    {
        return m_Files;
    }
    const std::shared_ptr< std::wstring > PostMergeRequest::getFormat() const
    {
        return m_Format;
    }
    const std::shared_ptr< bool > PostMergeRequest::getMergeToOneSheet() const
    {
        return m_MergeToOneSheet;
    }

    std::shared_ptr< aspose::cells::cloud::HttpRequestData > PostMergeRequest::createHttpRequest() const
    {
        auto result = std::make_shared<HttpRequestData>();
        result->setMethod(HttpRequestMethod::HttpPOST);
        result->setPath(L"/cells/merge");
        if (!m_Files) throw aspose::cells::cloud::ApiException(400, L"Parameter 'Files' is required.");
        for(std::map< std::wstring ,std::shared_ptr<  std::istream > >::iterator it=m_Files->begin();it!=m_Files->end();it++)
        {             
            result->addFormDataParam(it->first, *(it->second));   
        }
        if (m_Format) result->addQueryParam(L"format", *m_Format);
        if (m_MergeToOneSheet) result->addQueryParam(L"mergeToOneSheet", *m_MergeToOneSheet);
        if (m_CheckExcelRestriction) result->addQueryParam(L"checkExcelRestriction", *m_CheckExcelRestriction?"true":"false");         
        return result;
    }

    std::shared_ptr< aspose::cells::cloud::responses::ResponseModelBase > PostMergeRequest::createResponse() const
    {
        return std::shared_ptr< aspose::cells::cloud::responses::ResponseModelBase >(
            new aspose::cells::cloud::responses::PostMergeResponse()
        );
    }    
    /*
     * PostWorkbooksMergeRequest implementation
     */

    PostWorkbooksMergeRequest::PostWorkbooksMergeRequest(
            const std::shared_ptr< std::wstring > name,
            const std::shared_ptr< std::wstring > mergeWith,
            const std::shared_ptr< std::wstring > folder,
            const std::shared_ptr< std::wstring > storageName,
            const std::shared_ptr< std::wstring > mergedStorageName
    ) : 
            m_Name(name),
            m_MergeWith(mergeWith),
            m_Folder(folder),
            m_StorageName(storageName),
            m_MergedStorageName(mergedStorageName)
    {
    }

    const std::shared_ptr< std::wstring > PostWorkbooksMergeRequest::getName() const
    {
        return m_Name;
    }
    const std::shared_ptr< std::wstring > PostWorkbooksMergeRequest::getMergeWith() const
    {
        return m_MergeWith;
    }
    const std::shared_ptr< std::wstring > PostWorkbooksMergeRequest::getFolder() const
    {
        return m_Folder;
    }
    const std::shared_ptr< std::wstring > PostWorkbooksMergeRequest::getStorageName() const
    {
        return m_StorageName;
    }
    const std::shared_ptr< std::wstring > PostWorkbooksMergeRequest::getMergedStorageName() const
    {
        return m_MergedStorageName;
    }

    std::shared_ptr< aspose::cells::cloud::HttpRequestData > PostWorkbooksMergeRequest::createHttpRequest() const
    {
        auto result = std::make_shared<HttpRequestData>();
        result->setMethod(HttpRequestMethod::HttpPOST);
        result->setPath(L"/cells/{name}/merge");
        if (!m_Name) throw aspose::cells::cloud::ApiException(400, L"Parameter 'Name' is required.");
        result->setPathParam(L"{name}", *m_Name);
        if (!m_MergeWith) throw aspose::cells::cloud::ApiException(400, L"Parameter 'MergeWith' is required.");
        if (m_MergeWith) result->addQueryParam(L"mergeWith", *m_MergeWith);
        else throw aspose::cells::cloud::ApiException(400, L"Parameter 'MergeWith' is required.");
        if (m_Folder) result->addQueryParam(L"folder", *m_Folder);
        if (m_StorageName) result->addQueryParam(L"storageName", *m_StorageName);
        if (m_MergedStorageName) result->addQueryParam(L"mergedStorageName", *m_MergedStorageName);
        return result;
    }

    std::shared_ptr< aspose::cells::cloud::responses::ResponseModelBase > PostWorkbooksMergeRequest::createResponse() const
    {
        return std::shared_ptr< aspose::cells::cloud::responses::ResponseModelBase >(
            new aspose::cells::cloud::responses::PostWorkbooksMergeResponse()
        );
    }
    /*
     * PostBatchConvertRequest implementation
     */

    PostBatchConvertRequest::PostBatchConvertRequest(
            const std::shared_ptr< aspose::cells::cloud::models::BatchConvertRequest > batchConvertRequest
    ) : 
            m_BatchConvertRequest(batchConvertRequest)
    {
    }

    const std::shared_ptr< aspose::cells::cloud::models::BatchConvertRequest > PostBatchConvertRequest::getBatchConvertRequest() const
    {
        return m_BatchConvertRequest;
    }

    std::shared_ptr< aspose::cells::cloud::HttpRequestData > PostBatchConvertRequest::createHttpRequest() const
    {
        auto result = std::make_shared<HttpRequestData>();
        result->setMethod(HttpRequestMethod::HttpPOST);
        result->setPath(L"/cells/batch/convert");
        if (!m_BatchConvertRequest) throw aspose::cells::cloud::ApiException(400, L"Parameter 'BatchConvertRequest' is required.");
        if (m_BatchConvertRequest) result->setBody(*m_BatchConvertRequest);
        return result;
    }

    std::shared_ptr< aspose::cells::cloud::responses::ResponseModelBase > PostBatchConvertRequest::createResponse() const
    {
        return std::shared_ptr< aspose::cells::cloud::responses::ResponseModelBase >(
            new aspose::cells::cloud::responses::PostBatchConvertResponse()
        );
    }
    /*
     * PostCompressRequest implementation
     */

    PostCompressRequest::PostCompressRequest(
            std::shared_ptr< std::map< std::wstring ,std::shared_ptr<  std::istream >> > files,
            const std::shared_ptr< int > CompressLevel,
            const std::shared_ptr< std::wstring > password ,
            const std::shared_ptr< bool > checkExcelRestriction 
    ) : 
            m_Files(files),
            m_CompressLevel(CompressLevel),
            m_Password(password),
            m_CheckExcelRestriction(checkExcelRestriction)
    {
    }

    const std::shared_ptr< std::map< std::wstring ,std::shared_ptr<  std::istream >>> PostCompressRequest::getFiles() const
    {
        return m_Files;
    }

    const std::shared_ptr< int > PostCompressRequest::getCompressLevel() const
    {
        return m_CompressLevel;
    }
    const std::shared_ptr< std::wstring > PostCompressRequest::getPassword() const
    {
        return m_Password;
    }
    const std::shared_ptr< bool > PostCompressRequest::getCheckExcelRestriction() const
    {
        return m_CheckExcelRestriction;
    }
    std::shared_ptr< aspose::cells::cloud::HttpRequestData > PostCompressRequest::createHttpRequest() const
    {
        auto result = std::make_shared<HttpRequestData>();
        result->setMethod(HttpRequestMethod::HttpPOST);
        result->setPath(L"/cells/compress");
        if (!m_Files) throw aspose::cells::cloud::ApiException(400, L"Parameter 'Files' is required.");
        for(std::map< std::wstring ,std::shared_ptr<  std::istream > >::iterator it=m_Files->begin();it!=m_Files->end();it++)
        {             
            result->addFormDataParam(it->first, *(it->second));   
        }
        if (!m_CompressLevel) throw aspose::cells::cloud::ApiException(400, L"Parameter 'CompressLevel' is required.");
        if (m_CompressLevel) result->addQueryParam(L"CompressLevel", *m_CompressLevel);        
        if (m_Password) result->addQueryParam(L"password", *m_Password);
        if (m_CheckExcelRestriction) result->addQueryParam(L"checkExcelRestriction", *m_CheckExcelRestriction?"true":"false"); 
        
        return result;
    }

    std::shared_ptr< aspose::cells::cloud::responses::ResponseModelBase > PostCompressRequest::createResponse() const
    {
        return std::shared_ptr< aspose::cells::cloud::responses::ResponseModelBase >(
            new aspose::cells::cloud::responses::PostCompressResponse()
        );
    }    

    /*
     * PostReplaceRequest implementation
     */

    PostReplaceRequest::PostReplaceRequest(
            std::shared_ptr< std::map< std::wstring ,std::shared_ptr<  std::istream >> > files,
            const std::shared_ptr< std::wstring > text,
            const std::shared_ptr< std::wstring > newtext,
            const std::shared_ptr< std::wstring > password,
            const std::shared_ptr< bool > checkExcelRestriction
    ) : 
            m_Files(files),
            m_Text(text),
            m_Newtext(newtext),
            m_Password(password),
            m_CheckExcelRestriction(checkExcelRestriction)
    {
    }

    const std::shared_ptr< std::map< std::wstring ,std::shared_ptr<  std::istream >>> PostReplaceRequest::getFiles() const
    {
        return m_Files;
    }

    const std::shared_ptr<  std::wstring > PostReplaceRequest::getText() const
    {
        return m_Text;
    }
    const std::shared_ptr<  std::wstring > PostReplaceRequest::getNewtext() const
    {
        return m_Newtext;
    }
    const std::shared_ptr<  std::wstring > PostReplaceRequest::getPassword() const
    {
        return m_Password;
    }    
    const std::shared_ptr< bool > PostReplaceRequest::getCheckExcelRestriction() const
    {
        return m_CheckExcelRestriction;
    }    
    std::shared_ptr< aspose::cells::cloud::HttpRequestData > PostReplaceRequest::createHttpRequest() const
    {
        auto result = std::make_shared<HttpRequestData>();
        result->setMethod(HttpRequestMethod::HttpPOST);
        result->setPath(L"/cells/replace");
        if (!m_Files) throw aspose::cells::cloud::ApiException(400, L"Parameter 'Files' is required.");
        for(std::map< std::wstring ,std::shared_ptr<  std::istream > >::iterator it=m_Files->begin();it!=m_Files->end();it++)
        {             
            result->addFormDataParam(it->first, *(it->second));   
        }
        if (!m_Text) throw aspose::cells::cloud::ApiException(400, L"Parameter 'text' is required.");
        if (m_Text) result->addQueryParam(L"text", *m_Text);
        if (!m_Newtext) throw aspose::cells::cloud::ApiException(400, L"Parameter 'newtext' is required.");
        if (m_Newtext) result->addQueryParam(L"newtext", *m_Newtext);        
        if (m_Password) result->addQueryParam(L"password", *m_Password);        
        if (m_CheckExcelRestriction) result->addQueryParam(L"checkExcelRestriction", *m_CheckExcelRestriction?"true":"false"); 
        return result;
    }

    std::shared_ptr< aspose::cells::cloud::responses::ResponseModelBase > PostReplaceRequest::createResponse() const
    {
        return std::shared_ptr< aspose::cells::cloud::responses::ResponseModelBase >(
            new aspose::cells::cloud::responses::PostReplaceResponse()
        );
    }   

    /*
     * PostClearObjectsRequest implementation
     */

    PostClearObjectsRequest::PostClearObjectsRequest(
            std::shared_ptr< std::map< std::wstring ,std::shared_ptr<  std::istream >> > files,
            const std::shared_ptr< std::wstring > objecttype,
            const std::shared_ptr< std::wstring > sheetname,
            const std::shared_ptr< bool > checkExcelRestriction 
    ) : 
            m_Files(files),
            m_ObjectType(objecttype),
            m_SheetName(sheetname),
            m_CheckExcelRestriction(checkExcelRestriction)
    {
    }

    const std::shared_ptr< std::map< std::wstring ,std::shared_ptr<  std::istream >>> PostClearObjectsRequest::getFiles() const
    {
        return m_Files;
    }

    const std::shared_ptr<  std::wstring > PostClearObjectsRequest::getObjectType() const
    {
        return m_ObjectType;
    }
    const std::shared_ptr<  std::wstring > PostClearObjectsRequest::getSheetName() const
    {
        return m_SheetName;
    }
    const std::shared_ptr< bool > PostClearObjectsRequest::getCheckExcelRestriction() const
    {
        return m_CheckExcelRestriction;
    }
    std::shared_ptr< aspose::cells::cloud::HttpRequestData > PostClearObjectsRequest::createHttpRequest() const
    {
        auto result = std::make_shared<HttpRequestData>();
        result->setMethod(HttpRequestMethod::HttpPOST);
        result->setPath(L"/cells/clearobjects");
        if (!m_Files) throw aspose::cells::cloud::ApiException(400, L"Parameter 'Files' is required.");
        for(std::map< std::wstring ,std::shared_ptr<  std::istream > >::iterator it=m_Files->begin();it!=m_Files->end();it++)
        {             
            result->addFormDataParam(it->first, *(it->second));   
        }
        if (!m_ObjectType) throw aspose::cells::cloud::ApiException(400, L"Parameter 'objecttype' is required.");
        if (m_ObjectType) result->addQueryParam(L"objecttype", *m_ObjectType);
        if (m_SheetName) result->addQueryParam(L"sheetname", *m_SheetName);     
        if (m_CheckExcelRestriction) result->addQueryParam(L"checkExcelRestriction", *m_CheckExcelRestriction?"true":"false");   
        return result;
    }

    std::shared_ptr< aspose::cells::cloud::responses::ResponseModelBase > PostClearObjectsRequest::createResponse() const
    {
        return std::shared_ptr< aspose::cells::cloud::responses::ResponseModelBase >(
            new aspose::cells::cloud::responses::PostClearObjectsResponse()
        );
    }   
 /*
     * PostWatermarkRequest implementation
     */

    PostWatermarkRequest::PostWatermarkRequest(
            std::shared_ptr< std::map< std::wstring ,std::shared_ptr<  std::istream >> > files,
            const std::shared_ptr< std::wstring > text,
            const std::shared_ptr< std::wstring > color,
            const std::shared_ptr< bool > checkExcelRestriction
    ) : 
            m_Files(files),
            m_Text(text),
            m_Color(color),
            m_CheckExcelRestriction(checkExcelRestriction)
    {
    }

    const std::shared_ptr< std::map< std::wstring ,std::shared_ptr<  std::istream >>> PostWatermarkRequest::getFiles() const
    {
        return m_Files;
    }

    const std::shared_ptr<  std::wstring > PostWatermarkRequest::getText() const
    {
        return m_Text;
    }
    const std::shared_ptr<  std::wstring > PostWatermarkRequest::getColor() const
    {
        return m_Color;
    }
    const std::shared_ptr< bool > PostWatermarkRequest::getCheckExcelRestriction() const
    {
        return m_CheckExcelRestriction;
    }
    std::shared_ptr< aspose::cells::cloud::HttpRequestData > PostWatermarkRequest::createHttpRequest() const
    {
        auto result = std::make_shared<HttpRequestData>();
        result->setMethod(HttpRequestMethod::HttpPOST);
        result->setPath(L"/cells/watermark");
        if (!m_Files) throw aspose::cells::cloud::ApiException(400, L"Parameter 'Files' is required.");
        for(std::map< std::wstring ,std::shared_ptr<  std::istream > >::iterator it=m_Files->begin();it!=m_Files->end();it++)
        {             
            result->addFormDataParam(it->first, *(it->second));   
        }
        if (!m_Text) throw aspose::cells::cloud::ApiException(400, L"Parameter 'text' is required.");
        if (!m_Color) throw aspose::cells::cloud::ApiException(400, L"Parameter 'color' is required.");
        if (m_Text) result->addQueryParam(L"text", *m_Text);
        if (m_Color) result->addQueryParam(L"color", *m_Color);     
        if (m_CheckExcelRestriction) result->addQueryParam(L"checkExcelRestriction", *m_CheckExcelRestriction?"true":"false");   
        return result;
    }

    std::shared_ptr< aspose::cells::cloud::responses::ResponseModelBase > PostWatermarkRequest::createResponse() const
    {
        return std::shared_ptr< aspose::cells::cloud::responses::ResponseModelBase >(
            new aspose::cells::cloud::responses::PostWatermarkResponse()
        );
    }   


     /*
     * PostReverseRequest implementation
     */

    PostReverseRequest::PostReverseRequest(
            std::shared_ptr< std::map< std::wstring ,std::shared_ptr<  std::istream >> > files,
            const std::shared_ptr< std::wstring > rotatetype,
            const std::shared_ptr< std::wstring > format,
            const std::shared_ptr< bool > checkExcelRestriction
    ) : 
            m_Files(files),
            m_RotateType(rotatetype),
            m_Format(format),
            m_CheckExcelRestriction(checkExcelRestriction)
    {
    }

    const std::shared_ptr< std::map< std::wstring ,std::shared_ptr<  std::istream >>> PostReverseRequest::getFiles() const
    {
        return m_Files;
    }

    const std::shared_ptr<  std::wstring > PostReverseRequest::getRotateType() const
    {
        return m_RotateType;
    }
    const std::shared_ptr<  std::wstring > PostReverseRequest::getFormat() const
    {
        return m_Format;
    }
    const std::shared_ptr< bool > PostReverseRequest::getCheckExcelRestriction() const
    {
        return m_CheckExcelRestriction;
    }
    std::shared_ptr< aspose::cells::cloud::HttpRequestData > PostReverseRequest::createHttpRequest() const
    {
        auto result = std::make_shared<HttpRequestData>();
        result->setMethod(HttpRequestMethod::HttpPOST);
        result->setPath(L"/cells/reverse");
        if (!m_Files) throw aspose::cells::cloud::ApiException(400, L"Parameter 'Files' is required.");
        for(std::map< std::wstring ,std::shared_ptr<  std::istream > >::iterator it=m_Files->begin();it!=m_Files->end();it++)
        {             
            result->addFormDataParam(it->first, *(it->second));   
        }
        if (!m_RotateType) throw aspose::cells::cloud::ApiException(400, L"Parameter 'RotateType' is required.");
        if (m_RotateType) result->addQueryParam(L"rotateType", *m_RotateType);
        if (m_Format) result->addQueryParam(L"format", *m_Format);       
        if (m_CheckExcelRestriction) result->addQueryParam(L"checkExcelRestriction", *m_CheckExcelRestriction?"true":"false"); 
        return result;
    }

    std::shared_ptr< aspose::cells::cloud::responses::ResponseModelBase > PostReverseRequest::createResponse() const
    {
        return std::shared_ptr< aspose::cells::cloud::responses::ResponseModelBase >(
            new aspose::cells::cloud::responses::PostReverseResponse()
        );
    }   

    
     /*
     * PostDigitalSignatureRequest implementation
     */

    PostDigitalSignatureRequest::PostDigitalSignatureRequest(
            const std::shared_ptr< std::wstring > name,
            const std::shared_ptr< std::wstring > digitalsignaturefile ,
            const std::shared_ptr< std::wstring > password ,
            const std::shared_ptr< std::wstring > folder ,
            const std::shared_ptr< std::wstring > storageName 
    ) : 
            m_Name(name),
            m_DigitalSignatureFile(digitalsignaturefile),
            m_Password(password),
            m_Folder(folder),
            m_StorageName(storageName)
    {
    }

    const std::shared_ptr< std::wstring> PostDigitalSignatureRequest::getName() const
    {
        return m_Name;
    }

    const std::shared_ptr<  std::wstring > PostDigitalSignatureRequest::getDigitalSignatureFile() const
    {
        return m_DigitalSignatureFile;
    }

    const std::shared_ptr<  std::wstring > PostDigitalSignatureRequest::getPassword() const
    {
        return m_Password;
    }

    const std::shared_ptr<  std::wstring > PostDigitalSignatureRequest::getFolder() const
    {
        return m_Folder;
    }

    const std::shared_ptr<  std::wstring > PostDigitalSignatureRequest::getStorageName() const
    {
        return m_StorageName;
    }
 
    std::shared_ptr< aspose::cells::cloud::HttpRequestData > PostDigitalSignatureRequest::createHttpRequest() const
    {
        auto result = std::make_shared<HttpRequestData>();
        result->setMethod(HttpRequestMethod::HttpPOST);
        result->setPath(L"/cells/{name}/digitalsignature");
        if (!m_Name) throw aspose::cells::cloud::ApiException(400, L"Parameter 'Name' is required.");
        result->setPathParam(L"{name}", *m_Name);
        if (!m_DigitalSignatureFile) throw aspose::cells::cloud::ApiException(400, L"Parameter 'DigitalSignatureFile' is required.");
        result->addQueryParam(L"digitalsignaturefile", *m_DigitalSignatureFile);
        if (!m_Password) throw aspose::cells::cloud::ApiException(400, L"Parameter 'Password' is required.");
        result->addQueryParam(L"password", *m_Password);

        if (m_Folder) result->addQueryParam(L"folder", *m_Folder);
        if (m_StorageName) result->addQueryParam(L"storageName", *m_StorageName);
        return result;
    }

    std::shared_ptr< aspose::cells::cloud::responses::ResponseModelBase > PostDigitalSignatureRequest::createResponse() const
    {
        return std::shared_ptr< aspose::cells::cloud::responses::ResponseModelBase >(
            new aspose::cells::cloud::responses::PostDigitalSignatureResponse()
        );
    }

     /*
     * PostRotateRequest implementation
     */

    PostRotateRequest::PostRotateRequest(
            std::shared_ptr< std::map< std::wstring ,std::shared_ptr<  std::istream >> > files,
            const std::shared_ptr< std::wstring > rotatetype,
            const std::shared_ptr< std::wstring > format,
            const std::shared_ptr< bool > checkExcelRestriction
    ) : 
            m_Files(files),
            m_RotateType(rotatetype),
            m_Format(format),
            m_CheckExcelRestriction(checkExcelRestriction)
    {
    }

    const std::shared_ptr< std::map< std::wstring ,std::shared_ptr<  std::istream >>> PostRotateRequest::getFiles() const
    {
        return m_Files;
    }

    const std::shared_ptr<  std::wstring > PostRotateRequest::getRotateType() const
    {
        return m_RotateType;
    }
    const std::shared_ptr<  std::wstring > PostRotateRequest::getFormat() const
    {
        return m_Format;
    }
    const std::shared_ptr< bool > PostRotateRequest::getCheckExcelRestriction() const
    {
        return m_CheckExcelRestriction;
    }
    std::shared_ptr< aspose::cells::cloud::HttpRequestData > PostRotateRequest::createHttpRequest() const
    {
        auto result = std::make_shared<HttpRequestData>();
        result->setMethod(HttpRequestMethod::HttpPOST);
        result->setPath(L"/cells/reverse");
        if (!m_Files) throw aspose::cells::cloud::ApiException(400, L"Parameter 'Files' is required.");
        for(std::map< std::wstring ,std::shared_ptr<  std::istream > >::iterator it=m_Files->begin();it!=m_Files->end();it++)
        {             
            result->addFormDataParam(it->first, *(it->second));   
        }
        if (!m_RotateType) throw aspose::cells::cloud::ApiException(400, L"Parameter 'RotateType' is required.");
        if (m_RotateType) result->addQueryParam(L"rotateType", *m_RotateType);
        if (m_Format) result->addQueryParam(L"format", *m_Format);       
        if (m_CheckExcelRestriction) result->addQueryParam(L"checkExcelRestriction", *m_CheckExcelRestriction?"true":"false"); 
        return result;
    }

    std::shared_ptr< aspose::cells::cloud::responses::ResponseModelBase > PostRotateRequest::createResponse() const
    {
        return std::shared_ptr< aspose::cells::cloud::responses::ResponseModelBase >(
            new aspose::cells::cloud::responses::PostReverseResponse()
        );
    }   

}
