#ifndef DATA_ANALISIS_HPP
#define DATA_ANALISIS_HPP
#include "../getStockDataArr.hpp"
#include <vector>
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

typedef std::vector<std::vector<float>> x_x_CrossoverData;
typedef std::vector<float> StockDataFloArr;

namespace StockDataAnalysis
{
    x_x_CrossoverData Get_x_x_CrossoverData(uint8_t firstNumber, uint8_t secondNumber);
    static StockDataFloArr Get_x_CrossoverData(uint8_t dayNumber, StockDataFloArr & stockDataFlo);
}

#endif /* DATA_ANALISIS_HPP */