#include<bits/stdc++.h>
using namespace std;

int totalHammingDistance(vector<int>& nums) {
        int sum = 0;
        for(int i=0 ; i<nums.size() ; i++){
            for(int j=i+1 ; j<nums.size() ; j++){
                bitset<32> binaryNumber1(nums[i]);
                bitset<32> binaryNumber2(nums[j]);
                cout<<binaryNumber1<<" "<<binaryNumber2;
                break;
            }
        }
    }

int main() {
    
    return 0;
}