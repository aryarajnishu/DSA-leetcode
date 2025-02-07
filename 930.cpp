#include <bits/stdc++.h>
using namespace std;

void numSubarraysWithSum(vector<int>& nums, int goal) {
    int n = nums.size();
    vector<int> arr(n);

    int sum = 0;
    for(int i=0 ; i<n ; i++){
        arr[i] = sum + nums[i];
        sum = arr[i];
        cout<<arr[i]<<" ";
    }cout<<endl;

    map<int , int> mp;
    for(int i=0 ; i<n ; i++){
        mp[arr[i]]++;
    }

    for(auto i : mp){
        cout<<i.first<<" :- "<<i.second<<endl;
    }
    cout<<endl;

    int count = 0;

    vector<int> ans;
    
    if(goal == 0){
        int x=0;
        for(int i=0 ; i<n ; i++){
            if(nums[i]==0){
                x++;
            }
            else{
                ans.push_back(x);
                x = 0;
            }
            if(i==n-1){
                ans.push_back(x);
            }
        }
        for(int i=0 ; i<ans.size() ; i++){
            count += (ans[i]*(ans[i]+1))/2;
        }
    }
    else{
        for(auto i : mp){
            if(i.first == goal){
                count += mp[0]+mp[i.first];
            }
            else if(i.first > goal){
            int remain = i.first-goal;
                if(mp.find(remain) != mp.end()){
                    count += mp[i.first]*mp[remain];
                }
            }
            
        }
    }


    cout<<count;

}

int main(){
    vector<int> nums = {0, 0, 0, 1, 0, 1, 0, 1, 0};
    int traget = 2;

    numSubarraysWithSum(nums , traget);
}