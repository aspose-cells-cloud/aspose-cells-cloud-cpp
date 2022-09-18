/** --------------------------------------------------------------------------------------------------------------------
* <copyright company="Aspose" file="aspose_cells_cloud.h">
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

#include "./aspose_cells_cloud/api_exception.h"
#include "./aspose_cells_cloud/api_configuration.h"
#include "./aspose_cells_cloud/models/api_error.h"
#include "./aspose_cells_cloud/models/batch_convert_request.h"
#include "./aspose_cells_cloud/models/cells_cloud_file_info.h"
#include "./aspose_cells_cloud/models/cells_cloud_response.h"
#include "./aspose_cells_cloud/models/error.h"
#include "./aspose_cells_cloud/models/error_details.h"
#include "./aspose_cells_cloud/models/dif_save_options.h"
#include "./aspose_cells_cloud/models/docx_save_options.h"
#include "./aspose_cells_cloud/models/html_save_options.h"
#include "./aspose_cells_cloud/models/json_save_options.h"
#include "./aspose_cells_cloud/models/image_save_options.h"
#include "./aspose_cells_cloud/models/markdown_save_options.h"
#include "./aspose_cells_cloud/models/mhtml_save_options.h"
#include "./aspose_cells_cloud/models/ods_save_options.h"
#include "./aspose_cells_cloud/models/ooxml_save_options.h"
#include "./aspose_cells_cloud/models/pdf_save_options.h"
#include "./aspose_cells_cloud/models/pdf_security_options.h"
#include "./aspose_cells_cloud/models/pptx_save_options.h"
#include "./aspose_cells_cloud/models/save_options.h"
#include "./aspose_cells_cloud/models/spreadsheet_ml2003_save_options.h"
#include "./aspose_cells_cloud/models/svg_save_options.h"
#include "./aspose_cells_cloud/models/txt_save_options.h"
#include "./aspose_cells_cloud/models/xls_save_options.h"
#include "./aspose_cells_cloud/models/xlsb_save_options.h"
#include "./aspose_cells_cloud/models/xps_save_options.h"
#include "./aspose_cells_cloud/models/files_list.h"
#include "./aspose_cells_cloud/models/files_upload_result.h"
#include "./aspose_cells_cloud/models/file_link.h"
#include "./aspose_cells_cloud/models/file_info.h"
#include "./aspose_cells_cloud/models/files_result.h"
#include "./aspose_cells_cloud/models/link.h"
#include "./aspose_cells_cloud/models/match_condition_request.h"
#include "./aspose_cells_cloud/models/report_build_options.h"
#include "./aspose_cells_cloud/models/storage_file.h"
#include "./aspose_cells_cloud/models/save_response.h"
#include "./aspose_cells_cloud/models/save_result.h"
#include "./aspose_cells_cloud/models/sql_script_save_options.h"
#include "./aspose_cells_cloud/models/split_result_document.h"
#include "./aspose_cells_cloud/models/split_result_response.h"
#include "./aspose_cells_cloud/models/split_result.h"
#include "./aspose_cells_cloud/models/workbook.h"
#include "./aspose_cells_cloud/models/workbook_response.h"
#include "./aspose_cells_cloud/models/workbook_encryption_request.h"
#include "./aspose_cells_cloud/requests/post_batch_convert_request.h"
#include "./aspose_cells_cloud/requests/convert_request.h"
#include "./aspose_cells_cloud/requests/convert_workbook_to_docx_request.h"
#include "./aspose_cells_cloud/requests/convert_workbook_to_png_request.h"
#include "./aspose_cells_cloud/requests/convert_workbook_to_pdf_request.h"
#include "./aspose_cells_cloud/requests/copy_file_request.h"
#include "./aspose_cells_cloud/requests/copy_folder_request.h"
#include "./aspose_cells_cloud/requests/protect_workbook_request.h"
#include "./aspose_cells_cloud/requests/post_replace_request.h"
#include "./aspose_cells_cloud/requests/unlock_workbook_request.h"
#include "./aspose_cells_cloud/requests/create_folder_request.h"
#include "./aspose_cells_cloud/requests/delete_file_request.h"
#include "./aspose_cells_cloud/requests/delete_folder_request.h"
#include "./aspose_cells_cloud/requests/download_file_request.h"
#include "./aspose_cells_cloud/requests/get_workbook_request.h"
#include "./aspose_cells_cloud/requests/get_files_list_request.h"
#include "./aspose_cells_cloud/requests/get_public_key_request.h"
#include "./aspose_cells_cloud/requests/post_document_save_as_request.h"
#include "./aspose_cells_cloud/requests/move_file_request.h"
#include "./aspose_cells_cloud/requests/move_folder_request.h"
#include "./aspose_cells_cloud/requests/encryption_workbook_request.h"
#include "./aspose_cells_cloud/requests/upload_file_request.h"
#include "./aspose_cells_cloud/requests/post_compress_request.h"
#include "./aspose_cells_cloud/requests/post_workbook_split_request.h"
#include "./aspose_cells_cloud/requests/post_split_request.h"
#include "./aspose_cells_cloud/requests/post_workbooks_merge_request.h"
#include "./aspose_cells_cloud/requests/post_merge_request.h"
#include "./aspose_cells_cloud/requests/post_clear_objects_request.h"
#include "./aspose_cells_cloud/requests/post_watermark_request.h"
#include "./aspose_cells_cloud/requests/post_reverse_request.h"
#include "./aspose_cells_cloud/requests/post_rotate_request.h"
#include "./aspose_cells_cloud/requests/post_digital_signature_request.h"
#include "./aspose_cells_cloud/responses/post_batch_convert_response.h"
#include "./aspose_cells_cloud/responses/convert_response.h"
#include "./aspose_cells_cloud/responses/convert_workbook_to_docx_response.h"
#include "./aspose_cells_cloud/responses/convert_workbook_to_pdf_response.h"
#include "./aspose_cells_cloud/responses/convert_workbook_to_png_response.h"
#include "./aspose_cells_cloud/responses/copy_file_response.h"
#include "./aspose_cells_cloud/responses/copy_folder_response.h"
#include "./aspose_cells_cloud/responses/create_folder_response.h"
#include "./aspose_cells_cloud/responses/delete_file_response.h"
#include "./aspose_cells_cloud/responses/delete_folder_response.h"
#include "./aspose_cells_cloud/responses/download_file_response.h"
#include "./aspose_cells_cloud/responses/get_files_list_response.h"
#include "./aspose_cells_cloud/responses/get_public_key_response.h"
#include "./aspose_cells_cloud/responses/get_workbook_response.h"
#include "./aspose_cells_cloud/responses/post_document_save_as_response.h"
#include "./aspose_cells_cloud/responses/move_file_response.h"
#include "./aspose_cells_cloud/responses/move_folder_response.h"
#include "./aspose_cells_cloud/responses/protect_workbook_response.h"
#include "./aspose_cells_cloud/responses/unlock_workbook_response.h"
#include "./aspose_cells_cloud/responses/encryption_workbook_response.h"
#include "./aspose_cells_cloud/responses/upload_file_response.h"
#include "./aspose_cells_cloud/responses/post_compress_response.h"
#include "./aspose_cells_cloud/responses/post_workbook_split_response.h"
#include "./aspose_cells_cloud/responses/post_split_response.h"
#include "./aspose_cells_cloud/responses/post_workbooks_merge_response.h"
#include "./aspose_cells_cloud/responses/post_merge_response.h"
#include "./aspose_cells_cloud/responses/post_replace_response.h"
#include "./aspose_cells_cloud/responses/post_clear_objects_response.h"
#include "./aspose_cells_cloud/responses/post_watermark_response.h"
#include "./aspose_cells_cloud/responses/post_reverse_response.h"
#include "./aspose_cells_cloud/responses/post_rotate_response.h"
#include "./aspose_cells_cloud/responses/post_digital_signature_response.h"
#include "./aspose_cells_cloud/api/cells_api.h"
