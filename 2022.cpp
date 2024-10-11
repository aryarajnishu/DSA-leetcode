#include<bits/stdc++.h>
using namespace std;


void construct2DArray(vector<int>& original, int m, int n) {
        vector<vector<int>> ans;
        int y = original.size();
        // vector<vector<int>> ans2;
        int x = 0;
        for(int i=0 ; i<m ; i++){
            vector<int> row;
            for(int j=0 ; j<n ; j++){
                row.push_back(original[x]);
                x++;
            }
            ans.push_back(row);
        }
        cout<<x<<endl;
        if((y+1)==(n*m)){
            for(int i=0 ; i<m ; i++){
            for(int j=0 ; j<n ; j++){
                cout<<ans[i][j]<<" ";
            }
            cout<<endl;
            }
        }
        else{
            cout<<"null";
        }
    }


int main(){
    vector<int> original={1,2,3,4,5,6,7,8,9};
    construct2DArray(original, 2,  4);
}