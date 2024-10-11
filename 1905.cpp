// #include <bits/stdc++.h>
// using namespace std;


// int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
//         int n = grid1.size() , m = grid2[0].size();

//         vector<vector<int>> copy(n,vector<int>(m,0));

//         vector<vector<int>> dir = {{-1,0},{0,1},{1,0},{0,-1}};
        
//         queue<pair<int,int>> q;

//         for(int i=0 ; i<n ; i++){
//             for(int j=0 ; j<m ; j++){
//                 if(grid1[i][j] == 1 && grid2[i][j] == 1){
//                     q.push({i,j});
//                 }
//             }
//         }

        

//         while(!q.empty()){
//             int x = q.front().first;
//             int y = q.front().second;

//             q.pop();

//             for(int i=0 ; i<4 ; i++){
//                 int nx = x + dir[i][0];
//                 int ny = y + dir[i][1];

//                 if(nx<n && nx>=0 && ny<m && ny>=0 ){
//                     if(grid1[nx][ny] == 1 && grid2[nx][ny] == 0){
//                         copy[x][y]=1;
//                         break;
//                     }
//                 }
//             }
//         }
        
//         for(auto i : copy){
//             for(auto j : i){
//                 cout<<j<<" ";
//             }
//             cout<<endl;
//         }

//         return 3;
//     }

// int main(){
//     // [[1,1,1,0,0],[0,0,1,1,1],[0,1,0,0,0],[1,0,1,1,0],[0,1,0,1,0]]
//     vector<vector<int>> grid1 = {{1,1,1,0,0},{0,1,1,1,1},{0,0,0,0,0},{1,0,0,0,0},{1,1,0,1,1}};
//     vector<vector<int>> grid2 = {{1,1,1,0,0},{0,0,1,1,1},{0,1,0,0,0},{1,0,1,1,0},{0,1,0,1,0}};

//     cout<<"ans is :- "<<countSubIslands(grid1,grid2)<<endl;
// }










#include <bits/stdc++.h>
using namespace std;

void dfs(vector<vector<int>> &grid , int i, int j ){
    if(i<0 || j<0 || i>=grid.size() || j>=grid[0].size() || grid[i][j] == 0){
        return ;
    }
    grid[i][j] = 0;
    dfs(grid, i + 1, j); // down
    dfs(grid, i - 1, j); // up
    dfs(grid, i, j + 1); // right
    dfs(grid, i, j - 1); // left   
}

int main() {
    vector<vector<int>> grid1 = {
        {1, 1, 1, 0, 0},
        {0, 1, 1, 1, 1},
        {0, 0, 0, 0, 0},
        {1, 0, 0, 0, 0},
        {1, 1, 0, 1, 1}
    };
     int n = grid1.size(), m = grid1[0].size();
    int count = 0;
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<m ; j++){
            if(grid1[i][j] == 1){
                count ++;
                dfs(grid1 , i , j);
            }
        }
    }
    
    cout << "Number of sub-islands: " <<count << endl;
    
}
