#include<iostream>
#include<vector>
#include<math.h>
#include <algorithm>
using namespace std;



void minimumDeletions(vector<int>& nums) {
    vector<int> ans;
        int maxi = *max_element(nums.begin() , nums.end());
        int mini = *min_element(nums.begin() , nums.end());
        int n = nums.size();
        int n1,n2;
        int max,min;
        for(int i=0 ; i<nums.size() ; i++){
            if(nums[i]==maxi){
                n1 = i;
            }
            if(nums[i]==mini){
                n2 = i;
            }
        }
        n1++,n2++;
        cout<<"size is :- "<<n<<endl;
        cout<<n1<<" "<<n2<<endl;
        max = n2,min =n1;

        if(n1>n2){
            max = n1;
            min = n2;
        }
        cout<<max<<" "<<min<<endl;
        int m1,m2,m3;
        m1 = max;
        m2 = n - min +1;
        m3 = min + (n-max+1);
        ans.push_back(m1);
        ans.push_back(m2);
        ans.push_back(m3);
        // for(int x:ans){
        //     cout<<x<<" ";
        // }
        // cout<<endl;
        sort(ans.begin() , ans.end());
        // for(int x:ans){
        //     cout<<x<<" ";
        // }
        // cout<<endl;

        cout<<" answer is :- "<<ans[0];
    }
int main(){
    vector<int> nums ={0,-4,19,1,8,-2,-3,5};
    minimumDeletions( nums);
}