/* 
 * File:   DataExponent.h
 * Author: kate
 *
 * Created on 7 Октябрь 2012 г., 21:11
 */

#ifndef DATAEXPONENT_H
#define	DATAEXPONENT_H
#include "DataGet.h"

class DataExponent : public DataGet {
public:
    DataExponent(double a, double b, double r);
    DataExponent(const DataExponent& orig);
    virtual ~DataExponent();

    // Генерация результата замера в некоторый момент времени
    double CountExponent( double time );
private:
    double koeffA;
    double koeffB;
    double randomRange;

};

#endif	/* DATAEXPONENT_H */

