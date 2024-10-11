#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> rolls = {1,2,3,4};
    int mean = 6, n = 4;


    int index = 0;
    int remain_sum = 0;

    int total = rolls.size() + n;
  

    int sum = 0;

    for(auto i:rolls){
        sum += i;
    }

    int remain = (mean * total) - sum;

    if(remain < n || remain > 6*n){
        cout<<1<<endl;
        vector<int> ans(n);
        for(auto i:ans){
        cout<<i<<" ";
        }
    }
    else if(remain == 6*n){
        cout<<2<<endl;
        vector<int> ans(n , 6);
        // return ans;
        for(auto i:ans){
        cout<<i<<" ";
        }
    }
    else{
        cout<<3<<endl;
        for(int i=1 ; i<6 ; i++){
            if(n*i <= remain && n*(i+1) >= remain){
                index = i;
                remain_sum = abs(n*i-remain);
            }
        }

    vector<int>ans(n , index);
    int i=0;
    while(remain_sum != 0){
        ans[i]++;
        i++;
        remain_sum--;
    }
    for(auto i:ans){
        cout<<i<<" ";
    }
    }

    

}