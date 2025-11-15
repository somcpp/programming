#include<bits/stdc++.h>
using namespace std;
void bfs (int start,vector<vector<int>>& adj,int n) {
    queue<int> q;
    vector<bool> visited(n,false);
    visited[start] = true;
    q.push(start);

    cout<<"bfs traversal";

    while(!q.empty()){
        int node = q.front();
        q.pop();
        cout<<node<<" ";

        for(int neighbour : adj[node]) {
            if(!visited[neighbour]) {
                visited[neighbour] = true;
                q.push(neighbour);
            }
        }
    }

}
int main(){
    unordered_map<int ,vector<int>> adj;

}


//dfs
void dfsUtil(int node, vector<vector<int>>& adj, vector<bool>& visited) {
    visited[node] = true;
    cout << node << " ";

    for (int neighbor : adj[node]) {
        if (!visited[neighbor]) {
            dfsUtil(neighbor, adj, visited);
        }
    }
}