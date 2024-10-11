#include <bits/stdc++.h>
using namespace std;


int main(){
    vector<int> ans = {1,2,3,4,5,6,7,8};
    int anse = 0;
    for(int i=0 ; i<ans.size()-1 ; i++){
        anse = (anse^ans[i]);
    }
}