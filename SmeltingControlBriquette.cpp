/* 
 * File:   SmeltingControlBriquette.cpp
 * Author: kate
 * 
 * Created on 22 Декабрь 2012 г., 15:14
 */

#include "SmeltingControlBriquette.h"

SmeltingControlBriquette::SmeltingControlBriquette
        ( double ferrum, double quantile) 
{
    //double a, b, rand, tstep;
    ferrumOptimum = ferrum;
    technologicalQuantile = quantile;
    //printf("Введите параметры моделируемого процесса\n");
    //scanf("%lf %lf %lf %lf", &a, &b, &rand, &tstep);
    //retrievingData = new DataCombined();
}

SmeltingControlBriquette::SmeltingControlBriquette(const SmeltingControlBriquette& orig) {
}

SmeltingControlBriquette::~SmeltingControlBriquette() {
}

