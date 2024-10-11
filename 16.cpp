#include<iostream>
#include<vector>
#include<math.h>
#include <algorithm>
using namespace std;

int threeSumClosest(vector<int>& nums, int target) {
        vector<int> ans;
        for(int i=0 ; i<nums.size() ; i++){
            for(int j=i+1 ; j<nums.size() ; j++){
                for(int k=j+1 ; k<nums.size() ; k++){
                    int sum = nums[i]+nums[j]+nums[k];
                    ans.push_back(sum);
                }
            }
        }
        sort(ans.begin(),ans.end());
        for(int x:ans){
            cout<<x<<" ";
        }
        cout<<endl;
        int i =0;
        while(ans[i]<target){
            i++;
        }
        //-1,-3,-1,2
        // cout<<i<<endl;
        int max = *max_element(ans.begin(),ans.end());
        if(max<target){
            return max;
        }
        int a = ans[i] - target;
        int b = target -ans[i-1];
        if(a<b){
            return ans[i];
        }
        else{
            return ans[i+1];
        }

        
    }

int main(){
    vector<int> ans ={3,4,6,5,6};
    cout<<threeSumClosest(ans,16);
}