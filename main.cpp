#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <vector>
//this is how to use other classes in the main class
//#include "cmake-build-debug/Week1/week1.h"
//#include "Week2/week2.h"

using namespace std;

void histogram();
void decideInterval();
int findLargestNumber(int array[], int n);
int loadNumbersIntoVector(vector<int> &vector, int n);


int main() {

    //week2 week2;
    //week2.anotherSum();
    histogram();


}

void histogram() {
    int intervals,n,largestnumber;
    cin >> intervals;
    cin >> n;
    vector<int> vector(n);
    largestnumber = loadNumbersIntoVector(vector, n);
    //works

    cout<< largestnumber;



    int x;

}
//vector is passed by reference
int loadNumbersIntoVector(std::vector<int> &vector, int n) {

    int largest = 0;

    for(int i=0; i <n;) {
        int number;
        //cin>>vector[i];
        cin>>number;
        //cout<<vector[i];
        if(number > largest) {
            largest = number;
        }
        //vector[i] = number;

    }
    return largest;

}

/*int findLargestNumber(int array[], int n) {
    int number = 0;

    for(int i =0; i < n; i++) {
        if(array[i]>number)
            number=array[i];
    }
}*/










