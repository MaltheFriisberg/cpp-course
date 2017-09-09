#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <vector>
//#include "Week2/week2.h"
//this is how to use other classes in the main class
//#include "cmake-build-debug/Week1/week1.h"
//#include "Week2/week2.h"

using namespace std;

const int n = 16;
const int m = 12;

typedef enum {wood , stone} material;

typedef struct{
    int x,y;
    bool isWall;
    material type;
}field;

int global_X;
int global_y;

field playground[n][m];

void drawPlayGround();

int main() {

    //week2 week2;
    //week2.primeFactorization();
    global_X = global_y = 5;
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            playground[i][j].x=i;
            playground[i][j].y=j;
            playground[i][j].isWall=(i==0||i==(n-1)||(j==0&&i!=3) ||j==(m-1));
            if (playground[i][j].isWall && !(i==3 && j==0))
                playground [i][j].type=stone;
            else
                playground [i][j].type=wood;
        }
    }
    drawPlayGround();
    
}

void drawPlayGround() {
    int x = 1;
    for(int i=0; i <m; i++) {
        for(int j=0; j<n; j++) {
            field field1 = playground[i][j];
            if(field1.isWall) {
                cout << "*";
            }else {
                cout << " ";
            }

        }
        cout << ""<<endl;
    }
}













