#include "GenCSVFile.hpp"

GenCsvFile::GenCsvFile(){}

GenCsvFile::GenCsvFile(DataAnalisis & data) : outputData(data) {}

void GenCsvFile::ComplieDataToCsv(void)
{
    std::ofstream outputFile("tempCsv.csv");

    for(uint16_t currIndex = 0; currIndex < outputData.getStockFloatVector().size(); currIndex++)
    {
        outputFile << outputData.getStockFloatVector()[currIndex];

        if(currIndex < outputData.Get_x_x_CrossoverData().firstNumData.size())
        {
            outputFile << "," << outputData.Get_x_x_CrossoverData().firstNumData[currIndex];
        }

        if(currIndex < outputData.Get_x_x_CrossoverData().secondNumData.size())
        {
            outputFile << "," << outputData.Get_x_x_CrossoverData().secondNumData[currIndex];
        }
        outputFile << std::endl;
    }

    outputFile.close();
}