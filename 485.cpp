#include<iostream>
#include<vector>
#include<math.h>
#include <algorithm>
using namespace std;

int findMaxConsecutiveOnes(vector<int>& nums) {
        vector<int> ans;
        int i =0;
        while(i<nums.size()){
            int count = 0;
            for(int j = i ; j<nums.size() ; j++){
                if(nums[j] == 1){
                    count ++;
                }
                else{
                    i++;
                    break;
                }
            }
            ans.push_back(count);
            i = i + count;
        }


        for(int x : ans){
            cout<<x<<" ";
        }
        cout<<endl;
        return *max_element(ans.begin() , ans.end());
}

int main(){
    vector<int> arr = {1,1,0,1,1,1,0,0,1,1,1,1,1,0,0,1,1,1,1,1,1,1,1,1};
    cout<<findMaxConsecutiveOnes(arr);
}