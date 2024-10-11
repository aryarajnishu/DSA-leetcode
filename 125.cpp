#include<iostream>
#include<vector>
#include<math.h>
#include<string>
#include<bits/stdc++.h>
#include <algorithm>
using namespace std;

void isPalindrome(string s) {
        string str;
        for(int i=0 ; i<s.size() ; i++){
            if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z')){
                str.push_back(s[i]);
            }
        }
        transform(str.begin(), str.end(), str.begin(), ::tolower);
        string s2 = str;
        cout<<s2<<endl;
        reverse(str.begin() , str.end());
        cout<<str<<endl;
        if(str==s2){
            cout<<true;
        }
        else{
            cout<<false;
        }
        // return false;
}

int main(){
    string s = "0P";
    isPalindrome(s);
}