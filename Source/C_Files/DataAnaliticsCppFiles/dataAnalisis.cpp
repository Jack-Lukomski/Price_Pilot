#include "DataAnalisis.hpp"

DataAnalisis::DataAnalisis(){}

DataAnalisis::DataAnalisis(StockData & data) : stockData(data), firstCrossNum(0), secondCrossNum(0), StockData(data) {}

void DataAnalisis::setFirstCrossoverNum(uint8_t number)
{
    firstCrossNum = number;  
}

void DataAnalisis::setSecondCrossoverNum(uint8_t number)
{
    secondCrossNum = number;
}

x_x_CrossoverData DataAnalisis::Get_x_x_CrossoverData(void)
{
    if(firstCrossNum == 0 || secondCrossNum == 0)
    {
        throw std::runtime_error("No x_x crossover data provided!");
    }

    x_x_CrossoverData retVal;

    retVal.firstNumData = Get_x_CrossoverData(firstCrossNum);
    retVal.secondNumData = Get_x_CrossoverData(secondCrossNum);

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