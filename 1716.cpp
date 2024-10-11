#include<iostream>
#include<vector>
#include<math.h>
#include <algorithm>
using namespace std;

int totalMoney(int n) {
        int a = n/7;
        int b = n%7;
        int j =0;
        int sum = 0;
        int x = 1;
        while(j<a){
            for(int i=x ; i<=x+6 ; i++){
                cout<<i<<" ";
                sum = sum + i;
            }
            cout<<endl;
            cout<<sum<<endl;
            j++;
            x++;
        }
        // cout<<endl;
        for(int i=x ; i<x+b-1 ; i++){
            cout<<i<<" ";
            sum = sum +i;
        }
        cout<<endl;
        return sum;
    }

int main(){
    cout<<totalMoney(20);
}