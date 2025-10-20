#include <bits/stdc++.h>
using namespace std;

// --------------------- BFS ---------------------
void bfs(int start, vector<vector<int>>& adj, int n) {
    vector<bool> visited(n, false);
    queue<int> q;

    visited[start] = true;
    q.push(start);

    cout << "BFS Traversal: ";

    while (!q.empty()) {
        int node = q.front();
        q.pop();
        cout << node << " ";

        for (int neighbor : adj[node]) {
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                q.push(neighbor);
            }
        }
    }
    cout << endl;
}

// --------------------- DFS (Iterative) ---------------------
void dfsIterative(int start, vector<vector<int>>& adj, int n) {
    vector<bool> visited(n, false);
    stack<int> st;

    visited[start] = true;
    st.push(start);

    cout << "DFS Iterative Traversal: ";

    while (!st.empty()) {
        int node = st.top();
        st.pop();
        cout << node << " ";

        for (int neighbor : adj[node]) {
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                st.push(neighbor);
            }
        }
    }
    cout << endl;
}

// --------------------- DFS (Recursive) ---------------------
void dfsRecursiveUtil(int node, vector<vector<int>>& adj, vector<bool>& visited) {
    visited[node] = true;
    cout << node << " ";

    for (int neighbor : adj[node]) {
        if (!visited[neighbor]) {
            dfsRecursiveUtil(neighbor, adj, visited);
        }
    }
}

void dfsRecursive(int start, vector<vector<int>>& adj, int n) {
    vector<bool> visited(n, false);
    cout << "DFS Recursive Traversal: ";
    dfsRecursiveUtil(start, adj, visited);
    cout << endl;
}

// --------------------- MAIN ---------------------
int main() {
    int n = 6; // number of nodes
    vector<vector<int>> adj(n);

    // Example undirected graph
    adj[0] = {1, 2};
    adj[1] = {0, 3, 4};
    adj[2] = {0, 4};
    adj[3] = {1, 5};
    adj[4] = {1, 2, 5};
    adj[5] = {3, 4};

    bfs(0, adj, n);
    dfsIterative(0, adj, n);
    dfsRecursive(0, adj, n);

    return 0;
}
