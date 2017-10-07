//
// Created by malthe on 10/7/17.
//

#ifndef COURSE_SHAPES_H
#define COURSE_SHAPES_H


class shapes {
protected:
    double widthx;
    double heightx;
public:
    shapes();

    shapes(double width, double height);
    double width();
    double height();
    double perimeter();
    void rotate();

    double area();
};


#endif //COURSE_SHAPES_H
