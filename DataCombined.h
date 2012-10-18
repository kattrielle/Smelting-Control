/* 
 * File:   DataCombined.h
 * Author: kate
 *
 * Created on 8 Октябрь 2012 г., 21:42
 */

#ifndef DATACOMBINED_H
#define	DATACOMBINED_H
#include "DataGet.h"

class DataCombined : public DataGet {
public:
    DataCombined(double a, double b, double r, double t);
    DataCombined(const DataCombined& orig);
    virtual ~DataCombined();
    
    // Генерация результата замера в некоторый момент времени
    double CountMeasureResult( double time );
    void Get();
private:
    double koeffA;
    double koeffB;
    double randomRange;
    double changeTime;

};

#endif	/* DATACOMBINED_H */

