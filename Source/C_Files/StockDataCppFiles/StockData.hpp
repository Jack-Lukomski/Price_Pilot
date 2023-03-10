#ifndef GET_STOCK_DATA_ARR_HPP
#define GET_STOCK_DATA_ARR_HPP

#include <vector>
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

typedef std::string filePath_str;
typedef std::string stockData_str;
typedef std::vector<float> stockData_floatVector;


class StockData 
{
private:
    filePath_str filePath;
    stockData_str stockStr;
    void PrvReadOpTxt(void);
public:
    StockData();
    StockData(filePath_str file);
    filePath_str getFilePath(void);
    void setFilePath(filePath_str file);
    stockData_str getStockStr(void);
    stockData_floatVector getStockFloatVector(void);
};

#endif /* GET_STOCK_DATA_ARR_HPP */