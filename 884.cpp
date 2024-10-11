#include <bits/stdc++.h>
using namespace std;

void uncommonFromSentences(string s1, string s2 , unordered_map<string, int> &umap) {
    

for(int i = 0; i < s1.size(); ) {
    string str = "";
    while(i < s1.size() && s1[i] != ' ') {
        str.push_back(s1[i]);
        i++;
    }
    if (!str.empty() ) {
        umap[str]++;
    }
    i++;
}

for(int i = 0; i < s2.size(); ) {
    string str = "";
    while(i < s2.size() && s2[i] != ' ') {
        str.push_back(s2[i]);
        i++;
    }
    if (!str.empty() ) {
        umap[str]++;
    }
    i++;
}


    }


int main(){
    string s1 = "this apple is sweet";
    string s2 =  "this apple is sour";
    unordered_map<string, int> umap;
    uncommonFromSentences(s1 , s2 , umap);

    for( auto i : umap){
        if(i.second == 1){
            cout<<i.first<<" ";
        }
    }
    


}