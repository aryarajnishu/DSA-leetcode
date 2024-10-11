#include<iostream>
using namespace std;
int sumOfMultiples(int n) {
        int s1 = 0;
        for(int i=1 ; i<=n ; i++){
            if(i%3 == 0  ||  i%5 == 0  || i%7 == 0){
                s1 = s1 +i;
            }
        }
        return s1;
    }
int main(){
    int n = 15;
    cout<<sumOfMultiples(n);
}