/* 
 * File:   DataCombined.cpp
 * Author: kate
 * 
 * Created on 8 Октябрь 2012 г., 21:42
 */

#include "DataCombined.h"
#include "math.h"
#include "stdlib.h"

DataCombined::DataCombined(double a, double b, double r, double t) {
    koeffA = a;
    koeffB = b;
    randomRange = r;
    changeTime = (rand()/RAND_MAX + 1) * t;
}

DataCombined::DataCombined(const DataCombined& orig) {
}

DataCombined::~DataCombined() {
}

void DataCombined::Get()
{
    
}

