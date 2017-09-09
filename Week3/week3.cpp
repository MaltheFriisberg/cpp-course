//
// Created by malthe on 9/5/17.
//

#include <vector>
#include <cmath>
#include <iostream>
#include "week3.h"

using namespace std;

void histogram();
int loadNumbersIntoVector(vector<int> &vector, int n);

void histogram() {
    //cout << "program start"<< endl;
    int intervals,n,largestnumber, k;
    cin >> intervals;
    cin >> n;
    vector<int> vector(n);
    largestnumber = loadNumbersIntoVector(vector, n);
    //sort(vector.begin(),vector.end());

    k = ceil((double)largestnumber/(double)intervals);
    for(int i = 1; i <intervals+1; i++) {
        int lowerBound = (i-1)*k;
        int upperBound = (i*k);
        int intervalCount = 0;
        for(int j = 0; j < vector.size(); j++) {
            int number = vector[j];
            int f = 7;
            if(number >= lowerBound && number < upperBound) {

                int distanceToLowerBound = number - lowerBound;
                int distanceToUpperBound = upperBound - number;

                int x;


                intervalCount++;
            }
        }
        cout << lowerBound;
        cout << ": ";
        cout << intervalCount<<endl;
    }
}
//vector is passed by reference here (standard in java)
int loadNumbersIntoVector(std::vector<int> &vector, int n) {

    int largest = 0;

    for(int i=0; i <n; i++) {
        int number;
        //cin>>vector[i];
        cin>>number;
        vector[i] = number;
        //cout<<vector[i];

        if(number > largest) {
            largest = number;
        }
        //vector[i] = number;

    }
    //cout << "returning largest"<< endl;

    return largest;

}
