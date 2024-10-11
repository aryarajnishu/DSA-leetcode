#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<int>> ans = {{0,1},{2,1},{3,1},{1,4},{2,4}};
    int n = 5;
    
    unordered_map<int, vector<int>> adj;
    
    for(int i=0 ; i<ans.size() ; i++){
        adj[ans[i][0]].push_back(ans[i][1]);
    }

    cout << "Adjacency list is:" << endl;
    for (int i = 0; i < n ; i++) {
        cout << i << " -> { ";
        for (auto &j : adj[i]) {
            cout <<j<<" ";
        }
        cout << "}" << endl;
    }

    set<int> st;

    for(int i=0 ; i<n ; i++){
        for(auto j:adj[i]){
            st.insert(j);
        }
    }

    for (int elem : st) {
        cout << elem << " ";
    }

    cout<<"ans is :- ";
    vector<int> ans1(n,0);
    for (int elem : st) {
        ans1[elem] ++;
    }

    for(int i=0 ; i<n ; i++){
        if(ans1[i] == 0){
            cout<<i<<" ";
        }
    }

}