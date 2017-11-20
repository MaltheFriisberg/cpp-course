//
// Created by malthe on 11/20/17.
//

#ifndef COURSE_TREE_H
#define COURSE_TREE_H


struct TreeNode {
    //bool isConstant;
    int value;
    //char op;
    //pointers to child nodes
    TreeNode *left;
    TreeNode *right;

    TreeNode( int value, TreeNode *left, TreeNode *right) {
        //this->isConstant = isConstant;
        this->value = value;
        //this->op = op;
        this->left = left;
        this->right = right;
    }

};

class Tree {

public:
    int numberOfNodes;
    Tree(int input);
    void preOrderTraversal();

private:
    void buildTree(TreeNode * root, int n);
    TreeNode* topNode;


};


#endif //COURSE_TREE_H
