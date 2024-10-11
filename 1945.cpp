#include <bits/stdc++.h>
using namespace std;

int main(){
    string s = "iiii";
    int k = 1;
    string str = "";
    for(int i=0 ; i<s.size() ; i++){
        str += to_string(s[i] - 'a' + 1);
    }
    int sum;
    for(int i=0 ; i<k ; i++){
        sum = 0;
        for(int i=0 ; i<str.size() ; i++){
            sum = sum + str[i] - '0';
        }
        str = to_string(sum);
    }
    cout<<sum;
}