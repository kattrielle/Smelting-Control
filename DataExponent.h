/* 
 * File:   DataExponent.h
 * Author: kate
 *
 * Created on 7 Октябрь 2012 г., 21:11
 */

#ifndef DATAEXPONENT_H
#define	DATAEXPONENT_H
#include "DataGet.h"
#include "stdlib.h"
#include "math.h"
#include "stdio.h"

/**
 * Описывает генерацию процесса плавки порошковой шихты - простую
 * экспоненциальную модель вида E^(a + b*time) с наложением шумов
 * @param a
 * @param b
 * @param rand - шумовой разброс
 * @param tstep - временной шаг измерений
 */
class DataExponent : public DataGet {
public:
    DataExponent(double a, double b, double rand, double tstep);
    DataExponent(const DataExponent& orig);
    virtual ~DataExponent();

    // Генерация результата замера в некоторый момент времени
    double CountMeasureResult( double time );
    
    //заполнение списка результатов замера
    void Get(std::list<SmeltingListElement> *process);
 //   void SetInvestigationTime( double time );
 //   double GetInvestigationTime();
    
private:
    double koeffA;
    double koeffB;
    double randomRange;
    double timeStep;
    //Зачем мне это было надо???
    double investigationTime;
};

#endif	/* DATAEXPONENT_H */

