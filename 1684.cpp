#include <bits/stdc++.h>
using namespace std;


int main(){
    string allowed = "cad";
    vector<string> words = {"cc","acd","b","ba","bac","bad","ac","d"};

    unordered_map<char , int> um;

    for(int i=0 ; i<allowed.size() ; i++){
        um[allowed[i]]++;
    }
    int count = 0;
    for(int i=0 ; i<words.size() ; i++){
        bool flag = true;
        for(int j = 0 ; j<words[i].size() ; j++){
            if(um[words[i][j]] == 0){
                flag = false;
            }
        }
        if(flag) count++;
    }

    cout<<"ans is :- "<<count;

}