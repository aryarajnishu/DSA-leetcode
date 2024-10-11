#include <bits/stdc++.h>
using namespace std;

void arrayRankTransform(vector<int>& arr) {
    set<int> st;
    vector<int> copy = arr;
    unordered_map<int,int> m;
    for(int i=0 ; i<copy.size() ; i++){
        st.insert(copy[i]);
    }
    int count = 1;
    for(auto i : st){
        m[i] = count;
        count++;
    }

    for(int i=0 ; i<arr.size() ; i++){
        cout<<m[arr[i]]<<" ";
    }

}

int main(){
    vector<int> arr = {37,12,28,9,100,56,80,5,12};
    arrayRankTransform(arr);
}