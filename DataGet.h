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

class DataGet {
public:
    DataGet();
    DataGet(const DataGet& orig);
    virtual ~DataGet();
    void Get(list<SmeltingListElement> process);
    void SetCurrentTime(double time);
    void SetStartTime(double time);
protected:
    double currentTime;
    double startTime;
};

#endif	/* DATAGET_H */

