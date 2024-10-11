#include<iostream>
#include<vector>
#include<math.h>
#include <algorithm>
using namespace std;

 bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        for(int i=0 ; i<nums.size()-1 ; i++){
            if(nums[i] == nums[i+1]){
                return false;
            }
        }
        return true;
}
int main(){
    vector<int> ans;

}