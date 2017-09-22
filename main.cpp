#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <numeric>
//#include "Week2/week2.h"
//this is how to use other classes in the main class
//#include "cmake-build-debug/Week1/week1.h"
//#include "Week2/week2.h"


using namespace std;

class fraction {
private:
// Internal representation of a fraction as two integers
    int numerator;
    int denominator;
public:
// Class constructor
    fraction(int n, int d) {
        numerator = n;
        denominator = d;
    };
// Methods to update the fraction
    void add(fraction f);
    void mult(fraction f);
    void div(fraction f);
// Display method
    void display(void);



};

int main() {
    fraction fraction1(1,2);
    //fraction1.add(fraction1);



    return 0;

}














