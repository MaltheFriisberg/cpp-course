//
// Created by malthe on 11/20/17.
//

#include "Tree.h"


Tree::Tree(int input) {

    topNode = new TreeNode(input, nullptr, nullptr);

    buildTree(topNode,input);




}

void Tree::preOrderTraversal() {

}

void Tree::buildTree(TreeNode *root, int n) {
    TreeNode *test = this->topNode;
    int x = 10;

    TreeNode *left = new TreeNode(n-1, nullptr, nullptr);
    TreeNode *right = new TreeNode(n-2, nullptr, nullptr);

    if(n<=1) {
        return;
    }

    root->left = left;
    root->right = right;

    buildTree(left, n-1);
    buildTree(right, n-2);
}
