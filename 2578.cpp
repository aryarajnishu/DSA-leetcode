#include<iostream>
#include<vector>
#include<math.h>
#include <algorithm>
using namespace std;

int splitNum(int num) {
        vector<int> ans;
        vector<int> a;
        vector<int> b;
        while(num != 0){
            ans.push_back(num%10);
            num = num/10;
        }
        for(int x : ans){
            cout<<x<<"  ";
        }
        cout<<endl;

        sort(ans.begin(),ans.end());
        for(int x : ans){
            cout<<x<<"  ";
        }
        cout<<endl;

        for(int i=0 ; i<ans.size() ; i++){
            if(i%2 == 0){
                a.push_back(ans[i]);
            }
            else{
                b.push_back(ans[i]);
            }
        }
        for(int x : a){
            cout<<x<<"  ";
        }
        cout<<endl;
        for(int x : b){
            cout<<x<<"  ";
        }
        cout<<endl;

        int s1=0,s2=0;
        for(int i=0 ; i<a.size() ; i++){
            s1 = s1 * 10;
            s1 = s1 + a[i];
        }
        for(int i=0 ; i<b.size() ; i++){
            s2 = s2 * 10;
            s2 = s2 + b[i];
        }
        cout<<s1<<endl;
        cout<<s2<<endl;
        cout<<endl;
        return s1 + s2;
    }

int main(){
    int n =  1000000;
    // splitNum(n);
    cout<<splitNum(n);
}