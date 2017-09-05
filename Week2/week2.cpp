//
// Created by malthe on 9/4/17.
//

#include "week2.h"
#include <iostream>
#include <cmath>

using namespace std;

void week2::primeFactorization() {
    int n;
    cin >> n;
    int product = 1;
    //how many 2's divide n?
    while(n%2 ==0) {
        cout << 2;
        product = product * 2;
        if(product < n) {
            cout << " * ";

        }
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
            if(product < n) {
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

void week2::pi() {
    int n;
    //cout << "how many pi iterations? " << endl;
    cin >> n;
    cout << pi(n);
}

double week2::pi(int n) {
    double newPi;
    if (n > 0){
        double partial = 0;
        for (int i = 0; i < n; i++)
            partial += pow(-1,i)/(2.0 * i + 1);
        newPi = 4 * partial;
        //cout << "The approximation is " << newPi << " using " << n << " terms.\n";
    }
    return newPi;

}

void week2::anotherSum() {

    int sum = 0;
    int n;

    cin >> n;

    for(int i = 0; i <n+1; i+=2) {

        sum+=i;
        //i++;
    }

    cout << sum;

}

void week2::gaussianSum() {
    int n;
    cin >> n;
    int result = gaussianSumRecursive(n);
    cout << result;
}

int week2::gaussianSumRecursive(int n) {
    if(n > 0) {
        return n+=gaussianSumRecursive(n-1);
    }
    return 0;

}
