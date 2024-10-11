#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums = {3,30,34,5,9};

    vector<string> ans;

    for(auto i : nums){
        string str1 = to_string(i);
        ans.push_back(str1);
    }

    sort(ans.begin() , ans.end() , greater<string>());

    string str2 = "";
    for(auto i: ans){
        cout<<i<<" ";
        str2 += i;
    }
    cout<<endl;

    cout<<"ans is :- "<<str2;
}