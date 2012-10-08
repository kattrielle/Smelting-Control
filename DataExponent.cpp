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

double DataExponent::CountExponent(double time)
{
    return exp(koeffA*time+koeffB) + (2*randomRange*rand()/RAND_MAX - randomRange);
}