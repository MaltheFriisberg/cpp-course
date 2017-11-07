//
// Created by malthe on 11/6/17.
//

#include "doubly-linked.h"

List::List(void) {

    first = nullptr;

}

List::~List(void) {

    Node *current = first;
    while(current != NULL) {
        Node *next = current->next;
        delete(current);
        current = next;
    }




}

void List::insert(int n) {

    int x = 10;

    if(!first) { //if list is empty
        first = new Node;
        first->val = n;
        first->prev = nullptr;
        first->next = nullptr;



    } else {
        Node *test1 = first;
        //iterate to end of list
        while(test1->next) {
            test1 = test1->next;
        }

        test1->next = new Node;
        test1->next->val = n;
        test1->next->prev =test1;
        test1->next->next = nullptr;

    }





}

void List::reverse(void) {

    Node *current = first;
    Node *temp;
    //go to the end first
    while(current!=NULL) {
        temp = current->next;
        current->next = current->prev;
        current->prev = temp;
        first = current;
        current = temp;

    }







}

void List::print(void) {

    Node *temp = first;

    while(temp!=NULL) {
        cout << temp->val;
        cout << " ";
        temp = temp ->next;
    }
    cout << endl;

}
