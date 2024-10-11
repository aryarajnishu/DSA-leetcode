#include<iostream>
#include<vector>
#include<math.h>
#include <algorithm>
using namespace std;

int pivotInteger(int n) {
    int s1 = 0, s2=0;
        int s = (n*(n+1))/2;
        for(int i=n/2 ; i<=n ; i++){
            s1 = (i*(i+1))/2;
            s2 = s-(i*(i-1))/2;
            if(s1==s2){
                return i;
            }
        }
        return -1;
}
int main(){
    int n = 1;
    cout<<pivotInteger(n);
}