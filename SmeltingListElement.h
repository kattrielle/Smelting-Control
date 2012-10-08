/* 
 * File:   SmeltingListElement.h
 * Author: kate
 *
 * Created on 6 Октябрь 2012 г., 20:58
 */

#ifndef SMELTINGLISTELEMENT_H
#define	SMELTINGLISTELEMENT_H

class SmeltingListElement {
public:
    SmeltingListElement(double t, double f);
    SmeltingListElement(const SmeltingListElement& orig);
    virtual ~SmeltingListElement();
    double GetTime();
    double GetFerrum();
private:
    double time;
    double ferrum;
};

#endif	/* SMELTINGLISTELEMENT_H */

