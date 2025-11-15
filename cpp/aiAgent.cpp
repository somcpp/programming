#include<iostream>
#include<queue>
using namespace std;
class Node{
public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
int main(){
    Node* a = new Node(0);
    Node* b = new Node(0);
    Node* c = new Node(0);
    Node* d = new Node(0);
    Node* e = new Node(0);
    Node* f = new Node(0);
    Node* g = new Node(0);
    Node* h = new Node(-1);
    Node* i = new Node(4);
    Node* j = new Node(2);
    Node* k = new Node(6);
    Node* l = new Node(-3);
    Node* m = new Node(-5);
    Node* n = new Node(0);
    Node* o = new Node(7);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    d->left = h;
    d->right = i;
    e->right = k;
    e->left = j;
    c->left = f;
    c->right = g;
    f->left = l;
    f->right = m;
    g->left = n;
    g->right = o;

    // display(a,1,3);
}