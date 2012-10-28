/* 
 * File:   SmeltingControl.cpp
 * Author: kate
 * 
 * Created on 28 Октябрь 2012 г., 12:09
 */

#include "SmeltingControl.h"

SmeltingControl::SmeltingControl() {
}

SmeltingControl::SmeltingControl(const SmeltingControl& orig) {
}

SmeltingControl::~SmeltingControl() {
}

/*list<SmeltingListElement> SmeltingControl::GetMeasuresList()
{
    return measures;
}*/

void SmeltingControl::SetMeasuresList(list<SmeltingListElement> tmp)
{
    measures = tmp;
}