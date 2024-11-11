#include <bits/stdc++.h>
using namespace std;


void findPrimes(vector<int> nums , unordered_map<int , vector<int>> &m) {

    for(int k=0 ; k<nums.size() ; k++){
        vector<bool> isPrime(nums[k] + 1, true);
        isPrime[0] = isPrime[1] = false;

        for (int i = 2; i * i <= nums[k]; ++i) {
            if (isPrime[i]) {
                for (int j = i * i; j <= nums[k]; j += i) {
                    isPrime[j] = false;
                }
            }
        }

        // cout << "Prime numbers between 1 and " << nums[k] << " are: ";
        for (int i = 2; i <= nums[k]; ++i) {
            if (isPrime[i]) {
                m[nums[k]].push_back(i);
            }
        }
        // cout << endl;
    }
}

int main() {
    int n=10;
    vector<int> num = {4,9,6,10};

    unordered_map<int , vector<int>> m;
    findPrimes(num , m);

    for(auto i : m){
        cout<<i.first<<" :- ";
        for(auto j : i.second){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}
