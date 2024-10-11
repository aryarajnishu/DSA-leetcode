#include <bits/stdc++.h>
using namespace std;

void dijkstra(unordered_map< int, vector<pair<int,int>>> adj , vector<int> &dis , int x){

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> mh;
    mh.push({0, x});
    dis[x]=0;

    while(!mh.empty()){
        int node = mh.top().second;
        int weight = mh.top().first;

        mh.pop();
        for(auto i : adj[node]){
            if(weight + i.second < dis[i.first]){
                dis[i.first] = weight + i.second; 
                mh.push({dis[i.first] , i.first});
            }
        }
    }
}

int main(){
    vector<vector<int>> times = {{2,1,1},{2,3,1},{3,4,1}};
    int n = 4, k = 2 , m = times.size();

    unordered_map< int, vector<pair<int,int>>> adj;
    for(int i=0 ; i<m ; i++){
        adj[times[i][0]].push_back({times[i][1] , times[i][2]});
    }

    vector<int> dis(n+1 , 101);

    dijkstra(adj , dis , k);

    for(int i=1 ; i<dis.size() ; i++){
        cout<<dis[i]<<" ";
    }


}