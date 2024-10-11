#include <bits/stdc++.h>
using namespace std;

int main(){

    string str = "DCCLXXXVIII";

    unordered_map<char , pair<int,int>> um;
    um['I'] = {1,1};
    um['V'] = {2,5};
    um['X'] = {3,10};
    um['L'] = {4,50};
    um['C'] = {5,100};
    um['D'] = {6,500};
    um['M'] = {7,1000};

    int num = 0;
    int i=0;
    while(i<str.size()){
        if(um[str[i]].first < um[str[i+1]].first){
            num = num + (um[str[i+1]].second - um[str[i]].second);
            i = i + 2;
        }
        else{
            num = num + um[str[i]].second;
            i++;
        }
        cout<<num<<endl;
    }

    cout<<"ans is :- "<<num;
}