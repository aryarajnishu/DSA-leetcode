#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<int>> ans ={
        {0,0},
        {1,0},
        {0,1},
        {2,1},
        {1,2},
        {2,2}
    };
    int max = INT_MIN;
    for(int i=0 ; i<ans.size() ; i++){
        if(ans[i][0] > max){
            max = ans[i][0];
        }
        if(ans[i][1] > max){
            max = ans[i][1];
        }
    }

    
}