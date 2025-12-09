#include <bits/stdc++.h>
using namespace std;
class Node{
public:
    char ch;
    int freq;
    Node *left , *right;
    Node(char ch,int freq,Node* left , Node* right) {
        this->left = left;
        this->right = right;
        this->ch = ch;
        this->freq = freq;
    }
};

void printCode(Node* root,string str) {
    if(root==NULL) return ;
    if(root->left == NULL && root->right == NULL) {
        cout<<str<<" ";
        return;
    }
    printCode(root->left,str + "0");
    printCode(root->right,str+"1");
}

struct compare{
    bool operator()(Node* l, Node* r) {
        return l->freq>r->freq;
    }
};

int main(){
    	string str;
	cin>>str;
	int n = str.length();
	vector<int> freq(n);
	for(int i = 0;i < n; i++){
		cin>>freq[i];
	}
    priority_queue<Node* ,vector<Node* >, compare>pq;
    for(int i = 0; i < n; i++){
        pq.push(new Node(str[i],freq[i],NULL,NULL));
    }
    while(pq.size()>1) {
        Node* left = pq.top(); pq.pop();
        Node* right = pq.top(); pq.pop();
        int sum = left->freq + right->freq;
        pq.push(new Node('0',sum,NULL,NULL));
    }
    Node* root = pq.top();
    printCode(root,"");
    return 0;
}