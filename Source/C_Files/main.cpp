#include "getStockDataArr.hpp"

int main(void)
{
    std::string testStr = GenStockDataArr::getStockStr();
    std::vector<float> testFlo = GenStockDataArr::getStockFloat(testStr);

    for(float curr : testFlo)
    {
        std::cout << curr << "\n";
    }

    std::cout << std::endl;

    return 0;
}