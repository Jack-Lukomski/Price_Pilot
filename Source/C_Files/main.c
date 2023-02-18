#include "getStockDataArr.h"

int main(void)
{
    String test;
    float * testFlo;
    test = pGetStockDataArr_GetStockData();
    testFlo = xGetStockDataArr_GetStockDataArray(test);
    printf("%f", testFlo[0]);

    free(test);
    free(testFlo);

    return 0;
}