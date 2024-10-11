#include<bits/stdc++.h>
using namespace std;

void numberOfArithmeticSlices(vector<int>& nums) {
        int n = nums.size();
        for(int i=0 ; i<n ; i++){
            for(int j=0 ; j<n ; j++){
                for(int k=i ; k<n-j ; k++){
                    cout<<nums[k]<<" ";
                }
                cout<<endl;
            }
        }
    }

int main(){
    vector<int> nums={5,3,2,4,1};
    numberOfArithmeticSlices(nums);
}