#include<bits/stdc++.h>
using namespace std;

int main(){
    string str1 = "zpwny";
    string str2 = "a";

    bool flag = false;

    int n1 = str1.size() , n2 = str2.size();
        int j = 0;
        for(int i=0 ; i<n1 ; i++){
            if(str1[i] == str2[j] || str1[i]+1 == str2[j] || str1[i] == 'z' && str2[j] == 'a'){
                j++;
            }
            if(j==n2){
                flag = true;
            }
        }
    cout<<flag;
}
