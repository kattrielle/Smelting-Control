/* 
 * File:   Model.h
 * Author: kate
 *
 * Created on 22 Декабрь 2012 г., 15:52
 */

#ifndef MODEL_H
#define	MODEL_H

/**
 * Работа с экспоненциальной моделью E^(a + b*x) + l
 * @param a
 * @param b
 * @param l
 */
class Model {
public:
    Model(double a, double b, double l );
    Model(const Model& orig);
    virtual ~Model();
    
    //Подсчет значения модельной функции 
    double CountFunctionValue(double x);
    
    //Подсчет значения аргумента по значению функции
    double CountArgumentValue( double y );
private:
    double koeffA;
    double koeffB;
    double koeffL;

};

#endif	/* MODEL_H */

