/* 
 * File:   LinearRegression.cpp
 * Author: kate
 * 
 * Created on 23 Декабрь 2012 г., 11:20
 */

#include "LinearRegression.h"

LinearRegression::LinearRegression() {
}

LinearRegression::LinearRegression(const LinearRegression& orig) {
}

LinearRegression::~LinearRegression() {
}

/**
 * Построение регрессионной кривой для набора точек 
 * с экспоненциальной зависимостью Y = E^( a + b * X ) + l
 * @param points - набор замеров
 * @param regressionResult - результирующее уравнение
 * @param offset - смещение l
 */
static void LinearRegression::LinearRegressionFromExponent
        (std::list<SmeltingListElement> points, Model* regressionResult, 
        double offset)
{
    std::list<double> xPoints;
    std::list<double> yPoints;
    double a, b;
    std::list<SmeltingListElement>::iterator ptr;
    for ( ptr = points.begin(); ptr != points.end(); ptr++) {
        xPoints.push_back( ptr->GetTime() );
        yPoints.push_back( log( ptr->GetFerrum() - offset ) );
    }
    LinearRegression::CountLinearRegression( xPoints, yPoints, &a, &b );
    regressionResult = new Model( a, b, offset);
}

/**
 * Построение линейной регрессионной модели Y = a + b * X
 * @param x - набор точек X
 * @param y - набор точек Y
 * @param a - коэффициент модели
 * @param b - коэффициент модели
 */
static void LinearRegression::CountLinearRegression(std::list<double> x,
        std::list<double> y, double* a, double* b)
{
    double meanX, meanY, meanXY, S2X;
    meanX = LinearRegression::CountListMean( x );
    meanY = LinearRegression::CountListMean( y );
    meanXY = LinearRegression::CountListProductMean( x, y );
    S2X = LinearRegression::CountListVariance( x, meanX );
    *b = (meanXY - meanX * meanY) / S2X;
    *a = meanY - (*b) * meanX;
}

/**
 * Подсчет выборочного среднего для случайной величины
 * @param points - набор значений случайной величины
 * @return - выборочное среднее
 */
static double LinearRegression::CountListMean(std::list<double> points)
{
    double sum;
    std::list<double>::iterator ptr;
    sum = 0;
    for ( ptr=points.begin(); ptr != points.end(); ptr++ )
        sum += *ptr;
    sum /= points.size();
    return sum;
}

/**
 * Подсчет выборочного среднего для произведения 2 случайных величин
 * @param pX - набор значений 1й случайной величины
 * @param pY - набор значений 2й случайной величины
 * @return - выборочное среднее
 */
static double LinearRegression::CountListProductMean(std::list<double> pX, 
        std::list<double> pY)
{
    double sum;
    std::list<double>::iterator ptrX, ptrY;
    sum = 0;
    ptrY = pY.begin();
    for ( ptrX=pX.begin(); ptrX != pX.end(); ptrX++ ) {
        sum += (*ptrX) * (*ptrY);
        ptrY++;
    }
    sum /= pX.size();
    return sum;
}

/**
 * Подсчет выборочной дисперсии для случайной величины
 * @param points - набор значений случайной величины
 * @param mean - выборочное среднее 
 * @return - выборочная дисперсия
 */
static double LinearRegression::CountListVariance(std::list<double> points, 
        double mean)
{
    double sum;
    std::list<double>::iterator ptr;
    sum = 0;
    for ( ptr=points.begin(); ptr != points.end(); ptr++ )
        sum += pow(*ptr - mean, 2);
    sum /= points.size();
    return sum;  
}

