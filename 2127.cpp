#include <iostream>
#include <vector>
#include <unordered_set>
#include <stack>
#include <algorithm>

using namespace std;

void dfs(int node, vector<vector<int>> &adj, vector<bool> &visited, vector<bool> &recStack, vector<int> &currentCycle, vector<int> &maxCycle) {
    visited[node] = true;
    recStack[node] = true;
    currentCycle.push_back(node);

    for (int neighbor : adj[node]) {
        if (!visited[neighbor]) {
            dfs(neighbor, adj, visited, recStack, currentCycle, maxCycle);
        } else if (recStack[neighbor]) {
            // Found a cycle; extract it
            auto it = find(currentCycle.begin(), currentCycle.end(), neighbor);
            if (it != currentCycle.end()) {
                vector<int> cycle(it, currentCycle.end());
                if (cycle.size() > maxCycle.size()) {
                    maxCycle = cycle;
                }
            }
        }
    }

    recStack[node] = false;
    currentCycle.pop_back();
}

int main() {
    // Example adjacency list
    int n = 4; // Number of nodes
    vector<vector<int>> adj(n);

    // Auto-generated edges: adj[i] contains edges from i to arr[i]
    vector<int> arr = {2, 2, 1, 2}; // Example data
    for (int i = 0; i < n; i++) {
        adj[i].push_back(arr[i]);
    }

    // Variables to find the maximum cycle
    vector<bool> visited(n, false);
    vector<bool> recStack(n, false);
    vector<int> currentCycle;
    vector<int> maxCycle;

    // Perform DFS for each node
    for (int i = 0; i < n; i++) {
        if (!visited[i]) {
            dfs(i, adj, visited, recStack, currentCycle, maxCycle);
        }
    }

    // Output the length of the cycle with the maximum nodes
    cout << "Length of the cycle with maximum nodes: " << maxCycle.size() << endl;

    return 0;
}
