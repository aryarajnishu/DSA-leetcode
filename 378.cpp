#include<bits/stdc++.h>
using namespace std;

int kthSmallest(vector<vector<int>>& matrix, int k) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<int> ans;
        for(int i=0 ; i<n ; i++){
            for(int j=0 ; j<m ; j++){
                ans.push_back(matrix[i][j]);
            }
        }
        sort(ans.begin() , ans.end());
        for(int i:ans){
            cout<<i<<" ";
        }
        cout<<endl;
        return ans[k-1];
    }

int main(){
    vector<vector<int>> matrix={{1,2},{1,3}};
    kthSmallest(matrix , 2);
}