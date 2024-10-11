#include<iostream>
#include<vector>
#include<math.h>
#include <algorithm>
using namespace std;

bool isFascinating(int n) {
        vector<int> ans={};
        for(int i=0 ; i<3 ; i++){
            int x = n;
            x = x * (i+1);
            while(x!=0){
                ans.push_back(x%10);
                x = x/10;
            }
            x = n;
        }
        for(int x:ans){
            cout<<x<<" ";
        }
        cout<<endl;
        sort(ans.begin() , ans.end());
        for(int x:ans){
            cout<<x<<" ";
        }
        cout<<endl;
        int a = ans.size();
        if(a!=9){
            return false;
        }
        for(int i=0 ; i<a-1 ; i++){
            if(ans[i] == ans[i+1]){
                return false;
            }
        }
        return true;
    }

int main(){
    // isFascinating(192);
    cout<<isFascinating(192);
}