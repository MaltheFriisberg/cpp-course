//
// Created by malthe on 10/7/17.
//

#include <math.h>
#include "shapes.h"

Shape::Shape(double width, double height) {
    this->heightx = width;
    this->widthx = height;
};


double Shape::height() {
    return this->heightx;
}

double Shape::width() {
    return this->widthx;
}
//both square and rectangle shares this, so let the super class handle it
//and implement specialized for circle
double Shape::area() {
    return this->widthx*this->heightx;
}

double Shape::perimeter() {
    return widthx+widthx+heightx+heightx;
}

Rectangle::Rectangle(double width, double length) :Shape(width,length) {

}

/*double Rectangle::area() {
    return this->widthx*this->heightx;
}*/

/*double shapes::perimeter() {
    return widthx+widthx+heightx+heightx;
}*/

void Shape::rotate() {
    double temp = this->heightx;
    this->heightx = this->widthx;
    this->widthx = temp;
}

Circle::Circle(double radius) : Shape(0,radius) {


}

double Circle::perimeter() {
    return 2 * M_PI * this->widthx;
}

double Circle::area() {
    return M_PI * (this->widthx*this->widthx);
}

Square::Square(double width) :Shape(width, width) {

}
