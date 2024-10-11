#include<bits/stdc++.h>
using namespace std;

void pivotArray(vector<int>& nums, int pivot) {
        vector<int> ans;
        vector<int> ans2;
        for(int i=0 ; i<nums.size() ; i++){
            if(nums[i]<pivot){
                ans.push_back(nums[i]);
                nums.erase(nums.begin()+i);
            }
            if(nums[i]==pivot){
                ans2.push_back(nums[i]);
                nums.erase(nums.begin()+i);
            }
        }
        for(int x:nums){
            cout<<x<<" ";
        }
        cout<<endl;
        for(int i=0 ; i<ans2.size() ; i++){
            ans.push_back(ans2[i]);
        }
        cout<<nums.size()<<endl;
        for(int i=0 ; i<nums.size() ; i++){
            ans.push_back(nums[i]);
        }
        for(int x:ans){
            cout<<x<<" ";
        }
}

int main(){
    vector<int> nums={4,0,4,5,-11};
    pivotArray(nums, 5);
}
