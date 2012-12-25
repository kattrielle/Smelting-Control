/* 
 * File:   DistanceCount.cpp
 * Author: kate
 * 
 * Created on 23 Декабрь 2012 г., 16:08
 */

#include "DistanceCount.h"

DistanceCount::DistanceCount() {
}

DistanceCount::DistanceCount(const DistanceCount& orig) {
}

DistanceCount::~DistanceCount() {
}

/**
 * Подсчет технологического доверительного интервала
 * @param exponentLine - модельная линия
 * @param points
 * @param quantile
 * @return 
 */
double DistanceCount::CountMeasuresQuantile(Model* exponentLine, 
        std::list<SmeltingListElement> points, double quantile)
{
    
}