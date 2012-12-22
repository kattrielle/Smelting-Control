/* 
 * File:   SmeltingControlPowder.cpp
 * Author: kate
 * 
 * Created on 2 Ноябрь 2012 г., 22:44
 */

#include "SmeltingControlPowder.h"
#include "stdio.h"

SmeltingControlPowder::SmeltingControlPowder(double ferrum) 
{
    double a, b, rand, tstep;
    ferrumOptimum = ferrum;
    printf("Введите параметры моделируемого процесса\n");
    scanf("%lf %lf %lf %lf", &a, &b, &rand, &tstep);
    retrievingData = new DataExponent(a, b, rand, tstep);
}

SmeltingControlPowder::SmeltingControlPowder(const SmeltingControlPowder& orig) {
}

SmeltingControlPowder::~SmeltingControlPowder() {
}

