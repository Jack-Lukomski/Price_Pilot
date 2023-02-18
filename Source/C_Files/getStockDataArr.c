#include "getStockDataArr.h"

String pGetStockDataArr_GetStockData(void)
{
    FILE *opFileData;
    String Str_StockDataRetVal;
    uint16_t u16_OpFileSize;

    opFileData = fopen("PyOutputTempFiles/op.txt", "r");
    u16_OpFileSize = xGetStockDataArr_GetOpFileSize(opFileData);
    Str_StockDataRetVal = (String)malloc(u16_OpFileSize * sizeof(char));

    for(u_int16_t u16_currOpFileIndex = 0; u16_currOpFileIndex < u16_OpFileSize; u16_currOpFileIndex++)
    {
        Str_StockDataRetVal[u16_currOpFileIndex] = fgetc(opFileData);
    }

    Str_StockDataRetVal[u16_OpFileSize] = '\0';

    fclose(opFileData);

    return Str_StockDataRetVal;
}

uint16_t xGetStockDataArr_GetOpFileSize(FILE * currentOpFile)
{
    uint16_t u16_SizeRetVal = 0;

    do
    {
        u16_SizeRetVal++;
    }while(fgetc(currentOpFile) != EOF);

    rewind(currentOpFile);
    
    return u16_SizeRetVal;
}

float * xGetStockDataArr_GetStockDataArray(String Str_DataArrStr)
{
    FILE *opFileData;
    uint16_t u16_NumStrElements;
    opFileData = fopen("PyOutputTempFiles/op.txt", "r");
    u16_NumStrElements = xGetStockDataArr_GetOpFileSize(opFileData);
    fclose(opFileData);

    float * p_RetValArr = (float *)malloc(u16_NumStrElements * sizeof(float));
    String p_token = strtok((String)Str_DataArrStr, "\n");
    u_int16_t u16_currIndex = 0;

    while(p_token != NULL)
    {
        p_RetValArr[u16_currIndex] = atof(p_token);
        p_token = strtok(NULL, "\n");
        u16_currIndex++;
    }

    return p_RetValArr;
}