/* 
 * File:   DataGet.cpp
 * Author: kate
 * 
 * Created on 6 Октябрь 2012 г., 21:37
 */

#include "DataGet.h"


DataGet::DataGet() {
}

DataGet::DataGet(const DataGet& orig) {
}

DataGet::~DataGet() {
}

/*void DataGet::Get(list<SmeltingListElement> process)
{

}*/

void DataGet::SetCurrentTime(double time)
{
    currentTime = time;
}

void DataGet::SetStartTime(double time)
{
    startTime = time;
}