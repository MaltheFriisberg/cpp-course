//
// Created by malthe on 11/6/17.
//

#include "doubly-linked.h"

List::List(void) {

    first = nullptr;

}

List::~List(void) {

    TreeNode *current = first;
    while(current != NULL) {
        TreeNode *next = current->next;
        delete(current);
        current = next;
    }
    delete(first);




}

void List::insert(int n) {

    int x = 10;

    if(!first) { //if list is empty
        first = new TreeNode;
        first->val = n;
        first->prev = nullptr;
        first->next = nullptr;



    } else {
        TreeNode *test1 = first;
        //iterate to end of list
        while(test1->next) {
            test1 = test1->next;
        }

        test1->next = new TreeNode;
        test1->next->val = n;
        test1->next->prev =test1;
        test1->next->next = nullptr;

    }





}

void List::reverse(void) {

    TreeNode *current = first;
    TreeNode *temp;
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

    TreeNode *temp = first;

    while(temp!=NULL) {
        cout << temp->val;
        cout << " ";
        temp = temp ->next;
    }
    cout << endl;

}
