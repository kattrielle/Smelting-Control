/* 
 * File:   SmeltingControl.h
 * Author: kate
 *
 * Created on 28 Октябрь 2012 г., 12:09
 */

#ifndef SMELTINGCONTROL_H
#define	SMELTINGCONTROL_H

#include <list>
#include <stdlib.h>
#include "SmeltingListElement.h"
#include "DataGet.h"
#include "DataExponent.h"
#include "DataCombined.h"
#include "Model.h"
#include "stdio.h"
#include "LinearRegression.h"
#include "DistanceCount.h"

class SmeltingControl {
public: 
    SmeltingControl();
    SmeltingControl(const SmeltingControl& orig);
    virtual ~SmeltingControl();
    
    //
    std::list<SmeltingListElement> GetMeasuresList();
    
    //
    void SetMeasuresList( std::list<SmeltingListElement> &tmp);
    
    //запуск сбора дополнительных данных
    void ResumeObserving( double time );
    
    //общая функция подсчета оптимальной длительности процесса плавки
    double CountOptimalTime();
    
    //Функция вывода практических результатов наблюдений
    void PrintMeasuresList();
    
private:
protected:
    //экспериментальные точки наблюдений
    std::list<SmeltingListElement> measures;
    double ferrumOptimum;
    double technologicalQuantile;
    //заполнение данных по процессу
    DataGet *retrievingData; 
    //подсчитанная модель текущего процесса
    Model *countedRegressionModel;
    //модель 
    Model *technologicalInterval;
    
    //Подсчет линейной регрессии для экспоненциальных замеров
    virtual void CountRegressionModel(std::list<SmeltingListElement> points,
    Model *regressionResult, double offset);
    
    double CountTechnologicalDislance();

};

#endif	/* SMELTINGCONTROL_H */

