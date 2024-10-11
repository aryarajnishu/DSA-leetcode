#include<iostream>
#include<vector>
#include<math.h>
#include <algorithm>
using namespace std;

int triangularSum(vector<int>& nums) {
        int i;
        while(nums.size()!=1){
            vector<int> tmp;
            for(i = 0; i < nums.size()-1; i++){
                tmp.push_back((nums[i]+nums[i+1])%10);
            }
            for(int x:nums){
                cout<<x<<" ";
            }
            cout<<endl;
            nums = tmp;
            for(int x:nums){
                cout<<x<<" ";
            }
            cout<<endl;
        }
        return nums[0];
    }

int main(){
    vector<int> ans = {1,2,3,4,5,6};
    cout<< triangularSum(ans)<<endl;
}