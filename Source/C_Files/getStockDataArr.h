#ifndef GETSTOCKDATARR_H
#define GETSTOCKDATARR_H

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

typedef char * String;

String pGetStockDataArr_GetStockData(void);
float * xGetStockDataArr_GetStockDataArray(String Str_DataArrStr);
uint16_t xGetStockDataArr_GetOpFileSize(FILE * currentOpFile);

#endif /* GETSTOCKDATARR_H */