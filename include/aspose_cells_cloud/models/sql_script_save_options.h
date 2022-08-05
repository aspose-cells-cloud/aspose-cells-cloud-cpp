
/** --------------------------------------------------------------------------------------------------------------------
* <copyright company="Aspose" file=" dif_save_options.h">
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
#include "./save_options.h"

namespace aspose::cells::cloud::models {
    /// <summary>
    /// 
    /// </summary>
    class SqlScriptSaveOptions : public SaveOptions
    {
    public:
        ASPOSE_CELLS_CLOUD_EXPORT virtual ~SqlScriptSaveOptions() = default;
        ASPOSE_CELLS_CLOUD_EXPORT virtual void toJson(void* jsonIfc) const override;
        ASPOSE_CELLS_CLOUD_EXPORT virtual void fromJson(const void* jsonIfc) override;
    public:
        ASPOSE_CELLS_CLOUD_EXPORT std::shared_ptr< bool > getCheckIfTableExists() const;
        ASPOSE_CELLS_CLOUD_EXPORT void setCheckIfTableExists(  std::shared_ptr< bool> value );
        ASPOSE_CELLS_CLOUD_EXPORT std::shared_ptr< bool > getCheckAllDataForColumnType() const;
        ASPOSE_CELLS_CLOUD_EXPORT void setCheckAllDataForColumnType(  std::shared_ptr< bool> value );
        ASPOSE_CELLS_CLOUD_EXPORT std::shared_ptr< bool > getAddBlankLineBetweenRows() const;
        ASPOSE_CELLS_CLOUD_EXPORT void setAddBlankLineBetweenRows(  std::shared_ptr< bool> value );
        ASPOSE_CELLS_CLOUD_EXPORT std::shared_ptr< bool > getCreateTable() const;
        ASPOSE_CELLS_CLOUD_EXPORT void setCreateTable(  std::shared_ptr< bool> value );
        ASPOSE_CELLS_CLOUD_EXPORT std::shared_ptr< bool > getHasHeaderRow() const;
        ASPOSE_CELLS_CLOUD_EXPORT void setHasHeaderRow(  std::shared_ptr< bool> value );

        ASPOSE_CELLS_CLOUD_EXPORT std::shared_ptr< char > getSeparator() const;
        ASPOSE_CELLS_CLOUD_EXPORT void setSeparator(  std::shared_ptr< char> value );
        ASPOSE_CELLS_CLOUD_EXPORT std::shared_ptr< int > getPrimaryKey() const;
        ASPOSE_CELLS_CLOUD_EXPORT void setPrimaryKey(  std::shared_ptr< int> value );
        ASPOSE_CELLS_CLOUD_EXPORT std::shared_ptr< int > getStartId() const;
        ASPOSE_CELLS_CLOUD_EXPORT void setStartId(  std::shared_ptr< int> value );
        ASPOSE_CELLS_CLOUD_EXPORT std::shared_ptr< int > getExportAsString() const;
        ASPOSE_CELLS_CLOUD_EXPORT void setExportAsString(  std::shared_ptr< int> value );

        ASPOSE_CELLS_CLOUD_EXPORT std::shared_ptr< std::wstring  > getColumnTypeMap() const;
        ASPOSE_CELLS_CLOUD_EXPORT void setColumnTypeMap ( std::shared_ptr< std::wstring > value );
        ASPOSE_CELLS_CLOUD_EXPORT std::shared_ptr< std::wstring  > getOperatorType() const;
        ASPOSE_CELLS_CLOUD_EXPORT void setOperatorType ( std::shared_ptr< std::wstring > value );
        ASPOSE_CELLS_CLOUD_EXPORT std::shared_ptr< std::wstring  > getIdName() const;
        ASPOSE_CELLS_CLOUD_EXPORT void setIdName ( std::shared_ptr< std::wstring > value );
        ASPOSE_CELLS_CLOUD_EXPORT std::shared_ptr< std::wstring  > getTableName() const;
        ASPOSE_CELLS_CLOUD_EXPORT void setTableName ( std::shared_ptr< std::wstring > value );

    protected:
        std::shared_ptr< bool > m_CheckIfTableExists;
        std::shared_ptr< bool > m_CheckAllDataForColumnType;        
        std::shared_ptr< bool > m_AddBlankLineBetweenRows; 
        std::shared_ptr< bool > m_CreateTable; 
        std::shared_ptr< bool > m_HasHeaderRow; 
        std::shared_ptr< char > m_Separator; 
        std::shared_ptr< int > m_PrimaryKey; 
        std::shared_ptr< int > m_StartId; 
        std::shared_ptr< int > m_ExportAsString; 

        std::shared_ptr< std::wstring > m_ColumnTypeMap;    
        std::shared_ptr< std::wstring > m_OperatorType;  
        std::shared_ptr< std::wstring > m_IdName; 
        std::shared_ptr< std::wstring > m_TableName; 
    };
}
