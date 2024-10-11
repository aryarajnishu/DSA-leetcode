#include<iostream>
#include<vector>
#include<math.h>
#include <algorithm>
using namespace std;

int countOperations(int num1, int num2) {
        int count = 0;
        while(num1 > 0 && num2 > 0){
            if(num1 > num2){
                num1 = num1 - num2;
                count ++;
            }
            else{
                num2 = num2 - num1;
                count ++;
            }
        }
        return count;
    }
int main(){
    int n1 = 2;
    int n2 = 3;
    cout<<countOperations(n1, n2);
}