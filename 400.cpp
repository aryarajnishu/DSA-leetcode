#include <bits/stdc++.h>
using namespace std;

vector<int>  findrange(int n){
    int x =0;
    int y = 1;
    int i = 1;
    while(i<=n){
        if(i!=n){
            y = y*10;
        }
        x = x*10;
        x = x+9;
        i++;
    }
    return {y,x};
}

int disits(int n){
    int count = 0;
    while(n!=0){
        n = n/10;
        count++;
    }
    return count;
}

int main(){
    int n = 100;
    int a = 0;
    int m = disits(n);
    cout<<m<<" "<<findrange(m)[0]<<" "<<findrange(m)[1]<<endl;

    for(int i=1 ; i<m ; i++){
        int x = (findrange(i)[1] - findrange(i)[0]) +1;
        a = a + (x*i);
    }
    cout<<a<<endl;

    // int rem_step = n-a;
    // int div1 = rem_step/m;
    // int div2 = rem_step%m;
    // int ans1=0;
    // if(div2 != 0){
    //     ans1 = findrange(m-1)[1] + div1+1;
    //     string str = to_string(ans1);
        
    //     string str2 = "";
    //     str2.push_back(str[div2-1]);

    //     ans1 = stoi(str2);
    // }
    // else{
    //     ans1 = findrange(m-1)[1] + div1;
    //     ans1  = ans1%10;
    // }
    // cout<<ans1;
    if(a>n){
        a = 0;
        for(int i=1 ; i<m-1 ; i++){
        int x = (findrange(i)[1] - findrange(i)[0]) +1;
        a = a + (x*i);
        }
        cout<<a<<endl;

    int rem_step = n-a;
    int div1 = rem_step/(m-1);
    int div2 = rem_step%(m-1);
    int ans1=0;
    if(div2 != 0){
        ans1 = findrange(m-2)[1] + div1+1;
        string str = to_string(ans1);
        
        string str2 = "";
        str2.push_back(str[div2-1]);

        ans1 = stoi(str2);
    }
    else{
        ans1 = findrange(m-2)[1] + div1;
        ans1  = ans1%10;
    }
    cout<<ans1;

    }
}