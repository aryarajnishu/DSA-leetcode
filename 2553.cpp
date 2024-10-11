#include<iostream>
#include<vector>
#include<math.h>
#include <algorithm>
using namespace std;

vector<int> separateDigits(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        for(int i=0 ; i<n ; i++){
            vector<int> a;
            while(nums[i] != 0){
                a.push_back(nums[i]%10);
                nums[i] = nums[i]/10;
            }
            int z = a.size();
            while(z>0){
                ans.push_back(a[z-1]);
                z--;
            }
        }
        for(int x:ans){
            cout<<x<<" ";
        }
        cout<<endl;
        return ans;
    }

int main(){
    vector<int> a = {782,100,32761,98};
    separateDigits(a);
}