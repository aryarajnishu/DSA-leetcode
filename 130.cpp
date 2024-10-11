#include <bits/stdc++.h>
using namespace std;

void solve(vector<vector<char>>& board) {
    int n = board.size() , m = board[0].size();
    queue<pair<int,int>> q;

    for(int i=0 ; i<n ; i++){
        if(board[i][0] == 'O'){ 
            q.push({i,0});
        }
        if(board[i][m-1] == 'O'){
            q.push({i,m-1});
        }
    }
    for(int i=0 ; i<m ; i++){
        if(board[0][i] == 'O'){ 
            q.push({0,i});
        }
        if(board[n-1][i] == 'O'){
            q.push({n-1,i});
        }
    }

    while(!q.empty()){
        cout<<q.front().first<<" "<<q.front().second<<endl;
        q.pop();
    }

}

int main(){
    // vector<std::vector<char>> board = {
    // {'X', 'X', 'X', 'X'},
    // {'X', 'O', 'O', 'X'},
    // {'X', 'X', 'O', 'X'},
    // {'X', 'O', 'X', 'X'}
    // };


    vector<std::vector<char>> board = {
    {'O', 'X', 'X', 'X'},
    {'X', 'O', 'O', 'X'},
    {'O', 'X', 'O', 'X'},
    {'X', 'O', 'X', 'O'}
    };

    solve(board);

}