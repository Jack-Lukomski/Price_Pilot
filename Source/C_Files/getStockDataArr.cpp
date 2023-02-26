#include "getStockDataArr.hpp"

static const std::string tempDataFilePath = "PyOutputTempFiles/op.txt";

namespace GenStockDataArr
{
    std::string getStockStr()
    {
        std::ifstream pyOpFile("PyOutputTempFiles/op.txt");

        if(!pyOpFile.is_open())
        {
            throw std::runtime_error("Failed to open op.txt");
        }

        std::stringstream buf;
        buf << pyOpFile.rdbuf();

        return buf.str();
    }

    std::vector<float> getStockFloat(std::string & dataArrStr)
    {
        std::vector<float> floatArr_RetVal;
        std::istringstream iss(dataArrStr);
        std::string token;

        while(std::getline(iss, token, '\n'))
        {
            floatArr_RetVal.push_back(std::stof(token));
        }

        return floatArr_RetVal;
    }
}