/* 
 * File:   DistanceCount.h
 * Author: kate
 *
 * Created on 23 Декабрь 2012 г., 16:08
 */

#ifndef DISTANCECOUNT_H
#define	DISTANCECOUNT_H

#include <list>
#include "math.h"
#include "Model.h"
#include "SmeltingListElement.h"

/**
 * Подсчет расстояний от замеров до кривой; 
 * подсчет квантили для набора расстояний
 */
class DistanceCount {
public:
    DistanceCount();
    DistanceCount(const DistanceCount& orig);
    virtual ~DistanceCount();
    
    //Подсчет оптимального расстояния
    static double CountMeasuresQuantile(Model *exponentLine,
        std::list<SmeltingListElement> points, double quantile);
private:

};

#endif	/* DISTANCECOUNT_H */

