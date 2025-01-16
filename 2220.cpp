#include <bits/stdc++.h>
using namespace std;

string intToBinary(int n) {
    if (n == 0) return "0";
    
    string binary = "";
    while (n > 0) {
        binary = to_string(n % 2) + binary;
        n /= 2;
    }
    return binary;
}

int main(){
    // string s1 = intToBinary(1);
    // string s2 = intToBinary(0);
    // string temp1;
    // string temp2;
    // if(s1.size() > s2.size()){
    //     for(int i=0 ; i<(s1.size() - s2.size()) ; i++){
    //         temp1 += '0';
    //     }
    //     temp1 +=s2;
    //     temp2 = s1;
    // }
    // else{
    //     for(int i=0 ; i<(s2.size() - s1.size()) ; i++){
    //         temp1 += '0';
    //     }
    //     temp1 +=s1;
    //     temp2 = s2;
    // }

    // cout<<temp1<<" "<<temp2<<" "<<endl;

    // int count = 0;
    // for(int i=0 ; i<temp1.size() ; i++){
    //     if(temp1[i] != temp2[i]) count ++;
    // }

    // cout<<"ans is :- "<<count;

    string s = "abcd";
    string s1 = "";
    for(int i=0 ; i<7 ; i++){
        s1+=s;
    }
    cout<<s1;


}