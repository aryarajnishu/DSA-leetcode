#include<iostream>
#include<vector>
#include<math.h>
#include <algorithm>
using namespace std;

void groupThePeople(vector<int>& groupSizes) {
        vector<int> ans;
        vector<int> arr;
        vector<vector<int>> nishu;
        int n = groupSizes.size();
        for(int i=0 ; i<n ; i++){
            ans[i] = groupSizes[i];
        }
        sort(ans.begin(),ans.end());

        for(int x : ans){
            cout<<x<<" ";
        }
        cout<<endl;

        for(int i=0 ; i<ans.size()-1 ; i++){
            if(ans[i]<ans[i+1]){
                arr.push_back(ans[i]);
            }
            if(ans[i+1]>ans[i] && i == n-2){
                arr.push_back(ans[i+1]);
            }
        }
        for(int i=0 ; i<arr.size() ; i++){
            for(int j=0 ; i<arr[i] ; j++){
                for(int k=0 ; k<n ; k++){
                    if(groupSizes[k] == arr[i]){
                        nishu[i][j] = k;
                    }
                }
            }
        }
        
    }

int main(){
    vector<int> ans ={2,1,3,3,3,2};
    groupThePeople(ans);
}