#include "StockData.hpp"
#include "DataAnaliticsCppFiles/DataAnalisis.hpp"

filePath_str pyTempFilePath = "C:/Users/jtluk/GitHub/Trading_Notification_Bot/Source/C_Files/PyOutputTempFiles/op.txt";

using std::cout;
using std::endl;

int main(void)
{
    StockData currStockData(pyTempFilePath);
    DataAnalisis dataAnalisis(currStockData);
    
    return 0;
}