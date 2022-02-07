/** --------------------------------------------------------------------------------------------------------------------
* <copyright company="Aspose" file="cells_api.h">
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
#include <vector>
#include "aspose_cells_cloud/common.h"
#include "aspose_cells_cloud/api_client.h"
#include "aspose_cells_cloud/requests/copy_file_request.h"
#include "aspose_cells_cloud/requests/copy_folder_request.h"
#include "aspose_cells_cloud/requests/convert_request.h"
#include "aspose_cells_cloud/requests/create_folder_request.h"
#include "aspose_cells_cloud/requests/delete_file_request.h"
#include "aspose_cells_cloud/requests/delete_folder_request.h"
#include "aspose_cells_cloud/requests/download_file_request.h"
#include "aspose_cells_cloud/requests/get_public_key_request.h"
#include "aspose_cells_cloud/requests/get_files_list_request.h"
#include "aspose_cells_cloud/requests/move_file_request.h"
#include "aspose_cells_cloud/requests/move_folder_request.h"
#include "aspose_cells_cloud/requests/upload_file_request.h"
#include "aspose_cells_cloud/responses/create_folder_response.h"
#include "aspose_cells_cloud/responses/copy_file_response.h"
#include "aspose_cells_cloud/responses/copy_folder_response.h"
#include "aspose_cells_cloud/responses/delete_file_response.h"
#include "aspose_cells_cloud/responses/delete_folder_response.h"
#include "aspose_cells_cloud/responses/download_file_response.h"
#include "aspose_cells_cloud/responses/get_files_list_response.h"
#include "aspose_cells_cloud/responses/get_public_key_response.h"
#include "aspose_cells_cloud/responses/move_file_response.h"
#include "aspose_cells_cloud/responses/move_folder_response.h"
#include "aspose_cells_cloud/responses/upload_file_response.h"

namespace aspose::cells::cloud::api {
    class CellsApi
    {
    public:


        /// <summary>
        /// Copy file.
        /// </summary>
        /// <param name="destPath">Destination file path.</param>
        /// <param name="srcPath">Source file's path e.g. '/Folder 1/file.ext' or '/Bucket/Folder 1/file.ext'.</param>
        /// <param name="srcStorageName">Source storage name.</param>
        /// <param name="destStorageName">Destination storage name.</param>
        /// <param name="versionId">File version ID to copy.</param>
        ASPOSE_CELLS_CLOUD_EXPORT void copyFile(std::shared_ptr<aspose::cells::cloud::requests::CopyFileRequest> request);

        /// <summary>
        /// Copy folder.
        /// </summary>
        /// <param name="destPath">Destination folder path e.g. '/dst'.</param>
        /// <param name="srcPath">Source folder path e.g. /Folder1.</param>
        /// <param name="srcStorageName">Source storage name.</param>
        /// <param name="destStorageName">Destination storage name.</param>
        ASPOSE_CELLS_CLOUD_EXPORT void copyFolder(std::shared_ptr<aspose::cells::cloud::requests::CopyFolderRequest> request);

        /// <summary>
        /// Create the folder.
        /// </summary>
        /// <param name="path">Target folder's path e.g. Folder1/Folder2/. The folders will be created recursively.</param>
        /// <param name="storageName">Storage name.</param>
        ASPOSE_CELLS_CLOUD_EXPORT void createFolder(std::shared_ptr<aspose::cells::cloud::requests::CreateFolderRequest> request);


        /// <summary>
        /// Delete file.
        /// </summary>
        /// <param name="path">Path of the file including the file name and extension e.g. /folder1/file.ext.</param>
        /// <param name="storageName">Storage name.</param>
        /// <param name="versionId">File version ID to delete.</param>
        ASPOSE_CELLS_CLOUD_EXPORT void deleteFile(std::shared_ptr<aspose::cells::cloud::requests::DeleteFileRequest> request);

        /// <summary>
        /// Delete folder.
        /// </summary>
        /// <param name="path">Folder path e.g. '/folder'.</param>
        /// <param name="storageName">Storage name.</param>
        /// <param name="recursive">Enable to delete folders, subfolders and files.</param>
        ASPOSE_CELLS_CLOUD_EXPORT void deleteFolder(std::shared_ptr<aspose::cells::cloud::requests::DeleteFolderRequest> request);

        /// <summary>
        /// Download file.
        /// </summary>
        /// <param name="path">Path of the file including the file name and extension e.g. /folder1/file.ext.</param>
        /// <param name="storageName">Storage name.</param>
        /// <param name="versionId">File version ID to download.</param>
        ASPOSE_CELLS_CLOUD_EXPORT std::shared_ptr< std::istream > downloadFile(std::shared_ptr<aspose::cells::cloud::requests::DownloadFileRequest> request);

        // /// <summary>
        // /// Converts a document in cloud storage to the specified format.
        // /// </summary>
        // /// <param name="name">The filename of the input document.</param>
        // /// <param name="format">The destination format.</param>
        // /// <param name="folder">Original document folder.</param>
        // /// <param name="storage">Original document storage.</param>
        // /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        // /// <param name="password">Password for opening an encrypted document.</param>
        // /// <param name="outPath">The path to the output document.</param>
        // /// <param name="fontsLocation">Folder in filestorage with custom fonts.</param>
        // ASPOSE_CELLS_CLOUD_EXPORT std::shared_ptr< std::istream > getDocumentWithFormat(std::shared_ptr<aspose::cells::cloud::requests::GetDocumentWithFormatRequest> request);

        /// <summary>
        /// Get all files and folders within a folder.
        /// </summary>
        /// <param name="path">Folder path e.g. '/folder'.</param>
        /// <param name="storageName">Storage name.</param>
        ASPOSE_CELLS_CLOUD_EXPORT std::shared_ptr< aspose::cells::cloud::models::FilesList > getFilesList(std::shared_ptr<aspose::cells::cloud::requests::GetFilesListRequest> request);

        /// <summary>
        /// Get assymetric public key.
        /// </summary>
        ASPOSE_CELLS_CLOUD_EXPORT std::shared_ptr< aspose::cells::cloud::models::PublicKeyResponse > getPublicKey(std::shared_ptr<aspose::cells::cloud::requests::GetPublicKeyRequest> request);

        /// <summary>
        /// Move file.
        /// </summary>
        /// <param name="destPath">Destination file path e.g. '/dest.ext'.</param>
        /// <param name="srcPath">Source file's path e.g. '/Folder 1/file.ext' or '/Bucket/Folder 1/file.ext'.</param>
        /// <param name="srcStorageName">Source storage name.</param>
        /// <param name="destStorageName">Destination storage name.</param>
        /// <param name="versionId">File version ID to move.</param>
        ASPOSE_CELLS_CLOUD_EXPORT void moveFile(std::shared_ptr<aspose::cells::cloud::requests::MoveFileRequest> request);

        /// <summary>
        /// Move folder.
        /// </summary>
        /// <param name="destPath">Destination folder path to move to e.g '/dst'.</param>
        /// <param name="srcPath">Source folder path e.g. /Folder1.</param>
        /// <param name="srcStorageName">Source storage name.</param>
        /// <param name="destStorageName">Destination storage name.</param>
        ASPOSE_CELLS_CLOUD_EXPORT void moveFolder(std::shared_ptr<aspose::cells::cloud::requests::MoveFolderRequest> request);


        // /// <summary>
        // /// Replaces text in the document.
        // /// </summary>
        // /// <param name="name">The filename of the input document.</param>
        // /// <param name="replaceText">The replace operation settings.</param>
        // /// <param name="folder">Original document folder.</param>
        // /// <param name="storage">Original document storage.</param>
        // /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        // /// <param name="password">Password for opening an encrypted document.</param>
        // /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        // /// <param name="revisionAuthor">Initials of the author to use for revisions.If you set this parameter and then make some changes to the document programmatically, save the document and later open the document in MS Word you will see these changes as revisions.</param>
        // /// <param name="revisionDateTime">The date and time to use for revisions.</param>
        // ASPOSE_CELLS_CLOUD_EXPORT std::shared_ptr< aspose::cells::cloud::models::ReplaceTextResponse > replaceText(std::shared_ptr<aspose::cells::cloud::requests::ReplaceTextRequest> request);

        // /// <summary>
        // /// Converts a document in cloud storage to the specified format.
        // /// </summary>
        // /// <param name="name">The filename of the input document.</param>
        // /// <param name="saveOptionsData">Save options.</param>
        // /// <param name="folder">Original document folder.</param>
        // /// <param name="storage">Original document storage.</param>
        // /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        // /// <param name="password">Password for opening an encrypted document.</param>
        // /// <param name="fontsLocation">Folder in filestorage with custom fonts.</param>
        // ASPOSE_CELLS_CLOUD_EXPORT std::shared_ptr< aspose::cells::cloud::models::SaveResponse > saveAs(std::shared_ptr<aspose::cells::cloud::requests::SaveAsRequest> request);


        // /// <summary>
        // /// Searches text, specified by the regular expression, in the document.
        // /// </summary>
        // /// <param name="name">The filename of the input document.</param>
        // /// <param name="pattern">The regular expression used to find matches.</param>
        // /// <param name="folder">Original document folder.</param>
        // /// <param name="storage">Original document storage.</param>
        // /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        // /// <param name="password">Password for opening an encrypted document.</param>
        // ASPOSE_CELLS_CLOUD_EXPORT std::shared_ptr< aspose::cells::cloud::models::SearchResponse > search(std::shared_ptr<aspose::cells::cloud::requests::SearchRequest> request);

        // /// <summary>
        // /// Splits a document into parts and saves them in the specified format.
        // /// </summary>
        // /// <param name="name">The filename of the input document.</param>
        // /// <param name="format">The format to split.</param>
        // /// <param name="folder">Original document folder.</param>
        // /// <param name="storage">Original document storage.</param>
        // /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        // /// <param name="password">Password for opening an encrypted document.</param>
        // /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        // /// <param name="from">The start page.</param>
        // /// <param name="to">The end page.</param>
        // /// <param name="zipOutput">The flag indicating whether to ZIP the output.</param>
        // /// <param name="fontsLocation">Folder in filestorage with custom fonts.</param>
        // ASPOSE_CELLS_CLOUD_EXPORT std::shared_ptr< aspose::cells::cloud::models::SplitDocumentResponse > splitDocument(std::shared_ptr<aspose::cells::cloud::requests::SplitDocumentRequest> request);

        // /// <summary>
        // /// Removes protection from the document.
        // /// </summary>
        // /// <param name="name">The filename of the input document.</param>
        // /// <param name="protectionRequest">Protection request.</param>
        // /// <param name="folder">Original document folder.</param>
        // /// <param name="storage">Original document storage.</param>
        // /// <param name="loadEncoding">Encoding that will be used to load an HTML (or TXT) document if the encoding is not specified in HTML.</param>
        // /// <param name="password">Password for opening an encrypted document.</param>
        // /// <param name="destFileName">Result path of the document after the operation. If this parameter is omitted then result of the operation will be saved as the source document.</param>
        // ASPOSE_CELLS_CLOUD_EXPORT std::shared_ptr< aspose::cells::cloud::models::ProtectionDataResponse > unprotectDocument(std::shared_ptr<aspose::cells::cloud::requests::UnprotectDocumentRequest> request);

        /// <summary>
        /// Upload file.
        /// </summary>
        /// <param name="fileContent">File to upload.</param>
        /// <param name="path">Path where to upload including filename and extension e.g. /file.ext or /Folder 1/file.ext If the content is multipart and path does not contains the file name it tries to get them from filename parameter from Content-Disposition header.</param>
        /// <param name="storageName">Storage name.</param>
        ASPOSE_CELLS_CLOUD_EXPORT std::shared_ptr< aspose::cells::cloud::models::FilesUploadResult > uploadFile(std::shared_ptr<aspose::cells::cloud::requests::UploadFileRequest> request);

    public:
        /// <summary>
        /// Converts an Excel file on a local drive to the specified format.
        /// </summary>
        /// <param name="name">Converting excel name.</param>
        /// <param name="password">The password of the excel file</param>
        /// <param name="format">The format to convert.</param>
        /// <param name="outPath">The path to the output document on a local storage.</param>
        /// <param name="storageName">Original document storage.</param>
        /// <param name="saveOption">Folder in filestorage with custom fonts.</param>
        ASPOSE_CELLS_CLOUD_EXPORT std::shared_ptr< std::istream > convert(std::shared_ptr<aspose::cells::cloud::requests::ConvertRequest> request);

        /// <summary>
        /// Get a document in cloud storage to the specified format.
        /// </summary>
        /// <param name="name">The filename of the input document.</param>
        /// <param name="format">The destination format.</param>
        /// <param name="password">Password for opening an encrypted document.</param>
        /// <param name="isAutoFit"></param>
        /// <param name="onlySaveTable"></param>
        /// <param name="folder">Original document folder.</param>
        /// <param name="storageName">Original document storage.</param>
        /// <param name="outPath">The path to the output document.</param>
        /// <param name="outStorageName"></param>
        ASPOSE_CELLS_CLOUD_EXPORT std::shared_ptr< std::istream > getWorkbook(std::shared_ptr<aspose::cells::cloud::requests::GetWorkbookRequest> request);

        /// <summary>
        /// Converts an Excel file on a local drive to the specified format.
        /// </summary>
        /// <param name="name">Converting excel name.</param>
        /// <param name="password">The password of the excel file</param>
        /// <param name="saveOption">Folder in filestorage with custom fonts.</param>
        ASPOSE_CELLS_CLOUD_EXPORT std::shared_ptr< aspose::cells::cloud::models::FilesResult > protectWorkbook(std::shared_ptr<aspose::cells::cloud::requests::ProtectWorkbookRequest> request);

    public:
        ASPOSE_CELLS_CLOUD_EXPORT CellsApi(std::shared_ptr<ApiConfiguration> configuration);
        ASPOSE_CELLS_CLOUD_EXPORT virtual ~CellsApi() = default;

    private:
        std::shared_ptr<ApiClient> m_ApiClient;
    };
}
