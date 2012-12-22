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

std::list<SmeltingListElement> SmeltingControl::GetMeasuresList()
{
    return measures;
}

void SmeltingControl::SetMeasuresList(std::list<SmeltingListElement> &tmp)
{
    measures = tmp;
}

/**
 * Запуск сбора замеров по текущему процессу до текущей длительности
 * @param time - текущая длительность процесса
 */
void SmeltingControl::ResumeObserving(double time)
{
    retrievingData->SetCurrentTime( time );
    retrievingData->Get(&measures);
}

/**
 * Рассчитывает оптимальную длительность технологического процесса по набору
 * практических замеров
 * @return - значение оптимальной длительности процесса
 */
double SmeltingControl::CountOptimalTime()
{
    double optimalTime;
    optimalTime = technologicalInterval->CountArgumentValue( ferrumOptimum );
}

/**
 * Вывод практических результатов замеров по текущему процессу
 */
void SmeltingControl::PrintMeasuresList() {
    std::list<SmeltingListElement>::iterator ptr;
    printf("Экспериментальные точки наблюдений\n");
    for (ptr = measures.begin(); ptr != measures.end(); ptr++) {
        printf("Время: %lf\n");
        printf("Содержание оксида железа: %lf\n", ptr->GetFerrum());
    }
}