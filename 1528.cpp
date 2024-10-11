#include<bits/stdc++.h>
using namespace std;

string restoreString(string s, vector<int>& indices) {
        string str=s;
        for(int i=0 ; i<s.size() ; i++){
            str[i]= 'a';
        }
        for(int i=0  ; i<indices.size() ; i++){
            str[i] = s[indices[i]];
        }
        // cout<<str.size();
        return str;
    }

int main(){
    vector<int> indices = {4,5,6,7,0,2,1,3};
    string s = "codeleet";
    // cout<<s[2];
    cout<<restoreString(s, indices) ;
}