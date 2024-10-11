#include<iostream>
#include <iomanip>
#include<vector>
#include<math.h>
#include <algorithm>
using namespace std;

double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2){
        double y;
        int n1 = nums1.size(),n2 = nums2.size();
        vector<int> ans;
        int i =0,j=0;
        while(i<n1 && j<n2){
            if(nums1[i]<nums2[j]){
                ans.push_back(nums1[i]);
                i++;
            }
            else{
                ans.push_back(nums2[j]);
                j++;
            }
        }
        while(i <n1){
            ans.push_back(nums1[i]);
            i++;
        }
        while(j <n2){
            ans.push_back(nums2[j]);
            j++;
        }
        for(int x:ans){
            cout<<x<<" ";
        }
        cout<<endl;
        int n = ans.size();
        if(n%2 == 0){
            y = (ans[n/2] + ans[(n/2)-1])/2;
        }
        else{
            y = ans[n/2];
        }
        cout<<"answer is :- "<<y;
    }
int main(){
    vector<int> nums1 = {1,2};
    vector<int> nums2 =  {3,4};
    findMedianSortedArrays(nums1,nums2);
}