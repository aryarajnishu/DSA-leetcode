#include <bits/stdc++.h>
using namespace std;

int main(){
    string s = "ABCDEFGHCDBAAB";
    string s1 = "";
    for(int i=0 ; i<s.size()-1 ; i++){
        if((s[i+1] == 'B' && s[i] == 'A') || (s[i] == 'C' && s[i+1] == 'D')){
            i++;
            continue;
        }
        else{
            s1+=s[i];
        }
    }
    if(s[s.size()-1] != 'B' || s[s.size()-1] != 'D') s1+=s[s.size()-1];
    cout<<s1;
}