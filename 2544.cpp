#include<iostream>
#include<vector>
#include<math.h>
#include <algorithm>
using namespace std;

int alternateDigitSum(int n) {
        vector<int> ans;
        int sum = 0;
        while(n != 0){
            ans.push_back(n%10);
            n = n/10;
        }
        for(int x:ans){
            cout<<x<<" ";
        }
        cout<<endl;
        reverse(ans.begin(), ans.end());
        for(int x:ans){
            cout<<x<<" ";
        }

        cout<<endl;
        for(int i=0 ; i<ans.size() ; i++){
            if(i%2 != 0){
                ans[i] = -1*ans[i];
            }
            sum = sum + ans[i];
        }
        return sum;
}
int main(){
    int n = 8123;
    cout<<alternateDigitSum(n);
}