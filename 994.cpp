#include <bits/stdc++.h>
using namespace std;

int orangesRotting(vector<vector<int>>& grid) {
    int n = grid.size();
    int m = grid[0].size();
    vector<vector<int>> coppy(n, vector<int>(m, 0));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (grid[i][j] == 2) coppy[i][j] = 2;
        }
    }

    queue<pair<pair<int, int>, int>> q;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (coppy[i][j] == 2) q.push({{i, j}, 0});
        }
    }

    int time = 0;
    vector<vector<int>> direction = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
    while (!q.empty()) {
        int r = q.front().first.first;
        int c = q.front().first.second;
        int t = q.front().second;
        time = max(t, time);
        q.pop();

        for (int i = 0; i < 4; i++) {
            int nr = r + direction[i][0];
            int nc = c + direction[i][1];

            if (nr >= 0 && nr < n && nc >= 0 && nc < m 
                && coppy[nr][nc] != 2 && grid[nr][nc] == 1) {
                coppy[nr][nc] = 2;
                q.push({{nr, nc}, t + 1});
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (grid[i][j] == 1 && coppy[i][j] != 2) {
                return -1;
            }
        }
    }

    return time;
}

int main() {
    vector<vector<int>> grid = {{2, 1, 1}, {1, 1, 0}, {0, 1, 1}};
    cout << "Minimum time is: ";
    cout << orangesRotting(grid) << endl;
    return 0;
}
