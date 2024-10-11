#include<bits/stdc++.h>
using namespace std;

void frequencySort(string s) {
    int n = s.size();
    vector<int> nums;
    vector<char> str;
    sort(s.begin() , s.end());
    int i =0;
    while(i<s.size()){
        int count = 1;
        for(int j=i+1 ; j<n ; j++){
            if(s[i]==s[j]){
                count++;
            }
            else{
                break;
            }
        }
        nums.push_back(count);
        str.push_back(s[i]);
        i=i+count;
    }
    for(int x : nums){
        cout<<x<<" ";
    }
    cout<<endl;
    for(char x : str){
        cout<<x<<" ";
    }
    cout<<endl;
}

int main(){
    string s="trtttrrrrrete";
    frequencySort( s);
}