#include<iostream>
#include<vector>
#include<math.h>
#include <algorithm>
using namespace std;

int countEven(int num) {
        int count = 0;
        for(int i=1 ; i<=num ; i++){
            int sum = 0;
            vector<int> ans;
            int a = i;
            while(a != 0){
                ans.push_back(a%10);
                a = a/10;
            }
            reverse(ans.begin() , ans.end());
            for(int x : ans){
                cout<<x<<" ";
            }
            cout<<endl;

            for(int j=0 ; j<ans.size() ; j++){
                sum = sum + ans[j];
            }
            if((sum%2) == 0){
                count ++;
            }
        }
        // cout<<endl;
        return count;
    }

int main(){
    int n = 38;
    cout<<countEven(n);
}