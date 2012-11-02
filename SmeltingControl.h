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
#include "DataCombined.h"

class SmeltingControl {
public: 
    SmeltingControl();
    SmeltingControl(const SmeltingControl& orig);
    virtual ~SmeltingControl();
 //   list<SmeltingListElement> GetMeasuresList();
    
    void SetMeasuresList( list<SmeltingListElement> &tmp);
    
    //запуск сбора дополнительных данных
    void ResumeObserving( double time );
    
    //общая функция подсчета оптимальной длительности процесса плавки
    double CountOptimalTime();
private:
protected:
    list<SmeltingListElement> measures;
    double ferrumOptimum;
    DataGet *retrievingData;

};

#endif	/* SMELTINGCONTROL_H */

