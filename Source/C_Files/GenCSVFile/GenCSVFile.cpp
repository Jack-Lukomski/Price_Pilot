#include "GenCSVFile.hpp"

GenCsvFile::GenCsvFile(){}

GenCsvFile::GenCsvFile(DataAnalisis & data) : outputData(data) {}

void GenCsvFile::ComplieDataToCsv(void) {
    std::ofstream outputFile("tempCsv.csv");

    outputFile << "col1,col2,col3" << std::endl;

    for(uint16_t currIndex = 0; currIndex < outputData.getStockFloatVector().size(); currIndex++) {
        outputFile << outputData.getStockFloatVector()[currIndex];

        if(currIndex % outputData.getFirstCrossoverNum() == 0) {
            outputFile << "," << outputData.Get_x_x_CrossoverData().firstNumData[currIndex/outputData.getFirstCrossoverNum()];
        }
        else {
            outputFile << ",";
        }

        if(currIndex % outputData.getSecondCrossoverNum() == 0) {
            outputFile << "," << outputData.Get_x_x_CrossoverData().secondNumData[currIndex/outputData.getSecondCrossoverNum()];
        }
        else {
            outputFile << ",";
        }
        outputFile << std::endl;
    }

    outputFile.close();
}