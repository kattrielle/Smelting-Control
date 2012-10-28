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

class SmeltingControl {
public:
    SmeltingControl();
    SmeltingControl(const SmeltingControl& orig);
    virtual ~SmeltingControl();
 //   list<SmeltingListElement> GetMeasuresList();
    void SetMeasuresList( list<SmeltingListElement> tmp);
private:
protected:
    list<SmeltingListElement> measures;

};

#endif	/* SMELTINGCONTROL_H */

