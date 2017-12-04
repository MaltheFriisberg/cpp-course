#include <iostream>
#include <algorithm>
#include <vector>
#include <sstream>

using namespace std;

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
    TreeNode() {

    }

};

int numberOfNodes = 0;
int leavesWithoutChildren = 0;
int treeDepth = 1;
TreeNode* buildTree(TreeNode *node, int n);
void PreOrderTraversal(TreeNode *root);

/*int main() {

    int input;

    cin >> input;

    if(input <1) {
        input++;
    }

    TreeNode *rootNode = new TreeNode(0, nullptr, nullptr);
    buildTree(rootNode,input);
    cout<< "Call tree in pre-order: ";
    PreOrderTraversal(rootNode);
    cout << ""<<endl;
    cout << "Call tree size: "<<numberOfNodes<<endl;
    cout << "Call tree depth: "<<input<<endl;
    cout << "Call tree leafs: "<<leavesWithoutChildren<<endl;


    return 0;
}*/

TreeNode* buildTree(TreeNode* node, int n) {
    numberOfNodes++;
    if(n<=1) {
        leavesWithoutChildren++;
        node->value = 1;
        return node;
    }

    TreeNode* left = new TreeNode(0, nullptr, nullptr);
    TreeNode* right = new TreeNode(0, nullptr, nullptr);
    node->left = left;
    node->right = right;


    node->value+=buildTree(left, n-1)->value;
    node->value+=buildTree(right, n-2)->value;
    treeDepth++;
    return node;

}

void PreOrderTraversal(TreeNode *root) {
    if(root == nullptr) {
        return;
    }
    cout << root->value << " ";
    PreOrderTraversal(root->left);
    PreOrderTraversal(root->right);
}



