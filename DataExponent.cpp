/* 
 * File:   DataExponent.cpp
 * Author: kate
 * 
 * Created on 7 Октябрь 2012 г., 21:11
 */

#include "DataExponent.h"

DataExponent::DataExponent(double a, double b, double rand, double tstep) {
    koeffA = a;
    koeffB = b;
    randomRange = rand;
    startTime = 0;
    timeStep = tstep;
    currentTime = 0;
}

DataExponent::DataExponent(const DataExponent& orig) {
}

DataExponent::~DataExponent() {
}

/**
 * Генерация результата замера в некоторый момент времени
 * @param time - время для генерации
 * @return - сгенерированное значение результата замера
 */
double DataExponent::CountMeasureResult(double time)
{
    return exp(koeffA + time*koeffB) + randomRange * (2*rand()/RAND_MAX - 1);
}

/**
 * Заполнение списка результатов замера по текущему процессу
 * @param process - список результатов замеров
 */
void DataExponent::Get(std::list<SmeltingListElement> *process)
{
    printf("Hello there!\n");
    if (currentTime == 0) {
        printf("Не задана текущая длительность процесса\n");
        return;
    }
    double t = startTime;
    while ( t<= currentTime )
    {
        process->push_back( SmeltingListElement( t, CountMeasureResult(t)) );
        t+=timeStep;
    };
    startTime = t;
}