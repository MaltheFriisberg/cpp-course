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
//this is how to use other classes in the main class
//#include "cmake-build-debug/Week1/week1.h"
//#include "Week2/week2.h"


using namespace std;

int main() {

    // we crate here some vectors with fixed values
    v2d v1(3,0);
    v2d v2(0,4);
    v2d v3(3,2);
    // we create here v4 as vector which is like v2
    v2d v4(v2);

    //
    cout << "Pythagoras holds on perpendicular triangles (a,b,c):\n";
    cout << "a = " << v1.length();
    cout << " , b = " << v2.length();
    v2d test = v1 + v2;
    //double result = 3.5 + 3.7;
    // we create a new vector v5 here by combining other vectors
    // this vector corresponds to the diagonal of the triangle defined by v1 and v2

    v2d v5 = v1 + v2 * (-1);


    cout << " , c = " << v5.length() << endl;

    cout << "...but not on non-perpendicular triangles (a,b,c):\n";
    cout << "a = " << v3.length();
    cout << " , b = " << v4.length();

    v5 = v3 + v4 * (-1);

    cout << " , c = " << v5.length() << endl;

    /* Output should be:
     Pythagoras holds on perpendicular triangles:
     a=3 b=4 c=5
     ...but not on non-perpendicular triangles:
     a=3.60555 b=4 c=3.60555
     */

    // Note that vector operations like + and *
    // modify the vectors on their lhs!

    v2d w1(0,0);
    v2d w2(1,1);
    v2d w3(0,0);

    cout << "Before w3 = w1 + w2 the length of w1 is... " << w1.length() << endl;
    w3=w1+w2;
    cout << "After  w3 = w1 + w2 the length of w1 is... " << w1.length() << endl;

    /* Output should be
     Before w3 = w1 + w2 the length of w1 is... 0
     After  w3 = w1 + w2 the length of w1 is... 1.41421
    */

    return 0;
}















