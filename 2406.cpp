#include<bits/stdc++.h>
using namespace std;

int minGroups(vector<vector<int>>& intervals) {
        vector<int> start_times, end_times;

        for (const auto& interval : intervals) {
            start_times.push_back(interval[0]);
            end_times.push_back(interval[1]);
        }
    
        sort(start_times.begin(), start_times.end());
        sort(end_times.begin(), end_times.end());

        int end_ptr = 0, group_count = 0;

        for (int start : start_times) {
            if (start > end_times[end_ptr]) {
                end_ptr++;
            } else {
                group_count++;
            }
        }
        return group_count;
    }

int main(){
    vector<vector<int>> intervals = {{5,10},{6,8},{1,5},{2,3},{1,10}};
    cout<<minGroups(intervals);

}