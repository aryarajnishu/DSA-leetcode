#include <bits/stdc++.h>
using namespace std;

int main(){
    // points = [[10,16],[2,8],[1,6],[7,12]]
    // [[1,2],[2,3],[3,4],[4,5]]
    // vector<vector<int>> intervals = {{10,16},{2,8},{1,6},{7,12}};
    vector<vector<int>> intervals = {{1,2},{2,3},{3,4},{4,5}};


    int maxi = -1;
    for(int i=0 ; i<intervals.size() ; i++){
        maxi = max(intervals[i][0] , maxi);
        maxi = max(intervals[i][1] , maxi);
    }
    
    vector<int> copy(maxi+1 , 0);

    for(int i=0 ; i<intervals.size() ; i++){
        for(int j=intervals[i][0] ; j<=intervals[i][1] ; j++){
            copy[j]++;
        }
    }

    cout<<"coppy array is :-"<<endl;
    for(int i=0 ; i<copy.size() ; i++){
        cout<<i<<" :- "<<copy[i]<<endl;
    }
    
    


}