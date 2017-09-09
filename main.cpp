#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <vector>
//#include "Week2/week2.h"
//this is how to use other classes in the main class
//#include "cmake-build-debug/Week1/week1.h"
//#include "Week2/week2.h"

using namespace std;

void primeFactorization();

int main() {

    //week2 week2;
    //week2.primeFactorization();
    primeFactorization();
}

void primeFactorization() {
    int n;
    cin >> n;
    int product = 1;
    //how many 2's divide n?
    while(n%2 ==0) {
        cout << 2;
        product = product * 2;
        cout << " * ";
        n= n/2;
    }

    // n must be odd at this point.  So we can skip
    // one element (Note i = i +2)
    for (int i = 3; i <= sqrt(n); i = i+2)
    {
        // While i divides n, print i and divide n
        while (n%i == 0)
        {
            //printf("%d ", i);
            cout << i;
            product = product * i;
            if(n > i) {
                cout << " * ";

            }
            n = n/i;
        }
    }

    // This condition is to handle the case when n
    // is a prime number greater than 2
    if (n > 2) {
        cout << n;

    }
    //printf ("%d ", n);
    cout << "" << endl;
    //cout << product;
}











