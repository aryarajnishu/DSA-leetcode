#include<iostream>
#include<vector>
#include<math.h>
#include <algorithm>
using namespace std;

void plusOne(vector<int>& digits) {
        long long int sum=0,n=digits.size();
        vector<int> ans;
        for(int i=0 ; i<n ; i++){
            sum = sum*10 + digits[i];
        }
        cout<<sum<<endl;
        sum = sum +1;
        cout<<sum<<endl;
        while(sum!=0){
            ans.push_back(sum%10);
            sum = sum/10;
        }
         reverse(ans.begin(), ans.end());
         for(int x: ans){
            cout<<x<<" ";
         }
         cout<<endl;
    }

int main(){
    vector<int> digits = {5,6,2,0,0,4,6,2,4,9};
    plusOne(digits);
}