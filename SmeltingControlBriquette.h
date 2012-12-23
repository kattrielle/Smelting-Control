/* 
 * File:   SmeltingControlBriquette.h
 * Author: kate
 *
 * Created on 22 Декабрь 2012 г., 15:14
 */

#ifndef SMELTINGCONTROLBRIQUETTE_H
#define	SMELTINGCONTROLBRIQUETTE_H

#include "SmeltingControl.h"

class SmeltingControlBriquette : public SmeltingControl {
public:
    SmeltingControlBriquette(double ferrum, double quantile);
    SmeltingControlBriquette(const SmeltingControlBriquette& orig);
    virtual ~SmeltingControlBriquette();
private:
    //Начальные измерения, изменяющиеся по линейному закону
    std::list<SmeltingListElement> linearPartData;

};

#endif	/* SMELTINGCONTROLBRIQUETTE_H */

