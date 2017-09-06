#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
//this is how to use other classes in the main class
//#include "cmake-build-debug/Week1/week1.h"
//#include "Week2/week2.h"

using namespace std;

void histogram();
void decideInterval();
int findLargestNumber(int array[], int n);
int loadNumbersIntoArray(int *array, int n);


int main() {

    //week2 week2;
    //week2.anotherSum();
    histogram();


}

void histogram() {
    int intervals,n,largestnumber;
    cin >> intervals;
    cin >> n;
    int array[n];
    //loadNumbersIntoArray(array, n);
    for(int i=0; i <n;) {
        int number;
        cin >> number;
        array[i] = number;
    }
    cout << "" <<endl;
    for(int j = 0; j < n; j++) {
        cout << array[j];
    }
    //largestnumber = findLargestNumber(array, n);

    //cout << largestnumber;

    int x;

}

int loadNumbersIntoArray(int *array, int n) {

    for(int i=0; i <n;) {
        int number;
        cin >> number;
        array[i] = number;
    }

}

int findLargestNumber(int array[], int n) {
    int number = 0;

    for(int i =0; i < n; i++) {
        if(array[i]>number)
            number=array[i];
    }
}










