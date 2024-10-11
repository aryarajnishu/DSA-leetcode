#include <bits/stdc++.h>
using namespace std;

int islandPerimeter(vector<vector<int>>& grid) {
    int n = grid.size() , m = grid[0].size();
    queue<pair<int,int>> q;
    q.push({0,1});
    int count = 0;

    vector<vector<int>> dir = {{-1,0},{0,1},{1,0},{0,-1}};

    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;

        q.pop();

        for(int i=0 ; i<dir.size() ; i++){
            int nx = x + dir[i][0];
            int ny = y + dir[i][1];

            if(nx < n && nx >=0 && ny < m && ny >=0 && grid[nx][ny] == 1){
                count++;
                q.push({nx,ny});
                grid[nx][ny] = 0;
            }
        }
    }

    return  count;

        
}

int main(){
    vector<vector<int>> grid = {{0,1,0,0} , {1,1,1,0} , {0,1,0,0} , {1,1,0,0}};
    int count = 0;
    for(auto i : grid){
        for(auto j: i){
            if(j==1){
                count ++;
            }
        }
    }
    cout<<"fun return is :- "<<islandPerimeter(grid)<<endl;

    int parimeter =((count*4) - (2*islandPerimeter(grid)));
    cout<<"ans is : "<<parimeter;
}