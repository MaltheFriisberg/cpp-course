#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <numeric>
#include "Week6/fraction.cpp"
#include "Week7/vector2d.h"
#include "Week8/shapes.h"
#include "Week8/Rectangle.h"
//this is how to use other classes in the main class
//#include "cmake-build-debug/Week1/week1.h"
//#include "Week2/week2.h"


using namespace std;

int main() {

    //shapes shape(1,2);
    Rectangle rectangle(1,2);

    rectangle.rotate();

    cout << rectangle.height() << rectangle.width()<<rectangle.area()<< rectangle.perimeter();
    return 0;
}















