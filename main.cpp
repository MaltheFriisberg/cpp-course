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
    cout << "program start"<< endl;
    int intervals,n,largestnumber;
    cin >> intervals;
    cin >> n;
    vector<int> vector(n);
    //cout << "program start"<< endl;

    largestnumber = loadNumbersIntoVector(vector, n);

    //cout<< ""<<endl;
    //cout<<"what ever overloads"<<endl;
    cout<< "got the numbers, moving on";





    int x;

}
//vector is passed by reference
int loadNumbersIntoVector(std::vector<int> &vector, int n) {

    int largest = 0;

    for(int i=0; i <n; i++) {
        int number;
        //cin>>vector[i];
        cin>>number;
        //cout<<vector[i];
        if(number > largest) {
            largest = number;
        }
        //vector[i] = number;

    }
    cout << "returning largest"<< endl;

    return largest;

}

/*int findLargestNumber(int array[], int n) {
    int number = 0;

    for(int i =0; i < n; i++) {
        if(array[i]>number)
            number=array[i];
    }
}*/










