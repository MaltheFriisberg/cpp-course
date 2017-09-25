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
    //fraction fraction1(1,3);
    //fraction1.display();
    //fraction1.add(fraction1);
    //fraction fraction2(2,7);
    //fraction1.div(fraction2);
    //fraction1.display();

    int numerator, numerator1;
    int divisor, divisor1;
    string symbol;
    string operation;
    //bool numeratorRead = false;
    //getline(cin, line);

    /*for(int i = 0; i <line.size(); i++) {
        char c = line[i];
        if(isdigit(c) &&!numeratorRead) {
            numerator = (int)c;
            numeratorRead = true;
        } else if(isdigit(c) &&numeratorRead) {
            divisor = (int)c;
        }
    }*/
    //cin >> numerator >> symbol >> divisor >> operation >> numerator1 >> symbol >> divisor1;
    for(int i = 0; i <3; i ++) {
        cin >> numerator >> symbol >> divisor >> operation >> numerator1 >> symbol >> divisor1;
        fraction fraction1(numerator, divisor);
        fraction fraction2(numerator1,divisor1);

        if(operation.compare("+") == 0) {
            fraction1.add(fraction2);
            fraction1.display();
        } else if(operation.compare("*")==0) {
            fraction1.mult(fraction2);
            fraction1.display();
        } else if(operation.compare("div")==0) {
            fraction1.div(fraction2);
            fraction1.display();
        }
        cout << "" <<endl;
    }




    return 0;

}














