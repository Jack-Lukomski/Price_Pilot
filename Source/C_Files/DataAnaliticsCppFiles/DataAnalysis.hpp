#ifndef CROSS_OVER_HPP
#define CROSS_OVER_HPP
#include "../StockDataCppFiles/StockData.hpp"
#include <vector>
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

class DataAnalysis : public StockData{
    protected:
        StockData stockData;
        std::string AnalysisType;
    public:
        void getAnalysisType(void);
};

#endif