#include<iostream>
#include<vector>
#include<math.h>
#include <algorithm>
using namespace std;

 void moveZeroes(vector<int>& nums) {
        vector<int>ans;
        int a = 0;
        for(int i=0 ; i<nums.size() ; i++){
            if(nums[i] != 0){
                ans.push_back(nums[i]);
                a++;
            }
        }
        cout<<ans.size()<<endl;
        for(int i=ans.size(); i<nums.size() ; i++ ){
            ans.push_back(0);
        }
        for(int x:ans){
            cout<<x<<" ";
        }cout<<endl;
        for(int i=0 ; i<ans.size() ; i++){
            nums[i] = ans[i];
        }
        for(int y:nums){
            cout<<y<<" ";
        }cout<<endl;
    }

int main(){
    vector<int> ans = {0,1,0,3,12};
    moveZeroes(ans);
}