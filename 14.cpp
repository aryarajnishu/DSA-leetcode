#include<iostream>
#include<vector>
#include<string>
#include<bits/stdc++.h>
using namespace std;



string longestCommonPrefix(vector<string>& strs) {
    string s_ans = "";
    sort(strs.begin(),strs.end());
    for(string x:strs){
        cout<<x<<" ";
    }
    cout<<endl;
    string s1 = strs[0];
    string s2 = strs[strs.size()-1];
    cout<<s1<<" "<<s2<<endl;
    for(int i=0 ; i<s1.size() ; i++){
        if(s1[i] == s2[i]){
            s_ans.push_back(s1[i]);
        }
        else{
            break;
        }
    }
    cout<<s_ans;
    // if (strs.empty()) {
    //     return "";
    // }
    // string commonPrefix = strs[0];
    // for (int i = 1; i < strs.size(); i++) {
    //     int j = 0;
    //     while (j < commonPrefix.length() && j < strs[i].length() && commonPrefix[j] == strs[i][j]) {
    //         j++;
    //     }
    //     commonPrefix = commonPrefix.substr(0, j);
        
    //     if (commonPrefix.empty()) {
    //         break;
    //     }
    // }
    // return commonPrefix;
}

int main() {
    vector<string> str = {"flower", "flowkj", "flowewjw", "flowsl" , "flower", "flowight"};
    string result = longestCommonPrefix(str);
    // cout << "Longest Common Prefix: " << result << endl;
    // return 0;
}
