#include<iostream>
#include<vector>
#include<math.h>
#include <algorithm>
using namespace std;

int addDigits(int num) {
        if(num<=9){
            return num;
        }
        int ans = num;
        int sum =0;
        while(ans>=10){
            while(ans!=0){
                sum = sum + ans%10;
                ans = ans/10;
            }
            ans = sum;
        }
        return ans;
    }
int main(){
    int n = 38;
    cout<<addDigits(n);
}