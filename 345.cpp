#include<bits/stdc++.h>
using namespace std;

void reverseVowels(string s) {
    string str;
        vector<int> ans;
        for(int i=0 ; i<s.size() ; i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
                str.push_back(s[i]);
                ans.push_back(i);
            }
        }
        for(int i=0 ; i<ans.size() ; i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
        for(auto x : str ){
            cout<<x<<" ";
        }
        cout<<endl;
        sort(str.begin() , str.end());
        for(auto x : str ){
            cout<<x<<" ";
        }
        cout<<endl;
        for(int i=0 ; i<ans.size() ; i++){
            s[ans[i]] = str[i];
        }
        cout<<s<<endl;
    }

int main(){
    string s = "lEetcOde";
    reverseVowels(s);
}