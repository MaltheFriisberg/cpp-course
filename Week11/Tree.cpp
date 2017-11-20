//
// Created by malthe on 11/20/17.
//

#include <iostream>
#include "Tree.h"
using namespace std;


Tree::Tree(int input) {

    numberOfNodes = 0;
    leavesWithoutChildren = 0;

    topNode = new TreeNode(input, nullptr, nullptr);

    buildTree(topNode,input);




}

void Tree::preOrderPrint() {
    PreOrderTraversal(this->topNode);
}

void Tree::PreOrderTraversal(TreeNode *root) {
    if(root == nullptr) {
        return;
    }
    cout << root->value << " ";
    PreOrderTraversal(root->left);
    PreOrderTraversal(root->right);
}

void Tree::buildTree(TreeNode *root, int n) {
    numberOfNodes++;
    TreeNode *test = this->topNode;
    int x = 10;
    //base case
    if(n<=1) {
        leavesWithoutChildren++;
        return;
    }
    //Fibonacci(0) = 1
    int leftn = n-1;
    int rightn = n-2;
    if(leftn ==0) {
        leftn=1;
    }
    if(rightn == 0) {
        rightn=1;
    }
    TreeNode *left = new TreeNode(leftn, nullptr, nullptr);
    TreeNode *right = new TreeNode(rightn, nullptr, nullptr);

    root->left = left;
    root->right = right;

    buildTree(left, n-1);
    buildTree(right, n-2);
}
