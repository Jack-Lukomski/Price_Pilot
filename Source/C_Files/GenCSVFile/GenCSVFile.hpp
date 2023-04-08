#ifndef GENCSVFILE_HPP
#define GENCSVFILE_HPP

#include "../DataAnaliticsCppFiles/DataAnalisis.hpp"

#include <vector>
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

class GenCsvFile {
    private:
        CrossOver outputData;
    public:
        GenCsvFile();
        GenCsvFile(CrossOver & data);
        void ComplieDataToCsv(void);
};

#endif /* GENCSVFILE_HPP */