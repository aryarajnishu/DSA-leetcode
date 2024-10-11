#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<string> words = {"a","ab","abc","d","cd","bcd","abcd"};
    int n = words.size();
    unordered_map<string , vector<int>> adj ;
    for(int i=0 ; i<words.size() ; i++){
        vector<int> vis(26 , 0);
        for(int j=0 ; j<words[i].size() ; j++){
            vis[words[i][j] - 'a']++;
        }
        adj[words[i]] = vis;
        vis.clear();
    }
    int maxi = 0;
    for(int i=0 ; i<n ; i++){
        for(int j=i+1 ; j<n ; j++){
            bool flag = true;
            vector<int> v1 = adj[words[i]];
            vector<int> v2 = adj[words[j]];
            for(int k=0 ; k<26 ; k++){
                if(v1[k] > 0 && v2[k]>0){
                    flag = false;
                    break;
                }
            }
            if(flag){
                int s = words[i].size() * words[j].size();
                maxi = max(maxi , s);
            }
        }
    }
    cout<<"max is :- "<<maxi;
}