#include<iostream>
#include<vector>
#include<math.h>
#include<string>
#include<bits/stdc++.h>
#include <algorithm>
using namespace std;

 string makestr(string s){
    int i=0;
    while((s[i] == ' ')){
        s.erase(s.begin() + i);
    }
    int j =0;
    while(j<s.size()){
        if(s[j]==' ' && s[j+1]==' '){
            s.erase(s.begin() + j);
            j--;
        }
        j++;
    }
    int n = s.size();
    if(s[n-1]==' '){
        s.pop_back();
    }
    return s;
 }


 void reverseWords(string s) {
        string str1 = makestr(s);
        cout<<str1<<endl;
        vector<string> v;
        string str="";
        str1.push_back(' ');
        for(int i=0 ; i<str1.size() ; i++){
            if(str1[i] != ' '){
                char ch = str1[i];
                str.push_back(ch);
            }
            else{
                v.push_back(str);
                str = "";
            }
        }
        reverse(v.begin() , v.end());
        for(string x : v){
            cout<<x<<" ";
        }
        cout<<endl;
        for(int i=0 ; i<v.size() ; i++){
            str = str + v[i];
            if(i != v.size()-1){
                str.push_back(' ');
            }
        }
        cout<<str<<endl;
        cout<<str.size();
}

int main(){
    string s = "the sky is blue";
    reverseWords(s);

}

