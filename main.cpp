#include <iostream>
#include <algorithm>
#include <vector>
#include <sstream>

using namespace std;

void printFromCin(vector<int> numbers, int index);
void printNumbersReverse();
int fibonnacci(int x);
bool isPalinDrome(vector<int> numbers, int start, int end);
int main() {

    vector<int> numbers;
    string line;
    getline(cin, line);
    //line.erase(remove_if(line.begin(), line.end(), ::isspace),line.end());
    stringstream stream(line);
    int n;
    while(stream >> n){
        numbers.push_back(n);
    }
    if(isPalinDrome(numbers,0,numbers.size()-1)) {
        cout << "yes";
    } else {
        cout << "no";
    }


    return 0;
}

bool isPalinDrome(vector<int> numbers, int start, int end) {
    //base case
    if(start >= end) {
        return true;
    }
    if(numbers.at(start) == numbers.at(end)) {
        isPalinDrome(numbers, start+1, end-1);
        return true;
    }
    return false;
}

int fibonnacci(int x) {
    if (x == 0)
        return 1;

    if (x == 1)
        return 1;

    return fibonnacci(x-1)+fibonnacci(x-2);
}


void printNumbersReverse() {
    vector<int> numbers;
    string line;
    getline(cin, line);
    //line.erase(remove_if(line.begin(), line.end(), ::isspace),line.end());
    stringstream stream(line);
    int n;
    while(stream >> n){
        numbers.push_back(n);
    }

    printFromCin(numbers, 0);
}

void printFromCin(vector<int> numbers, int index) {

    if(index <numbers.size()) {
        //cin >> n;
        printFromCin(numbers, index+1);
        cout<< numbers.at(index) << " ";

    } else {

        return;
    }

}















