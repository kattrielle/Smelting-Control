/* 
 * File:   DataFile.cpp
 * Author: kate
 * 
 * Created on 13 Октябрь 2012 г., 14:40
 */

#include <stdio.h>

#include "DataFile.h"

DataFile::DataFile(char *file) {
    measuresData = fopen(file, "r");
}

DataFile::DataFile(const DataFile& orig) {
}

DataFile::~DataFile() {
}

