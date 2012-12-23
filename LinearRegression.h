/* 
 * File:   LinearRegression.h
 * Author: kate
 *
 * Created on 23 Декабрь 2012 г., 11:20
 */

#ifndef LINEARREGRESSION_H
#define	LINEARREGRESSION_H

#include "stdlib.h"
#include "SmeltingListElement.h"
#include "Model.h"
#include <list>
#include <math.h>

/**
 * Построение линейных регрессионных моделей
 */
class LinearRegression {
public:
    LinearRegression();
    LinearRegression(const LinearRegression& orig);
    virtual ~LinearRegression();
    
    //Подсчет линейной регрессионной модели Y = a + b * X
    static void CountLinearRegression(std::list<double> x, std::list<double> y,
    double *a, double *b);
    
    //Построение регрессионной кривой для набора точек с экспоненциальной зависмостью
    static void LinearRegressionFromExponent(std::list<SmeltingListElement> points,
    Model *regressionResult, double offset);
private:
    //Подсчет выборочного среднего случайной величины
    static double CountListMean( std::list<double> points);
    
    //Выборочное среднее для произведения 2 случайныхвеличин
    static double CountListProductMean( std::list<double> pX, std::list<double> pY);
    
    //Выборочная дисперсия случайной величины
    static double CountListVariance( std::list<double> points, double mean);

};

#endif	/* LINEARREGRESSION_H */

