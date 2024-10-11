#include<bits/stdc++.h>
using namespace std;

void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size(), m = matrix[0].size();

        queue<pair<int,int>> q;

        // vector<vector<int>> copy;

        for(int i=0 ; i<n ; i++){
            for(int j=0 ; j<m ; j++){
                if(matrix[i][j] == 0){
                    q.push({i,j});
                }
            }
        }

        while(!q.empty()){
            int x = q.front().first;
            int y = q.front().second;

            q.pop();
            for(int i=0 ; i<n ; i++){
                if(matrix[i][y] != 0){
                    matrix[i][y] = 0;
                }
            }
            for(int i=0 ; i<m ; i++){
                if(matrix[x][i] != 0){
                    matrix[x][i] = 0;
                }
            }
        }
    }

int main(){
    vector<vector<int>> matrix = {{0,1,2,0},{3,4,5,2},{1,3,1,5}};
    setZeroes(matrix);

    for(auto i : matrix){
        for(auto j : i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}