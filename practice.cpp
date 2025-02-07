// #include <iostream>
// #include <vector>
// #include <unordered_map>
// #include <unordered_set>
// #include <algorithm>

// using namespace std;

// int computeRank(const vector<int>& Vu_vis, const vector<int>& Vu_neigh, const vector<int>& Vu_unv) {
//     return Vu_vis.size() + Vu_neigh.size() + Vu_unv.size();
// }

// vector<int> GreatestConstraintFirst(const unordered_map<int, vector<int>>& graph) {
//     vector<int> orderedVertices;
//     unordered_map<int, int> parentMap;

//     // Find the vertex with the maximum degree
//     int maxDegreeVertex = -1;
//     int maxDegree = -1;
//     for (const auto& [vertex, neighbors] : graph) {
//         if ((int)neighbors.size() > maxDegree) {
//             maxDegree = neighbors.size();
//             maxDegreeVertex = vertex;
//         }
//     }

//     if (maxDegreeVertex == -1) {
//         cerr << "Graph is empty or invalid.\n";
//         return {};
//     }

//     unordered_set<int> remainingVertices;
//     for (const auto& [vertex, _] : graph) {
//         remainingVertices.insert(vertex);
//     }

//     // Start with the vertex with the maximum degree
//     remainingVertices.erase(maxDegreeVertex);
//     orderedVertices.push_back(maxDegreeVertex);
//     parentMap[maxDegreeVertex] = -1;

//     while (!remainingVertices.empty()) {
//         int selectedVertex = -1;
//         int maxRank = -1;

//         for (int u : remainingVertices) {
//             vector<int> Vu_vis, Vu_neigh, Vu_unv;

//             for (int v : graph.at(u)) {
//                 if (find(orderedVertices.begin(), orderedVertices.end(), v) != orderedVertices.end()) {
//                     Vu_vis.push_back(v);
//                 }
//             }

//             for (int v : graph.at(u)) {
//                 if (remainingVertices.find(v) != remainingVertices.end()) {
//                     Vu_neigh.push_back(v);
//                 }
//             }

//             for (int v : remainingVertices) {
//                 if (graph.at(u).end() == find(graph.at(u).begin(), graph.at(u).end(), v)) {
//                     Vu_unv.push_back(v);
//                 }
//             }

//             int rank = computeRank(Vu_vis, Vu_neigh, Vu_unv);

//             if (rank > maxRank) {
//                 maxRank = rank;
//                 selectedVertex = u;
//             }
//         }

//         // Ensure a valid vertex is selected
//         if (selectedVertex != -1) {
//             parentMap[selectedVertex] = orderedVertices.back();
//             orderedVertices.push_back(selectedVertex);
//             remainingVertices.erase(selectedVertex);
//         }
//     }

//     cout << "Ordered Vertices: ";
//     for (int vertex : orderedVertices) {
//         cout << vertex << " ";
//     }
//     cout << endl;

//     cout << "Parent Map: ";
//     for (const auto& [vertex, parent] : parentMap) {
//         cout << "(" << vertex << " -> " << parent << ") ";
//     }
//     cout << endl;

//     return orderedVertices;
// }

// int main() {
//     unordered_map<int, vector<int>> graph = {
//         {0, {1, 2}},
//         {1, {0, 3}},
//         {2, {0, 3}},
//         {3, {1, 2, 4}},
//         {4, {3}}
//     };

//     vector<int> result = GreatestConstraintFirst(graph);
//     return 0;
// }

