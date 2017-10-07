//
// Created by malthe on 10/7/17.
//

#ifndef COURSE_CIRCLE_H
#define COURSE_CIRCLE_H


#include "shapes.h"

class Circle : public shapes{
public:
    Circle(double radius);
    //override the super class functions
    double area();
    double perimeter();
};


#endif //COURSE_CIRCLE_H
