#include <bits/stdc++.h>
using namespace std;
class Node{
	public:
		int val;
		Node* left;
		Node* right;
		Node(int val) {
			this->val = val;
			left = NULL;
			right = NULL;
		}
};
Node* buildTree(vector<int>& v) {
    if (v.size()==0) return NULL;
    if (v[0] == -1) return NULL;

    queue<Node*> q;
    Node* root = new Node(v[0]);
    q.push(root);

    int i = 1;
    while(!q.empty() && i < v.size()) {
        Node* temp = q.front(); q.pop();

        // left child
        if (v[i] != -1) {
            temp->left = new Node(v[i]);
            q.push(temp->left);
        }
        i++;
        if(i >= v.size()) break;

        // right child
        if (v[i] != -1) {
            temp->right = new Node(v[i]);
            q.push(temp->right);
        }
        i++;
    }
    return root;
}

Node* LCA(Node* root,int c1,int c2) {
	if(root==NULL) return NULL;
	if(root->val == c1 || root->val == c2) return root;
	Node* leftN = LCA(root->left,c1,c2);
	Node* rightN = LCA(root->right,c1,c2);
	if(leftN && rightN) {
		return root;
	}
	if(leftN) return leftN;
	else return rightN;
}
int main(){
	int n;
	cin>>n;
	vector<int> v(n);
	for(int i = 0;i < n;i++){
		cin>>v[i];
	}
	int c1 , c2;
	cin>>c1>>c2;
	Node* root = buildTree(v);
	cout<<LCA(root,c1,c2)->val<<endl;
}

