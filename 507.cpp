#include<iostream>
#include<vector>
#include<math.h>
#include <algorithm>
using namespace std;

int addDigits(int num) {
        int sum =0;
        for(int i=1 ; i<num ; i++){
            if(num%i == 0){
                sum = sum + i;
            }
        }
        // if(sum == num){
        //     return true;
        // }
        return sum;
    }
int main(){
    int n = 28;
    cout<<addDigits(n);
}