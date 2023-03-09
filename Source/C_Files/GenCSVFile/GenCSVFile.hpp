#ifndef GENCSVFILE_HPP
#define GENCSVFILE_HPP

#include "../DataAnaliticsCppFiles/DataAnalisis.hpp"

#include <vector>
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

class GenCsvFile
{
    private:
        DataAnalisis outputData;
    public:
        GenCsvFile();
        GenCsvFile(DataAnalisis & data);
        void ComplieDataToCsv(void);
};

#endif /* GENCSVFILE_HPP */