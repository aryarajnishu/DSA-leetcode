#include<bits/stdc++.h>
using namespace std;

bool fun(vector<int> arr1 , string s){
    vector<int> arr2(26,0);
    for(auto j : s){
        arr2[j-'a']++;
    }
    return arr1 == arr2;
}

bool checkInclusion(string s1, string s2) {
    vector<int> arr(26,0);

    for(int i=0 ; i< s1.size() ; i++){
        arr[s1[i] -'a']++;
    }
    string str;
    for(int i=0 ; i<(s2.size()-s1.size())+1 ; i++){ 
        str = ""; 
        for(int j=0 ; j<s1.size() ; j++){
            str += s2[i+j];
        }
        if(fun(arr , str)){
            return true;
        }
        
    }
    return false;

}

int main(){
    string s1 = "abba";
    string s2 = "eidbaaaoo";

    if(checkInclusion(s1,s2)) cout<<"yes"<<endl;
    else cout<<"No"<<endl;
    
}