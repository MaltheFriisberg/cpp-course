//
// Created by malthe on 10/7/17.
//

#include "Rectangle.h"

Rectangle::Rectangle(double width, double length) :shapes(width,length) {

}

double Rectangle::area() {
    return this->widthx*this->heightx;
}
