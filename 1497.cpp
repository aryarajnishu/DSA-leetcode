#include<bits/stdc++.h>
using namespace std;

int canArrange(vector<int>& arr, int k) {
    int count = 0;
        int n = arr.size();
        for (int i = 0; i < n; i++) {
            int j = i+1;
            while(j<n){
                if(arr[i] + arr[j] % k == 0 && arr[j] != -1){
                    count++;
                    arr[j] = -1;
                    j = n;
                }
                j++;
            }

        }
        return count;
}

int main(){
    vector<int> hours = {1,2,3,4,5,10,6,7,8,9};
    int k = 5;
    int count = canArrange(hours , k);
    cout<<"ans is :- "<<canArrange(hours , k)<<endl;
    // if(count == hours.size()/2) cout<<"ans is right";
    // else cout<<"ans is wrong";

}