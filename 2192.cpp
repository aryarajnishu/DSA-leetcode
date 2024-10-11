#include <bits/stdc++.h>
using namespace std;

void dfs(int node, unordered_map<int, vector<int>>& adj, vector<bool>& visited, set<int>& ancestors) {
    // Mark the node as visited
    visited[node] = true;

    // Explore the parents (ancestors) of the current node
    for (int parent : adj[node]) {
        if (!visited[parent]) {
            dfs(parent, adj, visited, ancestors);
        }
        // Add the parent to the ancestors set
        ancestors.insert(parent);
    }
}

int main() {
    vector<vector<int>> edgeList = {{0,7},{7,6},{0,3},{6,3},{5,4},{1,5},{2,7},{3,5},{3,1},{0,5},{7,5},{2,1},{1,4},{6,1}};
    int n = 8;

    // Create adjacency list (directed graph where edges point to ancestors)
    unordered_map<int, vector<int>> adj;
    for (int i = 0; i < edgeList.size(); i++) {
        adj[edgeList[i][1]].push_back(edgeList[i][0]);
    }

    // Initialize the result vector
    vector<vector<int>> ans1(n);

    // For each node, perform a DFS to collect its ancestors
    for (int i = 0; i < n; i++) {
        set<int> ancestors; // To avoid duplicates, we use a set
        vector<bool> visited(n, false); // Track visited nodes for each DFS
        dfs(i, adj, visited, ancestors);

        // Copy ancestors from the set to the ans1 vector
        ans1[i] = vector<int>(ancestors.begin(), ancestors.end());
    }

    // Print the final result
    for (int i = 0; i < ans1.size(); i++) {
        cout << "Size of " << i << "th is " << ans1[i].size() << " :- ";
        for (int j = 0; j < ans1[i].size(); j++) {
            cout << ans1[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
