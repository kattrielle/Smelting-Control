/* 
 * File:   DataGet.h
 * Author: kate
 *
 * Created on 6 Октябрь 2012 г., 21:37
 */

#ifndef DATAGET_H
#define	DATAGET_H
#include "SmeltingListElement.h"
#include <list>
#include <stdlib.h>
#include "stdio.h"

class DataGet {
public:
    DataGet();
    DataGet(const DataGet& orig);
    virtual ~DataGet();

    //Заполнение списка результатов замера
    virtual void Get(std::list<SmeltingListElement> *process);
    
    //Установка текущего момента времени наблюдения
    void SetCurrentTime(double time);
    
    //Установка времени, с которого будет продолжаться(начинаться) наблюдение
    void SetStartTime(double time);
protected:
    double currentTime;
    double startTime;
};

#endif	/* DATAGET_H */

