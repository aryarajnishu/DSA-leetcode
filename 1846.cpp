#include<bits/stdc++.h>
using namespace std;

void maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
        sort(arr.begin() , arr.end());
        int n = arr.size();
        int count = 0;
        for(int i=1 ; i<n ; i++){
            if(arr[i] != arr[i-1]){
                count++;
            }
        }
        cout<<count<<endl;
        if(count == n-1){
            cout<<arr[0]+n-1;
        }
    }

int main(){
    vector<int> arr = {1,2,3,4,5};
    maximumElementAfterDecrementingAndRearranging(arr);
}