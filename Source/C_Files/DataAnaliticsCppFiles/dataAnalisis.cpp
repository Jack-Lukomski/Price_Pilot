#include "DataAnalisis.hpp"

DataAnalisis::DataAnalisis(){}

DataAnalisis::DataAnalisis(StockData & data)
{
    stockData = data;
}

x_x_CrossoverData DataAnalisis::Get_x_x_CrossoverData(uint8_t firstNumber, uint8_t secondNumber)
{
    x_x_CrossoverData retVal;

    retVal.firstNumData = Get_x_CrossoverData(firstNumber);
    retVal.secondNumData = Get_x_CrossoverData(secondNumber);

    return retVal;
}

StockDataFloArr DataAnalisis::Get_x_CrossoverData(uint8_t dayNumber)
{
    StockDataFloArr dataRetVal;
    StockDataFloArr stockDataFlo = stockData.getStockFloatVector();
    uint16_t numEvenDiv = ( stockDataFlo.size() - ( stockDataFlo.size() % 5 ) ) / 5;
    uint16_t totalNumEvenIndexes = ( stockDataFlo.size() - ( stockDataFlo.size() % 5 ) );

    float currSubChunkSum;
    float currSubChunkMean;

    uint16_t currCrosChunk = 0;
    uint16_t currSubChunk;

    for(currCrosChunk = 0; currCrosChunk < totalNumEvenIndexes; currCrosChunk+=dayNumber)
    {
        currSubChunkSum = 0;
        currSubChunkMean = 0;
        for(currSubChunk = currCrosChunk; currSubChunk < dayNumber+currCrosChunk; currSubChunk++)
        {
            currSubChunkSum = currSubChunkSum + stockDataFlo[currSubChunk];
        }
        currSubChunkMean = currSubChunkSum / dayNumber;
        dataRetVal.push_back(currSubChunkMean);
    }
    return dataRetVal;
}