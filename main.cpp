#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <vector>
#include <set>
//#include "Week2/week2.h"
//this is how to use other classes in the main class
//#include "cmake-build-debug/Week1/week1.h"
//#include "Week2/week2.h"


using namespace std;

int bag[10000000];
set<double> doubles;
string command;
int number;
bool gameOver1 = false;

void readInput();
void doOperation();

int main() {
    //field playground[n][m];

    //week2 week2;
    //week2.primeFactorization();
    gameOver1 = false;
    while(!gameOver1) {
        readInput();
        doOperation();
    }
}

void readInput() {
    cin >> command;

    if(command.compare("quit")==0) {
        gameOver1 = true;
        exit(0);
    } else {
        cin >> number;

    }
}

void doOperation() {
    int x = 1;
    if(command.compare("add")==0) {
        bag[number]++;
    } else if(command.compare("del")==0) {
        if(bag[number]> 0) {
            bag[number]--;
        }
    } else if(command.compare("qry")==0) {
        if(bag[number]>0) {
            cout << "T";
        }else {
            cout << "F";
        }
    } else if(command.compare("quit")==0) {
        gameOver1 = true;
    }
}












