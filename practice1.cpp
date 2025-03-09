#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>

using namespace std;

// Graph representation using adjacency lists
typedef unordered_map<int, vector<int>> Graph;

// Function to check isomorphism conditions (dummy for this example)
bool isIsomorphic(int u, int x, const Graph &G, const Graph &G_prime) {
    // Add actual isomorphism checking logic here
    return true; // Placeholder, assuming all conditions are satisfied
}

// Recursive helper function to perform the matching
void matchPaths(int i, vector<pair<int, int>> &currentPath, vector<vector<pair<int, int>>> &allMatches,
                const vector<int> &mu, const Graph &G, const Graph &G_prime, const vector<vector<int>> &pt_mu) {
    if (i == mu.size()) {
        // Add the completed path to the matches
        allMatches.push_back(currentPath);
        return;
    }

    int u = mu[i]; // Current pattern vertex

    if (pt_mu[i][0] == -1) {
        // For the root vertex with no parent, try matching with all vertices in G_prime
        for (const auto &[x, neighbors] : G_prime) {
            // Ensure x is not already in the current path
            bool alreadyMapped = false;
            for (auto &p : currentPath) {
                if (p.second == x) {
                    alreadyMapped = true;
                    break;
                }
            }
            if (alreadyMapped) continue;

            // Check isomorphism conditions
            if (isIsomorphic(u, x, G, G_prime)) {
                // Add (u, x) to the current path
                currentPath.emplace_back(u, x);

                // Recur for the next vertex in mu
                matchPaths(i + 1, currentPath, allMatches, mu, G, G_prime, pt_mu);

                // Backtrack
                currentPath.pop_back();
            }
        }
    } else {
        // For other vertices, iterate through neighbors of the parent in G_prime
        for (int x : G_prime.at(pt_mu[i][0])) {
            // Ensure x is not already in the current path
            bool alreadyMapped = false;
            for (auto &p : currentPath) {
                if (p.second == x) {
                    alreadyMapped = true;
                    break;
                }
            }
            if (alreadyMapped) continue;

            // Check isomorphism conditions
            if (isIsomorphic(u, x, G, G_prime)) {
                // Add (u, x) to the current path
                currentPath.emplace_back(u, x);

                // Recur for the next vertex in mu
                matchPaths(i + 1, currentPath, allMatches, mu, G, G_prime, pt_mu);

                // Backtrack
                currentPath.pop_back();
            }
        }
    }
}

// Main matching algorithm
vector<vector<pair<int, int>>> match(const Graph &G, const Graph &G_prime, const vector<int> &mu,
                                      const vector<vector<int>> &pt_mu) {
    vector<vector<pair<int, int>>> allMatches;

    // Initialize paths
    vector<pair<int, int>> currentPath;

    // Start the matching process
    matchPaths(0, currentPath, allMatches, mu, G, G_prime, pt_mu);

    return allMatches;
}

int main() {
    // Example graph inputs
    Graph G = {
        {0, {1, 2}},
        {1, {0, 2}},
        {2, {0, 1}}
    };

    Graph G_prime = {
        {0, {1, 2}},
        {1, {0, 3}},
        {2, {0, 3}},
        {3, {1, 2}}
    };

    // Pattern vertices order (mu)
    vector<int> mu = {0, 1, 2};

    // Parent vertices of pattern vertices (pt_mu)
    vector<vector<int>> pt_mu = {{-1}, {0}, {1}}; // -1 indicates no parent

    // Perform matching
    vector<vector<pair<int, int>>> matches = match(G, G_prime, mu, pt_mu);

    // Output matches
    cout << "Matches found:\n";
    for (const auto &path : matches) {
        for (const auto &p : path) {
            cout << "(" << p.first << ", " << p.second << ") ";
        }
        cout << "\n";
    }

    // Visualize the matching graph
    cout << "\nMatching Graph:\n";
    for (const auto &path : matches) {
        cout << "Match:\n";
        for (const auto &p : path) {
            cout << p.first << " -> " << p.second << "\n";
        }
        cout << "------------\n";
    }

    return 0;
}
