#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums = {4,6,8,3,10,9,0,2,3};
    int n = nums.size();
    int max = *max_element(nums.begin() , nums.end()-(n-4));
    cout<<max;
}