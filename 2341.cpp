#include<iostream>
#include<vector>
#include<math.h>
#include <algorithm>
using namespace std;

int main(){
    vector<int> v = {1,2,3,4,3,2,1};
    for(int i:v){
        cout<<i<<" ";
    }
    // auto it = find(v.begin(), v.end(),2);
    // v.erase(it);
    //  for(int x:v){
    //     cout<<x<<" ";
    // }
    // cout<<endl;
    // it = find(v.begin(), v.end(),2);
    // v.erase(it);
    // for(int x:v){
    //     cout<<x<<" ";
    // }
}