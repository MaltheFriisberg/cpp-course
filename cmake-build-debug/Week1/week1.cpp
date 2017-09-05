//
// Created by malthe on 9/4/17.
//

#include "week1.h"

#include <iostream>

using namespace std;





void week1::helloBuddy() {
    string input;
    //cout << "name: ";
    cin >> input;
    cout << "Hello "+input+"!" << endl;
}

void week1::helloIfs() {
    //By default, cin reads from the input discarding any spaces.
    // So, all you have to do is to use a do while loop to read
    // the input more than one time:
    int firstNumber;
    int secondNumber;

    cin >> firstNumber;
    cin >> secondNumber;

    if(firstNumber > secondNumber) {
        cout << firstNumber;
        cout << " is bigger than ";
        cout << secondNumber;

    } else if(firstNumber < secondNumber){
        cout << firstNumber;
        cout << " is smaller than ";
        cout << secondNumber;


    } else if(secondNumber == firstNumber) {
        cout << firstNumber;
        cout << " is equal to ";
        cout << secondNumber;

    }

}

void week1::helloMath() {

    double firstNumber;
    double secondNumber;
    double thirdNumber;

    cin >> firstNumber;
    cin >> secondNumber;
    cin >> thirdNumber;

    double result = (firstNumber + secondNumber) -thirdNumber;

    cout << result << endl;

}

void week1::print() {

    cout << 5 +" bigger than " +10;

}
