#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "2523533";
    int n = s.size();
    unordered_map<char, int> mp;
    set<pair<char, int>> st;

    for(int i=0 ; i<n ; i++){
        if(mp.find(s[i]) == mp.end()){
            mp[s[i]] = 1;
        }
    }

    for (int i = 0; i < n; i++) {
        mp[s[i]]++;
    }

    for (auto x : mp) {
        cout << x.first << " " << x.second << endl;
    }

    

    for (auto x : mp) {
        int num = stoi(string(1, x.first)); // Convert char to string before stoi()
        if (num == x.second) {
            ans.push_back(x.first);
        }
    }

    
};
