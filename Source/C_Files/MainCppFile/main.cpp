#include "../StockDataCppFiles/StockData.hpp"
#include "../DataAnaliticsCppFiles/DataAnalisis.hpp"
#include "../GenCSVFile/GenCSVFile.hpp"

filePath_str pyTempFilePath = "C:/Users/jtluk/GitHub/Trading_Notification_Bot/Source/C_Files/PyOutputTempFiles/op.txt";

using std::cout;
using std::endl;

int main(void)
{
    StockData currStockData(pyTempFilePath);
    DataAnalisis dataAnalisis(currStockData);

    dataAnalisis.setFirstCrossoverNum(5);
    dataAnalisis.setSecondCrossoverNum(8);
    
    GenCsvFile genoratedFile(dataAnalisis);

    genoratedFile.ComplieDataToCsv();


    x_x_CrossoverData test = dataAnalisis.Get_x_x_CrossoverData();

    cout << "5 crossover data" << endl;
    for(float curr : test.firstNumData)
    {
        cout << curr << endl;
    }

    cout << "8 crossover data" << endl;
    for(float curr : test.secondNumData)
    {
        cout << curr << endl;
    }
    
    return 0;
}