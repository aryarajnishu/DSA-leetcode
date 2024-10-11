#include<iostream>
using namespace std;

int numIdenticalPairs(int arr[]){
    int sum = 0;
    for(int i=0 ; i<4 ; i++){
        for(int j=i+1 ; j<4 ; j++){
            if(arr[i] == arr[j]){
                sum ++;
            }
        }
    }
    return sum;
}

int main(){
    int arr[4] = {1,1,1,1};
    cout<<numIdenticalPairs(arr);
}