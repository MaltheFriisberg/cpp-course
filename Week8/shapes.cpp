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
