//
// Created by malthe on 10/7/17.
//

#include "shapes.h"

shapes::shapes(double width, double height) {
    this->heightx = width;
    this->widthx = height;
};


double shapes::height() {
    return this->heightx;
}

double shapes::width() {
    return this->widthx;
}
//both square and rectangle shares this, so let the super class handle it
//and implement specialized for circle
double shapes::area() {
    return this->widthx*this->heightx;
}

double shapes::perimeter() {
    return widthx+widthx+heightx+heightx;
}
