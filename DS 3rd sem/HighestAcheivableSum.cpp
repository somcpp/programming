#include<bits/stdc++.h>
using namespace std;
class Node{
public:
	int val;
	Node *left , *right;
	Node(int val) {
		this->val = val;
		left = NULL;
		right = NULL;
	}
};
Node* buildTree(vector<int> &v){
	int i = 1;
	queue<Node*> que;
	Node* root = new Node(v[0]);
	que.push(root);
	while(!que.empty() && i < v.size()){
		Node* temp = que.front(); que.pop();
		temp->left = new Node(v[i++]);
		if(i>=v.size()) break;
		temp->right = new Node(v[i++]);
	}
	return root;
}
int maxSum = 0;
int solve (Node* root){
	if(root==NULL) return 0;
	int leftSum = solve(root->left) + root->val;
	int rightSum = solve(root->right) + root->val;
	return maxSum = max(maxSum,leftSum + rightSum);
}
int main(){
	string s;
	getline(cin,s);
	stringstream ss(s);
	vector<string> nodes;
	string temp;
	while(ss >> temp) {
		if(temp!="null" && temp!="-1") {
			nodes.push_back(temp);
		}
	}
	maxSum = 0;
	Node* root = buildTree(nodes);
	cout<<maxSum<<endl;
}