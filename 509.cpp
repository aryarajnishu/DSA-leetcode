#include<iostream>
#include<vector>
#include<math.h>
#include <algorithm>
using namespace std;

int fib(int n) {
        int a = 0;
        int b = 1;
        int sum = a+b;
        if(n==1){
            return 0;
        }
        for(int i=1 ; i<n-2 ; i++){
            a = b; 
            b = sum;
            sum = a+b;
        }
        return sum;
}
int main(){
    int n = 5;
    cout<<fib( n);
}