#include <bits/stdc++.h>
using namespace std;

void findRedundantConnection(vector<vector<int>>& edges) {
    int n = edges.size();
    map<int, vector<int>> m; 
    map<int,int> degree;

    for (auto& edge : edges) {
        int u = edge[0], v = edge[1]; 
        m[u].push_back(v);
        m[v].push_back(u);
    }

    for (auto& pair : m) {
        degree[pair.first] = pair.second.size();
        cout<<pair.first<<" "<<pair.second.size()<<endl;
    }

    int x = -1, y = -1;

    for(int i=n-1 ; i>=0 ;  i--){
        if(degree[edges[i][0]] > 1  && degree[edges[i][1]] > 1){
            x = edges[i][0] , y = edges[i][1];
            break;
        }
    }

    cout<<x<<" "<<y;
}

int main(){
    vector<vector<int>> edges = {
        {9, 10}, {5, 8}, {2, 6}, {1, 5}, {3, 8}, 
        {4, 9}, {8, 10}, {4, 10}, {6, 8}, {7, 9}
    };
    findRedundantConnection(edges);
    return 0;
}