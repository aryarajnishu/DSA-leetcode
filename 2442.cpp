#include<iostream>
#include<vector>
#include<math.h>
#include <algorithm>
using namespace std;

int countDistinctIntegers(vector<int>& nums) {
        vector<int> ans;
        for(int i=0 ; i<nums.size() ; i++){
            ans.push_back(nums[i]);
        }
        for(int i=0 ; i<nums.size() ; i++){
            int y = 0;
            int x = nums[i];
            while(x != 0){
                y = y*10 + x%10;
                x = x/10;
            }
            ans.push_back(y);
        }
        for(int x:ans){
            cout<<x<<" ";
        }
        cout<<endl;
        sort(ans.begin() , ans.end());
        cout<<endl;
        for(int x:ans){
            cout<<x<<" ";
        }
        cout<<endl;
        int count=0;
        for(int i=0 ; i<ans.size()-1 ; i++){
            if(ans[i] == ans[i+1]){
                count++;
            }
        }
        return ans.size()-count;
    }

int main(){
    vector<int> ans = {2,2,2};
    cout<<countDistinctIntegers(ans);
}