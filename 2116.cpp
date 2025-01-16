#include<bits/stdc++.h>
using namespace std;

void canBeValid(string s, string locked) {
    int n = s.size();

    // if(s.size()%2 != 0){
    //     cout<<false<<" ";
    //     return;
    // }

    unordered_map<int,int> mp1;
    int count0 = 0;
    for(int i=0 ; i<n ; i++){
        if(locked[i] == '0'){
            count0++;
        }
        mp1[i] = count0;
    }

    // vector<vector<int,int>> mp2;
    // int count0 = 0;
    // for(int i=n-1 ; i>=0 ; i--){
    //     if(locked[i] == '0'){
    //         count0++;
    //     }
    //     mp2.push_back({i,count0});
    // }

    for(auto i : mp1){{
        cout<<i.first<<" "<<i.second<<endl;
    }}

    // for(auto i : mp2){
    //     for(int j : i){
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }
    // cout<<endl;

    // vector<int> a1;// (
    // vector<int> a2; // )

    // int count0 = 0;
    // for(int i=0 ; i<locked.size() ; i++){
    //     if(locked[i] == '1' && s[i] == ')'){
    //         a2.push_back(i);
    //     }
    //     else if(locked[i] == '1' && s[i] == '('){
    //         a1.push_back(i);
    //     }
    // }
    // cout<<"a1 is :- ";
    // for(auto i:a1){
    //     cout<<i<<" ";
    // }cout<<endl;

    // cout<<"a2 is :- ";
    // for(auto i:a2){
    //     cout<<i<<" ";
    // }cout<<endl;

    // // int n = 0;
    // // for(int i=0 ; i<a2[a2.size()-1] ; i++){
        
    //     if(n<a2.size() && locked[i] == '0'){
    //         n++;
    //         locked[i] = '1';
    //     }
    // }
    // cout<<locked<<" "<<n<<endl;


    // int m = 0;
    // for(int i=arya-1 ; i>a1[0] ; i--){
        
    //     if(m<a1.size() && locked[i] == '0'){
    //         m++;
    //         locked[i] = '1';
    //     }
    // }
    // cout<<locked<<" "<<m<<endl;

    // if(n==a2.size() && m== a1.size()){
    //     cout<<"yes";
    // }

}


int main(){
    string s = "()(()()())", locked = "0110011001";
    canBeValid(s,locked);
}