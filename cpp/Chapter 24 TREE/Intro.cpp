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
int levels(Node* root){
    if(root == NULL) return 0;
    return 1 + max(levels(root->left),levels(root->right));
}
// display by level
void display(Node* root,int i,int level){
    if(root == NULL) return;
    if(i == level){
        cout<<root->val<<" ";
        return;
    } 
    
    display(root->left,i+1,level);
    display(root->right,i+1,level);
}
void levelOrder(Node* root){
    int n = levels(root);
    for(int i = 1;i<=n;i++){
        display(root,1,i);
        cout<<endl;
    }
}
int sum(Node* root){
    if(root==NULL) return 0;
    return root->val + sum(root->left) + sum(root->right);
}
int size(Node* root){
    if(root==NULL) return 0;
    return 1 + size(root->left) + size(root->right);
}
int maxInTree(Node* root){
    if(root==NULL) return 0;
    int lMax = maxInTree(root->left);
    int rMax = maxInTree(root->right);
    return max(root->val,max(lMax,rMax));
}
void levelOrderQueue(Node* root){
    queue<Node*> q;
    q.push(root);
    while (q.size()>0)
    {
        Node* temp = q.front();
        q.pop();
        cout<<temp->val<<" ";
        if(temp->left!=NULL) q.push(temp->left);
        else if(temp->left!=NULL) q.push(temp->right);
    }
    cout<<endl;
}
int main(){
    Node* a = new Node(1);
    Node* b = new Node(2);
    Node* c = new Node(3);
    Node* d = new Node(4);
    Node* e = new Node(5);
    Node* f = new Node(6);
    Node* g = new Node(9);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;
    // display(a,1,3);
    levelOrder(a);
    cout<<endl;
    cout<<"sum: "<<sum(a);
    cout<<endl;
    cout<<"size: "<<size(a);
    cout<<endl;
    cout<<"Maximum: "<<maxInTree(a);
    cout<<endl;
    cout<<"Levels: "<<levels(a);
}