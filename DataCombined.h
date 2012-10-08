/* 
 * File:   DataCombined.h
 * Author: kate
 *
 * Created on 8 Октябрь 2012 г., 21:42
 */

#ifndef DATACOMBINED_H
#define	DATACOMBINED_H

class DataCombined {
public:
    DataCombined();
    DataCombined(const DataCombined& orig);
    virtual ~DataCombined();
private:
    double koeffA;
    double koeffB;
    double randomRange;
    double changeTime;

};

#endif	/* DATACOMBINED_H */

