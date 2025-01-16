#include <bits/stdc++.h>
using namespace std;

void minimumLength(string s){

    unordered_map<char, int> mp;

    for (int i = 0; i < s.size(); i++){
        mp[s[i]]++;
    }
    int count = 0;
    for (auto i : mp){
        if(i.second %2 == 0){
            count += 2;
        }else {
            count++;
        }
        
    }
    cout<<count;
}

int main(){
    string s = "ucvbutgkohgbcobqeyqwppbxqoynxeuuzouyvmydfhrprdbuzwqebwuiejoxsxdhbmuaiscalnteocghnlisxxawxgcjloevrdcj";
    minimumLength(s);
    
}