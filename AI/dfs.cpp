#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};


void DFS(Node* root) {
    if (!root) return;

    stack<Node*> st;
    st.push(root);

    while (!st.empty()) {
        Node* node = st.top();
        st.pop();

        cout << node->data << " ";

        if (node->right) st.push(node->right);
        if (node->left) st.push(node->left);
    }
}

int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->right = new Node(6);

    cout << "DFS";
    DFS(root);

    return 0;
}
