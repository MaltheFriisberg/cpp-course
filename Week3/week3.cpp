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
bool gameOver;

field playground[n][m];

void drawPlayGround();
void evaluatePlayerTurn();

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

int startGame() {
    //field playground[n][m];

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
    //cout >> ""playground[0][0].isWall;
    field playground1[n][m];
    drawPlayGround();
    playground1 == playground;

    gameOver = false;

    while(!gameOver) {

        evaluatePlayerTurn();
        if(!gameOver) {
            drawPlayGround();
        }
    }

}
void evaluatePlayerTurn() {
    char turn;
    cin >> turn;
    field field1;
    switch(turn) {
        case 'l' :
            field1 = playground[global_X-1][global_y];
            int k;
            if(!field1.isWall) {
                global_X--;

            }

            break;
        case 'r' :
            field1 = playground[global_X+1][global_y];
            int r;
            if(!field1.isWall) {
                global_X++;
                break;
                case 'u' :
                    field1 = playground[global_X][global_y-1];
                int z;
                if (!field1.isWall) {
                    global_y--;

                }
                break;
                case 'd' :
                    field1 = playground[global_X][global_y+1];
                int d;
                if (!field1.isWall) {
                    global_y++;

                }
                break;
                case 'q':
                    gameOver = true;
                break;
            }
    }



}
void drawPlayGround() {
    int x = 1;
    for(int i=0; i <m; i++) {
        for(int j=0; j<n; j++) {
            field field1 = playground[j][i];
            int x = global_X;
            int y = global_y;
            int k;
            if(field1.isWall) {
                cout << '*';
            }else if(j == global_X && i == global_y) {
                cout << "O";
            }else {
                cout << " ";
            }

        }
        cout << ""<<endl;
    }
}

