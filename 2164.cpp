#include<iostream>
#include<vector>
#include<math.h>
#include <algorithm>
using namespace std;

vector<int> sortEvenOdd(vector<int>& nums) {
        vector<int> a;
        vector<int> b;
        vector<int> c;
        for(int i=0 ; i<nums.size() ; i=i+2){
            a.push_back(nums[i]);
        }
        for(int i=1 ; i<nums.size() ; i=i+2){
            b.push_back(nums[i]);
        }
        sort(a.begin() , a.end());
        sort(b.begin(), b.end(), greater<int>());
        for(int x : a){
            cout<<x<<" ";
        }
        cout<<endl;

        for(int x:b){
            cout<<x<<" ";
        }
        cout<<endl;
        int n =0,m=0;
        for(int i=0 ; i<nums.size() ; i++){
            if(i%2 == 0){
                c.push_back(a[n]);
                n++;
            }
            else{
                c.push_back(b[m]);
                m++;
            }
        }
        for(int x:c){
            cout<<x<<" ";
        }
        cout<<endl;
        return c;

}

int main(){
    vector<int> ans = {1,5,2,6,3,7,2};
    sortEvenOdd(ans);
}