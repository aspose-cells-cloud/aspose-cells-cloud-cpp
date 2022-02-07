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
// #include <iostream>
// #include <fstream>
// #include <filesystem>
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
        // const std::shared_ptr< std::wstring > path,
        const std::shared_ptr< std::wstring > format,
        // const std::shared_ptr< std::wstring > filename,
        const std::shared_ptr< std::istream > fileStream,
        const std::shared_ptr< std::wstring > outPath,
        const std::shared_ptr< std::wstring > storageName,
        const std::shared_ptr< std::wstring > password
    ) : 
        // m_Path(path),
        m_Format(format),
        // m_Filename(filename),
        m_FileStream(fileStream),
        m_OutPath(outPath),              
        m_StorageName(storageName),
        m_Password(password)
    {
    }

    // const std::shared_ptr< std::wstring > ConvertRequest::getPath() const
    // {
    //     return m_Path;
    // }
    const std::shared_ptr< std::wstring > ConvertRequest::getOutPath() const
    {
        return m_OutPath;
    }
    const std::shared_ptr< std::wstring > ConvertRequest::getFormat() const
    {
        return m_Format;
    }
    // const std::shared_ptr< std::wstring > ConvertRequest::getFilename() const
    // {
    //     return m_Filename;
    // }
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
        const std::shared_ptr< std::wstring > outStorageName
    ) : 
        m_Name(name),
        m_Format(format),
        m_Password(password),        
        m_IsAutoFit(isAutoFit),
        m_OnlySaveTable(onlySaveTable),
        m_Folder(folder),
        m_StorageName(storageName),
        m_OutPath(outPath),
        m_OutStorageName(outStorageName)
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
        const std::shared_ptr< std::istream > fileStream,
        const std::shared_ptr< std::wstring > password
        // const std::shared_ptr< bool > saveToCloud,
        // const std::shared_ptr< std::wstring > outPath,
        // const std::shared_ptr< std::wstring > storageName
       
    ) : 
        m_FileStream(fileStream),
        m_Password(password)
        // m_SaveToCloud(saveToCloud),
        // m_OutPath(outPath),              
        // m_StorageName(storageName)
    {
    }

    // const std::shared_ptr< std::wstring > ProtectWorkbookRequest::getOutPath() const
    // {
    //     return m_OutPath;
    // }

    // const std::shared_ptr< bool > ProtectWorkbookRequest::getSaveToCloud() const
    // {
    //     return m_SaveToCloud;
    // }
    
    const std::shared_ptr< std::istream > ProtectWorkbookRequest::getFileStream() const
    {
        return m_FileStream;
    }
    // const std::shared_ptr< std::wstring > ProtectWorkbookRequest::getStorageName() const
    // {
    //     return m_StorageName;
    // }
    const std::shared_ptr< std::wstring > ProtectWorkbookRequest::getPassword() const
    {
        return m_Password;
    }
    std::shared_ptr< aspose::cells::cloud::HttpRequestData > ProtectWorkbookRequest::createHttpRequest() const
    {
        auto result = std::make_shared<HttpRequestData>();
        result->setMethod(HttpRequestMethod::HttpPOST);
        result->setPath(L"/cells/protect");
        // if (!m_Format) throw aspose::cells::cloud::ApiException(400, L"Parameter 'm_Format' is required.");        
        // if (m_Format) result->addQueryParam(L"format", *m_Format);
        if (m_Password) result->addQueryParam(L"password", *m_Password);
        // if (m_OutPath) result->addQueryParam(L"outPath", *m_OutPath);
        // if (m_StorageName) result->addQueryParam(L"storageName", *m_StorageName);
        // result->setBody(*m_FileStream);
        result->addFormDataParam(L"Book1.xlsx",*m_FileStream);
        return result;
    }

    std::shared_ptr< aspose::cells::cloud::responses::ResponseModelBase > ProtectWorkbookRequest::createResponse() const
    {
        return std::shared_ptr< aspose::cells::cloud::responses::ResponseModelBase >(
            new aspose::cells::cloud::responses::ProtectWorkbookResponse()
        );
    }

}