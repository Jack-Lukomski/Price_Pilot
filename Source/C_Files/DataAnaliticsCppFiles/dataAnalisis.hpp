#ifndef DATA_ANALISIS_HPP
#define DATA_ANALISIS_HPP
#include "../StockDataCppFiles/StockData.hpp"
#include <vector>
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

typedef std::vector<float> StockDataFloArr;

typedef struct x_x_CrossoverData
{
    StockDataFloArr firstNumData;
    StockDataFloArr secondNumData;
}x_x_CrossoverData;


class DataAnalisis
{
    private:
        StockData stockData;
    public:
        DataAnalisis();
        DataAnalisis(StockData & data);
        x_x_CrossoverData Get_x_x_CrossoverData(uint8_t firstNumber, uint8_t secondNumber);
        StockDataFloArr Get_x_CrossoverData(uint8_t dayNumber);

        /* Put more DataAnalysis tools here */
};

#endif /* DATA_ANALISIS_HPP */