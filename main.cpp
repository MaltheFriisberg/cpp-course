#include <iostream>
#include <algorithm>
#include <vector>
#include <sstream>
#include "Week10/doubly-linked.h"
using namespace std;

int main() {

    List l;
    int n;

    l.insert(1);
    l.insert(2);
    l.insert(3);
    l.insert(4);
    l.insert(5);
    l.insert(6);
    l.insert(7);
    l.insert(8);
    l.insert(9);
    l.insert(10);

    // Print list as read from cin
    l.print();
    // Reverse the list and print it
    l.reverse();
    l.print();
    // Reverse again and print it
    l.reverse();
    l.print();




    return 0;
}


