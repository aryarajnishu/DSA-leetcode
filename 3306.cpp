#include<bits/stdc++.h> 
using namespace std;

int main(){
    string s = "ieaouqqieaouqq";
    int k = 1;
    int n = s.size();
    for(int i=0 ; i<(n-5+k) ; i++){
        // string s1="";
        for(int j=i+n-5+k ; j<n ; j++){
            cout << s.substr(i, j - i + 1) << endl;
        }
        cout<<endl;
    }
    
}