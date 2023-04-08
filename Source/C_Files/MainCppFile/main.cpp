#include "../StockDataCppFiles/StockData.hpp"
#include "../DataAnaliticsCppFiles/CrossOver.hpp"
#include "../GenCSVFile/GenCSVFile.hpp"

filePath_str pyTempFilePath = "C:/Users/jtluk/GitHub/Trading_Notification_Bot/Source/C_Files/PyOutputTempFiles/op.txt";

using std::cout;
using std::endl;

int main(void)
{
    StockData currStockData(pyTempFilePath);
    CrossOver dataAnalisis(currStockData);

    dataAnalisis.setFirstCrossoverNum(5);
    dataAnalisis.setSecondCrossoverNum(8);
    
    GenCsvFile genoratedFile(dataAnalisis);

    genoratedFile.ComplieDataToCsv();


    x_x_CrossoverData test = dataAnalisis.Get_x_x_CrossoverData();
    
    return 0;
}