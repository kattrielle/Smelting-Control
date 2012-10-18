/* 
 * File:   DataExponent.cpp
 * Author: kate
 * 
 * Created on 7 Октябрь 2012 г., 21:11
 */

#include "DataExponent.h"
#include "stdlib.h"
#include "math.h"

DataExponent::DataExponent(double a, double b, double r) {
    koeffA = a;
    koeffB = b;
    randomRange = r;
}

DataExponent::DataExponent(const DataExponent& orig) {
}

DataExponent::~DataExponent() {
}

double DataExponent::CountMeasureResult(double time)
{
    return exp(koeffA*time+koeffB) + randomRange * (2*rand()/RAND_MAX - 1);
}

void DataExponent::Get()
{
    
}