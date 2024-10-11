#include<iostream>
#include<vector>
#include<math.h>
#include <algorithm>
using namespace std;

void findKthPositive(vector<int>& arr,int k) {
        vector<int> ans;
        int n = arr.size();
        //{2,3,4,7,11}
        for(int i=0 ; i<=arr[n-1]+k ; i++){
            ans.push_back(i);
        }
        for(int x:ans){
            cout<<x<<" ";
        }
        cout<<endl;
        int count = 0;
        for(int i=0 ; i<n ; i++){
            ans.erase(ans.begin()+(arr[i]-count));
            count ++;
        }
        for(int x:ans){
            cout<<x<<" ";
        }
        cout<<endl;
        cout<<ans[k];
    }

int main(){
    vector<int> arr = {1,2,3,4};
    findKthPositive(arr,2);
}
