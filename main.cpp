#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <vector>
#include <set>
#include <map>
//#include "Week2/week2.h"
//this is how to use other classes in the main class
//#include "cmake-build-debug/Week1/week1.h"
//#include "Week2/week2.h"


using namespace std;

void printVectors(vector<int> &a, vector<int> &b);

int main() {
    //field playground[n][m];

    //week2 week2;
    //week2.primeFactorization();

    vector<int> a;
    vector<int> b;

    char c;
    int d;
    
    while(cin >> c) {


        cin >> d;
        if(c== 'a') {
            a.push_back(d);
        } else {
            b.push_back(d);
        }
    }
    printVectors(a, b);
    int x = 1;

    return 0;

}

void printVectors(vector<int> &a, vector<int> &b) {
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    for(int i = 0; i <a.size(); i++) {
        cout << a[i];
    }

}












