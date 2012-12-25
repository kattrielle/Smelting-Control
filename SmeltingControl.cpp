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
    CountRegressionModel( measures, countedRegressionModel, 0);
    CountTechnologicalInterval();
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

/**
 * Подсчет "линейной" регрессионной модели для экспоненциального набора точек
 * @param points - список двумерных точек (замеров)
 * @param regressionResult - объект итоговой экспоненциальной кривой
 * @param offset - смещение по y
 */
void SmeltingControl::CountRegressionModel(std::list<SmeltingListElement> points, 
        Model* regressionResult, double offset)
{
    LinearRegression::LinearRegressionFromExponent(points, regressionResult, offset);
}

/**
 * Подсчет экспоненциальной модели технологического доверительного интервала
 * для модели текущего процесса
 */
void SmeltingControl::CountTechnologicalInterval()
{
    
}