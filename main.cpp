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



using namespace std;

int main() {

    vector<Shape *> shapes;

    Rectangle u(2,5);
    shapes.push_back(&u);
    Square v(3);
    shapes.push_back(&v);
    Circle w(2);
    shapes.push_back(&w);
    // Enumerating all areas
    cout << "Areas..." << endl;
    double area = 0;
    for(int i=0; i<shapes.size(); i++){
        cout << round(shapes[i]->area()) << " ";
        area += shapes[i]->area();
    }
    cout << endl << "Total area is " << round(area) << endl;


    return 0;
}















