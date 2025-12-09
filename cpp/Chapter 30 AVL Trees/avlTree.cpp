#include <bits/stdc++.h>
using namespace std;
class Node {
public:
    int key;
    Node* left;
    Node* right;
    int height;
    Node(int val) {
        key = val;
        left = nullptr;
        right = nullptr;
        height = 1;
    }
};
int getHeight(Node* n){
    if(n==NULL) {
        return 0;
    }
    return n->height;
}
int getBalanceFactor(Node* n){
    if(n==NULL) {
        return 0;
    }
    return getHeight(n->left) - getHeight(n->right);
} 

Node* rightRotate(Node* y) {
    Node* x = y->left;
    Node* t2 = x->right;

    x->right = y;
    y->left = t2;


    y->height = max(getHeight(y->right) ,getHeight(y->left)) + 1;
    x->height = max(getHeight(x->right), getHeight(x->left)) + 1;

    return x; 
}