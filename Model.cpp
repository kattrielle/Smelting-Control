/* 
 * File:   Model.cpp
 * Author: kate
 * 
 * Created on 22 Декабрь 2012 г., 15:52
 */

#include "Model.h"
#include "math.h"

Model::Model(double a, double b, double l) 
{
    koeffA = a;
    koeffB = b;
    koeffL = l;
}

Model::Model(const Model& orig) {
}

Model::~Model() {
}

/**
 * Подсчет значения модельной функции
 * @param x - агумент
 * @return - значение функции
 */
double Model::CountFunctionValue(double x)
{
    return exp( koeffA + koeffB*x ) + koeffL;
}

/**
 * Подсчет значения аргумента при известном значении функции
 * @param y - значение функции
 * @return - аргумент
 */
double Model::CountArgumentValue(double y)
{
    return ( log( y - koeffL) - koeffA) / koeffB;
}