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
        first = new Node;
        first->val = n;
        first->prev = nullptr;
        first->next = nullptr;
        /*
        Node node;
        node.prev = nullptr;
        node.next = nullptr;
        node.val = n;
        //set pointer to this new one
        first = &node;*/



    } else {

        Node current = *first;
        Node *test1 = first;
        //iterate to end of list
        while(test1->next) {
            test1 = test1->next;




        }

        test1->next = new Node;
        test1->next->val = n;
        test1->next->prev =test1;
        test1->next->next = nullptr;
        /*Node node;
        node.val = n;
        node.next = nullptr;
        test1->next = &node;
        node.prev = test1;
        Node test = *first;
        int x = 20;*/

    }





}

void List::reverse(void) {

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
