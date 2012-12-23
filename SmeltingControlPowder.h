/* 
 * File:   SmeltingControlPowder.h
 * Author: kate
 *
 * Created on 2 Ноябрь 2012 г., 22:44
 */

#ifndef SMELTINGCONTROLPOWDER_H
#define	SMELTINGCONTROLPOWDER_H

#include "SmeltingControl.h"
#include "stdio.h"

class SmeltingControlPowder : public SmeltingControl {
public:
    SmeltingControlPowder(double ferrum, double quantile);
    SmeltingControlPowder(const SmeltingControlPowder& orig);
    virtual ~SmeltingControlPowder();
private:

};

#endif	/* SMELTINGCONTROLPOWDER_H */

