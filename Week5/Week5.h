//
// Created by malthe on 9/22/17.
//

#ifndef COURSE_WEEK5_H
#define COURSE_WEEK5_H

#include <array>
#include <vector>
#include <numeric>
#include <iostream>

using namespace std;


class Week5 {

    void readNumbersFromConsole() {
        vector<int> a;
        vector<int> b;
        string line;
        char c;
        int d;

        getline(cin, line);

        for(int i = 0; i < line.size(); i++) {
            char y = line[i];
            int f = 0;
            if(!isdigit(y) && !isspace(y)) {
                c = y;

            } else if(isdigit(y)) {
                d = y-48;
                if(c == 'a') {
                    a.push_back(d);
                } else {
                    b.push_back(d);
                }
            }


        }
        printVectors(a, b);
        int x = 1;


    }

    void printVectors(vector<int> &a, vector<int> &b) {
        int result = inner_product(a.begin(), a.end(), b.begin(), 0);
        cout << result;
    }

/*void printVectors(vector<int> &a, vector<int> &b) {
    //sort(a.begin(), a.end());
    //sort(b.begin(), b.end());
    if(a.size()>=b.size()) {
        for(int i = 0; i <a.size(); i++) {
            cout << a[i] << " ";
            if(i < b.size())
            cout << b[i] << " ";
        }

    } else {
        for(int i = 0; i <b.size(); i++) {
            if(i < a.size())
                cout << a[i] << " ";
            //if(i < b.size())
            cout << b[i] << " ";
        }
    }



}*/

};


#endif //COURSE_WEEK5_H
