#include<iostream>
#include<vector>
#include<math.h>
#include <algorithm>
using namespace std;

int minOperations(int n) {
        int sum = 0,x = n/2;;
        if(n%2 != 0){
            for(int i=0 ; i<x ; i++){
                sum = sum + ((2*x+1)-(2*i+1));
            }
        }
        else{
            int y = 2*x;
            for(int i=0 ; i<x-1 ; i++){
                sum = sum + ((2*x)-(2*i+1));
            }
            return sum +1;
        }
        return sum;
    }

int main(){
    // int n = 6;
    cout<<minOperations(6)<<endl;
    cout<<minOperations(16)<<endl;
    cout<<minOperations(13)<<endl;
    cout<<minOperations(21)<<endl;
    cout<<minOperations(100)<<endl;
}