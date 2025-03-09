#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums = {1,2,1};
    vector<int> arr = nums;
    int n = nums.size();
    
    for(int i=0 ; i<n ; i++){
        arr.push_back(nums[i]);
    }
    for(auto i : arr){
        cout<<i<<" ";
    }cout<<endl;

   
    stack<int> s;
    vector<int> result(2*n, -1);
    
    for (int i = 0; i < 2*n; i++) {
        while (!s.empty() && arr[i] > arr[s.top()]) {
            result[s.top()] = arr[i];
            s.pop();
        }
        s.push(i); // Push the index, not the value
    }
    
    for(auto i : result){
        cout<<i<<" ";
    }cout<<endl;

    vector<int> ans(n,-1);
    for(int i=0 ; i<=n ; i++){
        ans[i] = result[i];
    }

    for(auto i : ans){
        cout<<i<<" ";
    }cout<<endl;
    
}