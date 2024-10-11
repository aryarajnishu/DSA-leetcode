// #include<bits/stdc++.h>
// using namespace std;
#include<iostream>
#include<vector>
#include<math.h>
#include<string>
#include<bits/stdc++.h>
#include <algorithm>
using namespace std;

void compress(vector<char>& chars) {
        // sort(chars.begin() , chars.end());
        vector<char> ans;
        int i=0;
        string str;
         while(i<chars.size()){
            int count = 1;
            for(int j =i+1;j<chars.size();j++){
                if(chars[i]==chars[j]){
                    count++;
                }
                else{
                    break;
                }
            }
            str.push_back(chars[i]);
            if(count > 1 ){
                string ch = to_string(count);
                str+=ch;
            }
            i = i+count;
        }
        // cout<<str.size()<<endl;
        // cout<<str;
        for(int i=0 ; i<str.size() ; i++){
            ans.push_back(str[i]);
        }
        for(int i=0 ; i<ans.size() ; i++){
            cout<<ans[i]<<" ";
        }
        // cout<<str[3];
}

int main(){
    vector<char> chars = {'a','b','b','b','b','b','b','a','a','a','b','b','b','b','b','b'};
    compress(chars);
}