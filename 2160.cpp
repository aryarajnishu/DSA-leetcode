#include<iostream>
using namespace std;
int minimumSum(int n) {
        int k1,k2,k3,k4;
        k1 = n%10;
        k2 = (n/10)%10;
        k3 = (n/100)%10;
        k4 = (n/1000)%10;
        int arr[4] = {k1,k2,k3,k4};
        for(int i=0 ; i<4 ; i++){
            for(int j=i+1 ; j<4 ; j++){
                if(arr[i]>arr[j]){
                    swap(arr[i],arr[j]);
                }
            }
        }
        int x = arr[0]*10 + arr[2];
        int y = arr[1]*10 + arr[3];
        return x+y;
    }
int main(){
    int n = 4009;
    cout<<minimumSum(n);
}