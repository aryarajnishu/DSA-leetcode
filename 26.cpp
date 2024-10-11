#include<iostream>
#include<vector>
using namespace std;
int removeDuplicates(vector<int> &arr){
    int k = 1;
    for(int i=0 ; i<4 ; i++){
        if(arr[i] != arr[i+1]){
            arr[k-1] = arr[i];
            k++;
        }
    }
    return k;
}
int main(){
    int arr[5] = {0,0,1,1,1};
    // int ans = removeDuplicates();
    // cout<<ans;
}