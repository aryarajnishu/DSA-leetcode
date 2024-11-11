#include <bits/stdc++.h>
using namespace std;

void findMinArrowShots(vector<vector<int>>& points) {
        // if (points.size() <= 1){
        //     return 1;
        // }

        sort(points.begin(), points.end());
        vector<vector<int>> merged;
        int start = points[0][0], end = points[0][1];

        for (int i = 1; i < points.size(); ++i) {
            if (points[i][0] <= end) {
                end = max(end, points[i][1]);
            } else {
                merged.push_back({start, end});
                start = points[i][0];
                end = points[i][1];
            }
        }
        merged.push_back({start, end});
        for(int i=0 ; i<merged.size() ; i++){
            cout<<merged[i][0]<<" "<<merged[i][1]<<endl;
        }
    }

int main(){
    
    vector<vector<int>> intervals = {{10,16},{2,8},{1,6} , {7,12}};

    findMinArrowShots(intervals) ;
    

    

}