#include<iostream>
using namespace std;

int searchInsert(int nums[], int target) {
        int s = 0,e = 4-1, m=s+(e-s)/2;
        int k;
        if(nums[3]<target){
            return 4;
        }
        while(s<=e){
            if(nums[m] == target){
                return m;
            }
            if(nums[m]>target && nums[m-1]<target){
                k = m;
            }
            if(nums[m]<target && nums[m+1]>target){
                k = m;
            }
            if(nums[m]>target){
                e = m-1;
            }
            else{
                s = m+1;
            }
            m=s+(e-s)/2;
        }
        return k;
    }
int main(){
    int arr[4] = {8,9,10,35};
    cout<<searchInsert(arr,11);
}