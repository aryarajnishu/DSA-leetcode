#include<bits/stdc++.h>
using namespace std;

int num(string s1, string s2) {
    int ans = 0;
    for (int i = 0; i <= s1.size() - s2.size(); i++) {
        bool match = true;
        for (int j = 0; j < s2.size(); j++) {
            if (s1[i + j] != s2[j]) {
                match = false;
                break;
            }
        }
        if (match) {
            ans++;
        }
    }
    return ans;
}

int minNumberOfFrogs(string croakOfFrogs) {
    unordered_map<char , int> m;
    for(int i=0 ; i<croakOfFrogs.size() ; i++){
        m[croakOfFrogs[i]]++;
    }
    int x = m['c'];
    for(auto i : m){
        if(i.second != x){
            return -1;
        }
    }
    int y = num(croakOfFrogs, "croak") ;
    if(y==0){
        return x;
    }
    else if(y*5 == croakOfFrogs.size()) return 1;
    else return (croakOfFrogs.size() - y*5)/5 + 1;
}

int main(){
    string croakOfFrogs = "croakcrook";

    cout<<minNumberOfFrogs(croakOfFrogs);
    
    
}