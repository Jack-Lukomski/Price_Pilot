#ifndef GET_STOCK_DATA_ARR_HPP
#define GET_STOCK_DATA_ARR_HPP

#include <vector>
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

namespace GenStockDataArr
{
    std::string getStockStr();
    std::vector<float> getStockFloat(std::string & dataArrStr);
}

#endif /* GET_STOCK_DATA_ARR_HPP */