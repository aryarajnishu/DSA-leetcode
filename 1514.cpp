#include <bits/stdc++.h>
using namespace std;

void sortpart(unordered_map<int, vector<pair<int, double>>> &adj , vector<double> &pro , int x){

    priority_queue<pair<double, int>> mh;
    mh.push({1.0, x});
    pro[x] = 1.0;

    while(!mh.empty()){
        int node = mh.top().second;
        double probability = mh.top().first;

        mh.pop();

        for(auto i : adj[node]){
            if((probability * i.second) > pro[i.first]){
                pro[i.first] = (probability * i.second); 
                mh.push({pro[i.first], i.first});
            }
        }
    }

}

int main(){
    vector<vector<int>> edges = {{0,1},{1,2},{0,2}};
    vector<double> succProb = {0.5,0.5,0.2};
    int n = 3; 

    unordered_map<int, vector<pair<int, double>>> adj;
    for (int i = 0; i < edges.size(); i++) {
        adj[edges[i][0]].push_back({edges[i][1], succProb[i]});
        adj[edges[i][1]].push_back({edges[i][0], succProb[i]});
    }

    vector<double> pro(n, 0);

    sortpart(adj , pro , 0);

    cout << fixed << setprecision(5); // Setting precision to 1e-5

    cout << "ans is :- ";
    for(int i = 0; i < n; i++){
        cout << pro[i] << " ";
    }
    cout << endl;

    return 0;
}
