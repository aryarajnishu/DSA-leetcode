#include<iostream>
#include<vector>
#include<math.h>
#include <algorithm>
using namespace std;

void removeDuplicates(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();
        int i =0;
        while(i<n){
            int count=1;
            for(int j=i+1 ; j<n ; j++){
                if(nums[i] == nums[j]){
                    count ++;
                }
                else{
                    break;
                }
            }
            if(count >=2){
                for(int k=0 ; k<2 ; k++){
                    ans.push_back(nums[i]);
                }
            }
            else{
                ans.push_back(nums[i]);
            }
            i = i + count;
        }
        for(int x:ans){
            cout<<x<<" ";
        }
        cout<<endl;
        cout<<ans.size();
    }

int main(){
    vector<int> ans = {1,1,1,2,2,3};
    removeDuplicates(ans);
}