#include<bits/stdc++.h>
using namespace std;


int matchBoth(vector<int> nums ,int n, int m){
        int count =0;
        for(int i=0 ; i<nums.size() ; i++){
            if(nums[i] == n || nums[i] == m){
                count ++;
            }
        }
        if(count == 2){
            return 1;
        }
        else{
            return 0;
        }
}
int main(){
    vector<int> nums = {1,2,3,4,5,6,7};
    cout<<matchBoth(nums ,0,9);
}