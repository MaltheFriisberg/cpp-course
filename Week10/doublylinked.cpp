//
// Created by malthe on 11/6/17.
//

#include "doublylinked.h"

List::List(void) {

    first = nullptr;

}

List::~List(void) {

    Node current;




}

void List::insert(int n) {

    int x = 10;

    if(!first) { //if list is empty

        Node node;
        node.prev = nullptr;
        node.next = nullptr;
        node.val = n;
        //set pointer to this new one
        first = &node;


    } else {

        Node current = *first;
        //iterate to end of list
        while(current.next) {
            current = *current.next;

        }

        Node node;
        node.val = n;
        current.next = &node;
        node.prev = &current;
        Node test = *first;
        int x = 20;

    }





}

void List::reverse(void) {

}

void List::print(void) {

    Node current = *first;
    if(!current.next) {
        cout << current.val;
    } else {
        //Node second = *current.next;

        while(current.next) {
            current = *current.next;
            cout << current.val << " ";
        }

    }


}
