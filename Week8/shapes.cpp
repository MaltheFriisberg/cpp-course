//
// Created by malthe on 10/7/17.
//

#include <math.h>
#include "shapes.h"

Shape::Shape(double height, double width) {
    this->heightx = height;
    this->widthx = width;
};


double Shape::height() {
    return this->heightx;
}

double Shape::width() {
    return this->widthx;
}

/*double Shape::area() {
    return this->widthx*this->heightx;
}

double Shape::perimeter() {
    return widthx+widthx+heightx+heightx;
}*/

Rectangle::Rectangle(double width, double length) :Shape(width,length) {

}

double Rectangle::area() {
    return this->widthx*this->heightx;
}

double Rectangle::perimeter() {
    return widthx+widthx+heightx+heightx;
}

void Shape::rotate() {
    double temp = this->heightx;
    this->heightx = this->widthx;
    this->widthx = temp;
}

Circle::Circle(double radius) : Shape(2*radius,2*radius) {


}

double Circle::perimeter() {
    return 2 * M_PI * (this->widthx)/2;
}

double Circle::area() {
    return M_PI * ((this->widthx)/2*(this->widthx)/2);
}

Square::Square(double width) :Shape(width, width) {

}

double Square::area() {
    return this->widthx*this->heightx;


}
double Square::perimeter() {
    return widthx+widthx+heightx+heightx;
}
