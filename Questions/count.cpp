#include <bits/stdc++.h>
using namespace std;

long long result_base_node = 0;
vector<int> count_nodes;
int N;

int dfsBase(unordered_map<int, vector<int>> &adj,
            int curr_node, int prev_node, int curr_depth) 
{
    int total_node = 1; // count itself first

    result_base_node += curr_depth;

    cout << "ENTER node " << curr_node
         << " | depth = " << curr_depth
         << " | parent = " << prev_node << "\n";

    for (int child : adj[curr_node]) {
        if (child == prev_node) continue;

        cout << "  -> Going to child " << child << "\n";
        total_node += dfsBase(adj, child, curr_node, curr_depth + 1);
    }

    count_nodes[curr_node] = total_node;

    cout << "EXIT node " << curr_node
         << " | subtree_size = " << total_node << "\n\n";

    return total_node;
}

int main() {
    // EXACT same edges as example
    vector<vector<int>> edges = {
        {0,1}, {0,2}, {2,3}, {2,4}, {2,5}
    };

    N = 6;
    count_nodes.resize(N, 0);

    unordered_map<int, vector<int>> adj;
    for (auto &e : edges) {
        adj[e[0]].push_back(e[1]);
        adj[e[1]].push_back(e[0]);
    }

    cout << "Starting dfsBase from node 0\n\n";
    dfsBase(adj, 0, -1, 0);

    cout << "---------- FINAL OUTPUT ----------\n";
    cout << "result_base_node (sum distances from 0) = "
         << result_base_node << "\n\n";

    cout << "Subtree sizes:\n";
    for (int i = 0; i < N; i++) {
        cout << "Node " << i << ": " << count_nodes[i] << "\n";
    }

    return 0;
}
