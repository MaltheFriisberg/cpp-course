//
// Created by malthe on 10/7/17.
//

#ifndef COURSE_SHAPES_H
#define COURSE_SHAPES_H


class Shape {
protected:
    double widthx;
    double heightx;
public:
    Shape();

    Shape(double width, double height);
    double width();
    double height();
    virtual double perimeter(void) =0;
    void rotate();

    virtual double area(void)=0;
};


#endif //COURSE_SHAPES_H

#ifndef COURSE_CIRCLE_H
#define COURSE_CIRCLE_H



class Circle : public Shape{
public:
    Circle(double radius);
    //override the super class functions
    double area();
    double perimeter();
};


#endif //COURSE_CIRCLE_H

#ifndef COURSE_RECTANGLE_H
#define COURSE_RECTANGLE_H




class Rectangle : public Shape {
public:
    Rectangle(double width, double length);
    double area();
    double perimeter();
};


#endif //COURSE_RECTANGLE_H

#ifndef COURSE_SQUARE_H
#define COURSE_SQUARE_H



class Square : public Shape {

public:
    Square(double width);
    double area();
    double perimeter();
};


#endif //COURSE_SQUARE_H
