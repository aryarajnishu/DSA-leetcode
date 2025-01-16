#include <bits/stdc++.h>
using namespace std;

int minimizedMaximum(int n, vector<int>& num) {
    
}

int main(){
    vector<int> num = {25,11,29,6,24,4,29,18,6,13,25,30};
    sort(num.begin() , num.end());
    for(auto i: num){
        cout<<i<<" ";
    }
    cout<<endl;
    int n = 22;
    
    
    int sum = 0;
    for(auto i:num){
        sum+=i;
    }
    cout<<sum<<endl;
    sum = sum - 16;
    cout<<sum<<endl;
    cout<<sum/18;
}