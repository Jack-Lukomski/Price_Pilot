#ifndef CROSS_OVER_HPP
#define CROSS_OVER_HPP
#include "../StockDataCppFiles/StockData.hpp"
#include <vector>
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

typedef std::vector<float> StockDataFloArr;

typedef struct x_x_CrossoverData {
    StockDataFloArr firstNumData;
    StockDataFloArr secondNumData;
}x_x_CrossoverData;


class CrossOver : public StockData {
    private:
        StockData stockData;
        uint8_t firstCrossNum;
        uint8_t secondCrossNum;
    public:
        CrossOver();
        CrossOver(StockData & data);
        void setFirstCrossoverNum(uint8_t number);
        void setSecondCrossoverNum(uint8_t number);
        uint8_t getFirstCrossoverNum(void);
        uint8_t getSecondCrossoverNum(void);
        x_x_CrossoverData Get_x_x_CrossoverData(void);
        StockDataFloArr Get_x_CrossoverData(uint8_t dayNumber);

        /* Put more DataAnalysis tools here */
};

#endif /* CROSS_OVER_HPP */