#include<iostream>
#include<vector>
#include<math.h>
#include <algorithm>
using namespace std;

void leftRightDifference(int nums[] , int n) {
        vector<int> a1;
        vector<int> a2;
        vector<int> ans;
        for(int i=0 ; i<n ; i++){
            int s1=0,s2=0;
            for(int j=i ; j>0 ; j--){
                s1 = s1 + nums[j-1];
            }
            for(int j=i+1 ; j<n ; j++){
                s2 = s2 + nums[j];
            }
            a1.push_back(s1);
            a2.push_back(s2);
        }
        for(int x : a1){
            cout<<x<<" ";
        }
        cout<<endl;
        for(int y : a2){
            cout<<y<<" ";
        }
        cout<<endl;

        for(int i=0 ; i<n ; i++){
            int k = a1[i] - a2[i];
            if(k<0){
                k = -(1*k);
            }
            ans.push_back(k);
        }
        for(int y : ans){
            cout<<y<<" ";
        }
        cout<<endl;
    }
int main(){
    int arr[4] = {10,4,8,3};
    leftRightDifference(arr,4);
}