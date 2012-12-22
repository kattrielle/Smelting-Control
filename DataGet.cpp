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

/**
 * Заполнение списка результатов замера по текущему процессу
 * @param process - список результатов замеров
 */
void DataGet::Get(std::list<SmeltingListElement> *process)
{
    printf("Something's wrong\n");
}

void DataGet::SetCurrentTime(double time)
{
    currentTime = time;
}

/**
 * Установка времени, с которого будет продолжаться(начинаться) наблюдение
 * @param time - время, с которого начнутся наблюдения
 */
void DataGet::SetStartTime(double time)
{
    startTime = time;
}