//
// Created by malthe on 10/1/17.
//

#include "vector2d.h"

#include "vector2d.h"
#include <cmath>

v2d::v2d(double a, double b){
// put something here
    this->x = a;
    this->y = b;
}

v2d::v2d(const v2d & v){
    this->x = v.x;
    this->y = v.y;
}

v2d::~v2d(){
// put something here
}

v2d & v2d::operator=(const v2d &v){

    this->x = v.x;
    this->y= v.y;
    return *this;
}

v2d & v2d::operator+(const v2d &v){
    double result1 = this->x + v.x;
    double result2 = this->y + v.y;
    this->x=result1;
    this->y=result2;
    return *this;
}

double v2d::operator*(const v2d &v){
    double result = this->x * v.x;
    double result1 = this->y * v.y;
    return result+result1;
}

v2d & v2d::operator*(double k){
    double result = this->x *k;
    double result2 = this->y *k;
    this->x = result;
    this->y = result2;
    return *this;
}

double v2d::length(){
// put something here
    double a1 = pow(x,2);
    double a2 = pow(y,2);
    return sqrt(a1+a2);
}

