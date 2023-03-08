#include "../StockDataCppFiles/StockData.hpp"
#include "../DataAnaliticsCppFiles/DataAnalisis.hpp"

filePath_str pyTempFilePath = "C:/Users/jtluk/GitHub/Trading_Notification_Bot/Source/C_Files/PyOutputTempFiles/op.txt";

using std::cout;
using std::endl;

int main(void)
{
    StockData currStockData(pyTempFilePath);
    DataAnalisis dataAnalisis(currStockData);

    x_x_CrossoverData test = dataAnalisis.Get_x_x_CrossoverData(5, 8);

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