#include <bits/stdc++.h>
using namespace std; 

int fun(vector<vector<int>>& times, int targetFriend) {
    int n = times.size();
    vector<vector<int>> map(n , vector<int>(2)) ;
    unordered_map<int , int> map1;
    int it ,ot;
    for(int i=0 ; i<times.size() ; i++){
        if(targetFriend == i){
            it = times[i][0];
        }
        map[i][0] = times[i][0];
        map[i][1] = times[i][1];
        map[i][2]  = i;

        map1[times[i][0]] = times[i][1];
    }

    sort(map.begin() , map.end());

    int ans;
    int i;
    for( i=0 ; i<map.size() ; i++){
        if(map[i][0] == it) ans = i;
        cout<<map[i][0]<<"  "<<map[i][1]<<endl;
    }cout<<endl;
    
    unordered_map<int , int> map2;
    for(int i=0 ; i<=ans  ; i++){
        for(int j=i+1 ; j<=ans ; j++){
            if(map[i][1] < it && map[i][1] <= map[j][0]){
                map2[map[i][1]] = map[j][0];
                break;
            }
        }
    }

    for(auto i : map1){
        cout<<i.first<<"  "<<i.second<<endl;
    }cout<<endl;


    for(auto i : map2){
        cout<<i.first<<"  "<<i.second<<endl;
    }cout<<endl;
    

    int k,x,y;
    for(k =0 ; k<=ans ; k++){
        x = map[k][0];
        y = map[k][1];
        while(y<it){
            x = map2[y];
            y = map1[x];
            if(x == it){
                return k;
            }
        }
    }
    return ans;

}

int main(){
    vector<vector<int>>  times = {{33889,98676},{80071,89737},{44118,52565},{52992,84310},{78492,88209},{21695,67063},{84622,95452},{98048,98856},{98411,99433},{55333,56548},{65375,88566},{55011,62821},{48548,48656},{87396,94825},{55273,81868},{75629,91467}};
    // vector<vector<int>> times {{4,5}, {12,13}, {5,6}, {1,2}, {8,9}, {9,10}, {6,7}, {3,4}, {7,8}, {13,14}, {15,16}, {14,15}, {10,11}, {11,12}, {2,3}, {16,17}};
    int targetFriend = 6;

    cout<<fun(times , targetFriend);

}
