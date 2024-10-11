#include<iostream>
#include<vector>
#include<math.h>
#include <algorithm>
using namespace std;

 int index(vector<int> ans, int k){
    for(int i=0 ; i<ans.size() ; i++){
        if(ans[i] == k){
            return i;
        }
    }
    return -1;
 }
void topKFrequent(vector<int>& nums, int k){
        sort(nums.begin() , nums.end());
        vector<int> ans;
        vector<int> str;
        vector<int> s;
        int n = nums.size();
        int i=0;
        while(i<n){
            int count = 1;
            for(int j=i+1 ; j<nums.size() ; j++){
                if(nums[i] == nums[j]){
                    count ++;
                }
            }
            ans.push_back(count);
            str.push_back(nums[i]);
            i+= count;
        }
        for(int i=0 ; i<ans.size() ; i++){
            cout<<ans[i]<<" "<<str[i];
            cout<<endl;
        }
        for(int i=0 ; i<k ; i++){
            int maxis = 0;
            for(int j=0 ; j<ans.size() ; j++){
                maxis = max(maxis , ans[j]);
            }
            int x = index(ans, maxis);
            s.push_back(str[x]);
            ans[x] = -1;
        }
        cout<<endl;
        for(int i=0 ; i<s.size() ; i++){
            cout<<s[i]<<" ";
        }
}

int main(){
    vector<int> ans = {3,2,1,5,6,4};
    topKFrequent(ans, 3);
    return 0;
}