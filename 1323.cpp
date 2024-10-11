#include<iostream>
#include<vector>
#include<math.h>
#include <algorithm>
using namespace std;

int maximum69Number (int num) {
        vector<int> arr;
        while(num){
            arr.push_back(num%10);
            num = num/10;
        }
        // for(int x:arr){
        //     cout<<x<<" ";
        // }
        // cout<<endl;
        reverse(arr.begin(), arr.end());
        // for(int i=0 ; i<arr.size() ; i++){
        //     for(int j=i+1 ; j>arr.size() ; j++){
        //         if(arr[i]>arr[j]){
        //             swap(arr[i],arr[j]);
        //         }
        //     }
        // }
        // for(int x:arr){
        //     cout<<x<<" ";
        // }
        // cout<<endl;
        for(int i=0 ; i<arr.size() ; i++){
            if(arr[i]==6){
                arr[i] = 9;
                break;
            }
        }
        int ans = 0;
        int k = pow(10,(arr.size()-1));
        for(int i=0 ; i<arr.size() ; i++){
            ans = ans + arr[i]*k;
            k = k/10;
        }
        return ans;
    }

int main(){
    int n = 6669;
    cout<<maximum69Number(n);
}