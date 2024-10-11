#include<iostream>
#include<vector>
#include<math.h>
#include <algorithm>
using namespace std;

void findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin() , nums.end());
        vector<int> ans;
        int n = nums.size();
        cout<<"answer is :- "<<nums[n-k]<<endl;
        int i =0;
        while(i<n){
            int count = 1;
            for(int j=i+1 ; j<n ; j++){
                if(nums[i] == nums[j]){
                    count ++;
                }
                else{
                    break;
                }
            }
            ans.push_back(nums[i]);
            i = i + count;
        }
        for(int x:ans){
            cout<<x<<" ";
        }
        int m = ans.size();
        cout<<"answer is :- "<<ans[m-k];
}

int main(){
    vector<int> ans ={3,2,1,5,6,4};
    findKthLargest(ans, 2);
}