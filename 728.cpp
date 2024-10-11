#include<iostream>
#include<vector>
#include<math.h>
#include <algorithm>
using namespace std;

vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        for(int i=left ; i<=right ; i++){
            int a = i,k=0;
            while(i!=0){
                if(a%(i%10) != 0){
                    k =1;
                }
                i = i/10;
            }
            if(k==0){
                ans.push_back(i);
            }
        }
        for(int x : ans){
            cout<<x<<" ";
        }
    }
int main(){
    selfDividingNumbers(1,22 );
}