#include <bits/stdc++.h>
using namespace std;

void longestPrefix(string s) {
    int n = s.size();
    string str = "";
    vector<string> ans;
    ans.push_back(str);
    for(int i=0 ; i<s.size() ; i++){
        str+=s[i];
        int x = str.size();
        if(s.rfind(str) == n-x){
            ans.push_back(str);
        } 
    }
    for(auto i : ans){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<ans[ans.size()-2]<<endl;
    cout<<ans.size();
}

int main() {
    string s = "ababab";
    longestPrefix(s);
}
