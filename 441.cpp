#include<iostream>
#include<vector>
#include<math.h>
#include <algorithm>
using namespace std;

void arrangeCoins(int n) {
        int sum = 0,i;
        int count =0;
        while(sum<=n){
            int j =1;
            for(i=1 ; i<=j ; i++){
                sum = sum + i;
            }
            i=sum;
            cout<<sum;
            count ++;
            j++;
        }
        cout<<count;
    }

int main(){
    arrangeCoins(13);
}