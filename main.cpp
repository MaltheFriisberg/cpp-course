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
    void add(fraction f){
        int divisor = this -> denominator * f.denominator;
        int x = this -> numerator * f.denominator;
        int y = f.numerator * this -> denominator;

        int newNumerator = x + y;

        this -> denominator = divisor;
        this -> numerator = newNumerator;



    };
    void mult(fraction f){
        this -> numerator= this->numerator * f.numerator;
        this -> denominator= this->denominator * f.denominator;
    };
    void div(fraction f){
        this -> numerator =  this -> numerator * f.denominator;
        this -> denominator = this -> denominator * f.numerator;
        int x;
    };
// Display method
    void display(void){
        simplify();
        cout << numerator;
        cout << " / ";
        cout << denominator;
    };

    int gcd(int first_number, int second_number) {
        int  gcd;
        for(int i=1;i<=first_number&&i<=second_number;i++){


            if(first_number%i==0 && second_number%i == 0 ){

                gcd=i;

            }

        }
        return gcd;
    };

    void simplify() {
        int gcd1 = gcd(this->numerator, this -> denominator);
        if(gcd1 > 0) {
            this -> numerator = this -> numerator / gcd1;
            this -> denominator = this->denominator / gcd1;
        }

        int x = 0;
    };



};

int main() {
    fraction fraction1(1,3);
    fraction1.display();
    //fraction1.add(fraction1);
    fraction fraction2(2,7);
    fraction1.div(fraction2);
    fraction1.display();



    return 0;

}














