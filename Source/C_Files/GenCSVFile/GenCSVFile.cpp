#include "GenCSVFile.hpp"

GenCsvFile::GenCsvFile(){}

GenCsvFile::GenCsvFile(DataAnalisis & data) : outputData(data) {}

void GenCsvFile::ComplieDataToCsv(void)
{
    std::ofstream outputFile("tempCsv.csv");

    outputFile << "col1,col2,col3" << std::endl;

    for(uint16_t currIndex = 0; currIndex < outputData.getStockFloatVector().size(); currIndex++)
    {
        outputFile << outputData.getStockFloatVector()[currIndex];

        if(currIndex < outputData.Get_x_x_CrossoverData().firstNumData.size())
        {
            outputFile << "," << outputData.Get_x_x_CrossoverData().firstNumData[currIndex];
        }
        else 
        {
            outputFile << "," << 0;
        }

        if(currIndex < outputData.Get_x_x_CrossoverData().secondNumData.size())
        {
            outputFile << "," << outputData.Get_x_x_CrossoverData().secondNumData[currIndex];
        }
        else 
        {
            outputFile << "," << 0;
        }
        outputFile << std::endl;
    }

    outputFile.close();
}