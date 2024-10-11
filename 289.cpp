#include<bits/stdc++.h>
using namespace std;

void gameOfLife(vector<vector<int>>& board) {

    cout << "Before:- " << endl;
    for(auto i : board) {
        for(auto j : i) {
            cout << j << " ";
        }
        cout << endl;
    }

    int n = board.size(), m = board[0].size();
    vector<vector<int>> ans = board;

    vector<pair<int,int>> dire = {
        {-1,0}, {-1,1}, {0,1}, {1,1}, {1,0}, {1,-1}, {0,-1}, {-1,-1}
    };

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            int count = 0;

            for(int d = 0; d < 8; d++) {
                int nx = i + dire[d].first;
                int ny = j + dire[d].second;
                if(nx >= 0 && nx < n && ny >= 0 && ny < m) {
                    if(board[nx][ny] == 1) count++;
                }
            }

            if(board[i][j] == 1) {
                if(count < 2 || count > 3) {
                    ans[i][j] = 0;
                }
            } else {
                if(count == 3) {
                    ans[i][j] = 1;
                }
            }
        }
    }

    cout << "After:- " << endl;
    for(auto i : ans) {
        for(auto j : i) {
            cout << j << " ";
        }
        cout << endl;
    }
}

int main() {
    vector<vector<int>> board = {
        {0,1,0},
        {0,0,1},
        {1,1,1},
        {0,0,0}
    };
    gameOfLife(board);
}
