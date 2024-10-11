#include <bits/stdc++.h>
using namespace std;

int main(){
    int n = 13;
    vector<string> str;
    for(int i=1 ; i<=n ; i++){
        str.push_back(to_string(i));
    }
    sort(str.begin() , str.end());
    vector<int> ans;
    for(auto i : str){
        ans.push_back(stoi(i));
    }

    for(int i=0 ; i<ans.size() ; i++){
        cout<<ans[i]<<" ";
    }
}