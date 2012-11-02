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
    DataExponent(double a, double b, double rand, double tstep);
    DataExponent(const DataExponent& orig);
    virtual ~DataExponent();

    // Генерация результата замера в некоторый момент времени
    double CountMeasureResult( double time );
    
    //заполнение списка результатов замера
    void Get(list<SmeltingListElement> process);
 //   void SetInvestigationTime( double time );
 //   double GetInvestigationTime();
    
private:
    double koeffA;
    double koeffB;
    double randomRange;
    double timeStep;
    double investigationTime;
};

#endif	/* DATAEXPONENT_H */

