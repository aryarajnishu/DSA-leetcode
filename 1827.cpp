#include<iostream>
#include<vector>
#include<math.h>
#include <algorithm>
using namespace std;

int minOperations(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();
        int k = 0;
        int x,y;
        if(n==1){
            return 0;
        }
        for(int i=0 ; i<n-1 ; i++){
            if(nums[i] < nums[i+1]){
                ans.push_back(nums[i]);
            }
            else{
                x = nums[i];
                y = i;
                break;
            }
        }
        for(int i=y ; i<n ; i++){
            ans.push_back(x);
            x++;
        }
        for(int a : ans){
            cout<<a<<" ";
        }
        cout<<endl;

        for(int i = y+1 ; i<n ; i++){
            k = k + (ans[i]-nums[i]);
            
        }
        
        return k;
    }

int main(){
    vector<int> ans = {3,9};
    cout<<minOperations(ans);
}