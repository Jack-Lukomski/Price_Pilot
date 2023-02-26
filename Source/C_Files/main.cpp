#include "getStockDataArr.hpp"
#include "DataAnaliticsCppFiles/dataAnalisis.hpp"

int main(void)
{
    std::string testStr = GenStockDataArr::getStockStr();
    std::vector<float> testFlo = GenStockDataArr::getStockFloat(testStr);

    for(float curr : testFlo)
    {
        std::cout << curr << "\n";
    }

    std::cout << std::endl;

    StockDataAnalysis::Get_x_x_CrossoverData(5, 8);

    return 0;
}