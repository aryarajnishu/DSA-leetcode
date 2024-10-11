#include<bits/stdc++.h>
using namespace std;



// int solveTEBU(vector<int> &nums , int n) {
//     if(n == 1) return nums[0];  

//     vector<int> dp(n, 0);  
//     dp[0] = nums[0];      
//     dp[1] = max(nums[0], nums[1]);  

//     for(int i = 2; i < n; i++) {
//         int inc = dp[i-2] + nums[i];  
//         int ex = dp[i-1];            
//         dp[i] = max(inc, ex);     
//     }

//     return dp[n-1]; 
// }

int optimize(vector<int> &nums , int n) {
    if(n == 1) return nums[0];    

    int prev = nums[0];      
    int curr = max(nums[0], nums[1]);  
    int ans = curr;

    for(int i = 2; i < n; i++) {
        int inc = prev + nums[i];  
        int ex = curr;             
        ans = max(inc, ex); 
        prev = curr;
        curr = ans;    
    }

    return ans; 
}



int main(){
    vector<int> nums = {1,2,3};
    int n = nums.size();
    vector<int> nums1(nums.begin(),nums.end()-1);
    vector<int> nums2(nums.begin()+1,nums.end());

    int ans = max(optimize(nums1, n-1) , optimize(nums2, n-1));
    cout<<"Max sum is :- "<<ans<<endl;
    
}