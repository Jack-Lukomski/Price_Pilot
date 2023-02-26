#include "dataAnalisis.hpp"

namespace StockDataAnalysis
{
    x_x_CrossoverData Get_x_x_CrossoverData(uint8_t firstNumber, uint8_t secondNumber)
    {
        x_x_CrossoverData retValFloArr;
        std::string tempPyData_str = GenStockDataArr::getStockStr();
        StockDataFloArr tempPyData = GenStockDataArr::getStockFloat(tempPyData_str);

        StockDataFloArr test = Get_x_CrossoverData(5, tempPyData);

        for(float el : test)
        {
            std::cout << el << "\n";
        }
        std::cout << std::endl;

        return retValFloArr;
    }

    static StockDataFloArr Get_x_CrossoverData(uint8_t dayNumber, StockDataFloArr stockDataFlo)
    {
        StockDataFloArr dataRetVal;
        uint16_t numEvenDiv = ( stockDataFlo.size() - ( stockDataFlo.size() % 5 ) ) / 5;
        uint16_t totalNumEvenIndexes = ( stockDataFlo.size() - ( stockDataFlo.size() % 5 ) );

        float currSubChunkSum;
        float currSubChunkMean;

        for(uint16_t currCrosChunk = 0; currCrosChunk < totalNumEvenIndexes; currCrosChunk+=dayNumber)
        {
            currSubChunkSum = 0;
            currSubChunkMean = 0;
            for(uint16_t currSubChunk = currCrosChunk; currCrosChunk < dayNumber+currCrosChunk; currSubChunk++)
            {
                currSubChunkSum = currSubChunkSum + stockDataFlo[currSubChunk];
            }
            currSubChunkMean = currSubChunkMean / dayNumber;
            dataRetVal.push_back(currSubChunkMean);
        }

        return dataRetVal;
    }
}