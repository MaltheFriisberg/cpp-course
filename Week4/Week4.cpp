//
// Created by malthe on 9/18/17.
//

#include <cstdlib>
#include <map>
#include <set>
#include <iostream>
#include "Week4.h"
using namespace std;

map<double, int> myMap;
set<double> doubles;
string command;
double number;
bool gameOver1 = false;

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
        if(myMap.count(number) == 0) {
            myMap.insert(pair<double, int>(number, 1));
        }else {
            myMap[number]++;
        }
        //map.insert(pair<double, int>());
        //bag[number]++;
    } else if(command.compare("del")==0) {
        if(myMap.count(number) > 0) {
            myMap[number]--;
        }
    } else if(command.compare("qry")==0) {
        if(myMap[number]>0) {
            cout << "T";
        }else {
            cout << "F";
        }
    } else if(command.compare("quit")==0) {
        gameOver1 = true;
    }
}
/*
using namespace std;

int bag[10000000];
set<double> doubles;
string command;
double number;
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
        doubles.insert(number);
        //bag[number]++;
    } else if(command.compare("del")==0) {
        if(doubles.find(number) == doubles.end()) {
            doubles.erase(number);
        }
    } else if(command.compare("qry")==0) {
        if(doubles.find(number) != doubles.end()) {
            cout << "T";
        }else {
            cout << "F";
        }
    } else if(command.compare("quit")==0) {
        gameOver1 = true;
    }
}*/


