#include<iostream>
#include<vector>
#include<math.h>
#include <algorithm>
using namespace std;


bool find132pattern(vector<int>& nums) {
        int n = nums.size();
        for(int i=0 ; i<n ; i++){
            for(int j = i+1 ; j<n ; j++){
                for(int k = j+1 ; k<n ; k++){
                    if(nums[i] == 1){
                        if(nums[j] == 3){
                            if(nums[k] == 2){
                                return true;
                            }
                        }
                    }
                }
            }
        }
        return false;
    }


int main(){
    vector<int> ans {1,2,3,4,2};
    cout<<find132pattern(ans);
}