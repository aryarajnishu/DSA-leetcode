#include<bits/stdc++.h>
using namespace std;


bool isHappy(int n) {

}

int main(){
    int n = 67;
    cout<<isHappy(n);
    unordered_map<int  , int> adj;
    int x = n;
    while(n>9){
        int sum =0;
        while(x>9){
            sum += adj[x%10];
            x = x/10;
        
        }
        x = sum;
        cout<<x<<" ";
    }

    cout<<endl;
    cout<<" ans is :- "<<n;
}