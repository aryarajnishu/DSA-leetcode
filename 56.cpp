#include <bits/stdc++.h>
using namespace std;



int main(){
    // [1,3],[2,6],[8,10],[15,18]
    // vector<vector<int>> intervals = {{1,3} , {2,6} , {8,10} , {15,18}};
    vector<vector<int>> intervals = {{1,4} , {0,4}};
    sort(intervals.begin() , intervals.end());

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
        cout<<copy[i]<<" ";
    }
    cout<<endl;

    vector<vector<int>> ans;

    int i = 0, n = copy.size();

        while (i < n) {
            if(copy[i] == 0){
                i++;
                continue;
            }
            int st = i;
            while(i<n-1 &&  copy[i+1] > 0){
                i++;
            }
            int en = i; 
            ans.push_back({st,en});
            i++;
        }
    
    for(int i=0 ; i<ans.size() ; i++){
        cout<<ans[i][0]<<" "<<ans[i][1]<<endl;
    }
}
