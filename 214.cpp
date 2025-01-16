#include <bits/stdc++.h>
using namespace std;

void fun(string s) {
    string nishu = s;
    reverse(s.begin(), s.end());
    // cout<<s<<" "<<endl;

    int n = s.size();

    string str="";
    vector<int> index;
    
    for(int i=n-1 ; i>=n/2 ; i--){
        str = str + s[i];

        if(s.find(str) != -1){
            if(s.find(str) == i-str.size() || s.find(str) == i-str.size()-1){
                index.push_back(s.find(str));
            }
        }
    }
    // cout<<s.find(str)<<" ";
    // cout<<str;

    cout<<index.size()<<" ";

    // if(index.size()==0){
    //     cout<<s<<" "<<nishu<<" ";
    // }

    string s1 = "";
    for(int i=0 ; i<index.size() ; i++){
        s1 = s1 + s[i];
    }

    s = s + s1;
    cout<<s;




}

int main(){
    string s = "aaaa";
    fun(s);
}