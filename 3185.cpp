#include<bits/stdc++.h>
using namespace std;

long long countCompleteDayPairs(vector<int>& hours) {
    unordered_map<int,int> m;
    int count = 0;
    for(int i=0 ; i<hours.size() ; i++){
        int rem = hours[i]%24;
        if(rem == 0){
            count = count + m[rem];
        }
        else{
            count = count + m[24 - rem];
        }
        m[rem]++;
    }
    return count;
}

int main(){
    vector<int> hours = {24,48,72,96};
    cout<<"ans is :-"<<countCompleteDayPairs(hours);
}