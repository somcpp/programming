#include<bits/stdc++.h>
using namespace std;
class Node {
public:
	int val;
	Node* left;
	Node* right;
	Node(int val) {
		this->val = val;
		this->left = NULL;
		this->right = NULL;
	}
};
unordered_map<int,int> mp;
Node* buildTree(vector<int> &preorder,int start,int end,int &idx){
    if(start>end) return NULL;
    
    int val = preorder[idx++];
    int i = mp[val];
    Node* root = new Node(val);
    root->left = buildTree(preorder,0,i-1,idx);
    root->right = buildTree(preorder,i+1,end,idx);
    return root;
}
void printTree(Node* root){
	if(root==NULL) return;
	printTree(root->left);
	printTree(root->right);
	cout<<root->val<<" ";
}
int main(){
	int n;
	cin>>n;
	vector<int> preorder(n), inorder(n);
	for(int i = 0;i < n;i++){
		cin>>inorder[i];
		mp[inorder[i]] = i;
	}
	for(int i = 0;i < n;i++){
		cin>>preorder[i];
	}
	int idx = 0;
	Node* root = buildTree(preorder,0,n-1,idx);
	printTree(root);
}