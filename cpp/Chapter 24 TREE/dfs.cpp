#include<iostream>
#include<queue>
#include<stack>
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
stack<int> st;
vector<int> v;

bool dfs(Node* a) {
    if (a == NULL) return false;

    v.push_back(a->val);

    if (a->val == 9) {
        cout << "value found\n";
        return true;
    }


    if (dfs(a->left)) return true;


    if (dfs(a->right)) return true;


    v.pop_back();
    return false;
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

    stack<int> st;



    bool flag = dfs(a);
    if(flag==false){
        cout<<"not found";
    }
    // while(a){
    //     if(a->left==NULL){
    //         a = a->right;
    //     }else{
    //         a = a->left;
    //     }
    //     if(!st.empty()){
    //         st.pop();
    //     }
    //     int left = a->left->val;
    //     int right = a->right->val;
    //     st.push(left);
    //     st.push(right);
    //     if(st.top() == g->val){
    //         cout<<"goal found";
    //     }
    // }
    // cout<<"goal not found";
}