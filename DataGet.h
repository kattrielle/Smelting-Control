/* 
 * File:   DataGet.h
 * Author: kate
 *
 * Created on 6 Октябрь 2012 г., 21:37
 */

#ifndef DATAGET_H
#define	DATAGET_H

class DataGet {
public:
    DataGet();
    DataGet(const DataGet& orig);
    virtual ~DataGet();
    void Get();
    void SetCurrentTime(double time);
    void SetStartTime(double time);
protected:
    double currentTime;
    double startTime;
};

#endif	/* DATAGET_H */

