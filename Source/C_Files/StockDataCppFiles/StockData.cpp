#include "StockData.hpp"

StockData::StockData(){}

StockData::StockData(filePath_str file) : stockStr(""), filePath(file) 
{
    PrvReadOpTxt();
}

filePath_str StockData::getFilePath(void)
{
    return filePath;
}

void StockData::setFilePath(filePath_str file)
{
    filePath = file;
}

void StockData::PrvReadOpTxt(void)
{
    std::ifstream pyOpFile(filePath);

    if(!pyOpFile.is_open())
    {
        throw std::runtime_error("Failed to open op.txt");
    }

    std::stringstream buf;
    buf << pyOpFile.rdbuf();

    pyOpFile.close();

    stockStr.assign(buf.str());   
}

stockData_str StockData::getStockStr(void)
{
    return stockStr;
}

stockData_floatVector StockData::getStockFloatVector(void)
{
    stockData_str stockDataStr = stockStr;
    stockData_floatVector floatArr_RetVal;
    std::istringstream iss(stockDataStr);
    std::string token;

    while(std::getline(iss, token, '\n'))
    {
        floatArr_RetVal.push_back(std::stof(token));
    }

    return floatArr_RetVal;
}