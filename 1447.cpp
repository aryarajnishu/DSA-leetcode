#include<bits/stdc++.h>
using namespace std;

string fraction(int n, int m){
        int i;
        for(i=n ; i>=1 ; i--){
            if(n%i==0 && m%i==0){
                break;
            }
        }
        int x = n/i,y=m/i;
        string str1 = to_string(x),str2 = to_string(y);
        return  str1+'/'+str2;
    }

vector<string> simplifiedFractions(int n) {
        vector<string> ans;
        for(int i=1 ; i<n ; i++){
            string s = fraction(i,n);
            ans.push_back(s);
        }
        return ans;
    }

int main(){
    vector<string> arya = simplifiedFractions(3);
    for(int i=0 ;i<arya.size() ; i++){
        cout<<arya[i]<<" ";
    }
}