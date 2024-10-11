#include<bits/stdc++.h>
using namespace std;
vector<int> FinfAB(string s){
    int a=0;
    string s1="";
    string s2="";
    while(s[a]!='+'){
        s1.push_back(s[a]);
        a++;
    }
    a++;
    while(s[a]!='i'){
        s2.push_back(s[a]);
        a++;
    }
    int n1 = stoi(s1),n2=stoi(s2);
    vector<int> ans;
    ans.push_back(n1);
    ans.push_back(n2);
    return ans;
}
int main(){
    string s1 = "1+1i";
    string s2 = "1+1i";

    vector<int> n1 = FinfAB(s1);
    int a = n1[0],b=n1[1];
    vector<int> n2 = FinfAB(s2);
    int c = n2[0],d=n2[1];

    cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<endl;
    int x = (a*c - b*d),y=(a*d + b*c);

    string str1 = to_string(x);
    string str2 = to_string(y);

    string ans="";
    
    ans = ans + str1;
    ans=ans+'+';
    ans = ans + str2;
    ans=ans+'i';
    cout<<ans;
}