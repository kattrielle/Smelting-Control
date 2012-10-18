/* 
 * File:   SmeltingListElement.cpp
 * Author: kate
 * 
 * Created on 6 Октябрь 2012 г., 20:58
 */

#include "SmeltingListElement.h"

SmeltingListElement::SmeltingListElement(double t, double f) {
    time = t;
    ferrum = f;
}

SmeltingListElement::SmeltingListElement(const SmeltingListElement& orig) {
    time = orig.time;
    ferrum = orig.ferrum;
}

SmeltingListElement::~SmeltingListElement() {
}

double SmeltingListElement::GetTime()
{
    return time;
}

double SmeltingListElement::GetFerrum()
{
    return ferrum;
}