#include "GenCSVFile.hpp"

GenCsvFile::GenCsvFile(){}

GenCsvFile::GenCsvFile(DataAnalisis & data)
{
    outputData = data;
}

void GenCsvFile::ComplieDataToCsv(void)
{
    std::ofstream outputFile("tempCsv.csv");

    //outputFile << "fr, cap, ngl" << std::endl;

    // for(uint16_t currIndex = 0; currIndex < outputData.getStockFloatVector().size(); currIndex++)
    // {
    //     outputFile << outputData.getStockFloatVector()[currIndex] << std::endl;
    //             //    << outputData.Get_x_x_CrossoverData().firstNumData[currIndex] << ", "
    //             //    << outputData.Get_x_x_CrossoverData().secondNumData[currIndex] << std::endl;
    // }

    outputFile.close();
}