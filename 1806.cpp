#include<bits/stdc++.h>
using namespace std;

void reinitializePermutation(int n) {
        vector<int> a1;
        vector<int> a2;
        vector<int> perm;
        for(int i=0 ; i<n ; i++){
            a1.push_back(i);
            a2.push_back(i+1);
            perm.push_back(i);
        }
        for(int i:a1){
            cout<<i<<" ";
        }
        cout<<endl;
        for(int i:perm){
            cout<<i<<" ";
        }
        cout<<endl;
        int count=0;
        while(a1 != a2){
            for(int i=0 ; i<n ; i++){
                if(i%2==0) a2[i] = perm[i/2];
                else a2[i] = perm[(n/2) + ((i-1)/2)];
            }
            perm = a2;
            for(int x:perm){
                cout<<x<<" ";
            }
            cout<<endl;
            count ++;
        }
        cout<<"my ans is :- "<<count;
    }

int main(){
    reinitializePermutation(6);
}