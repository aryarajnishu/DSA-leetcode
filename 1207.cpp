#include<iostream>
#include<vector>
#include<math.h>
#include <algorithm>
using namespace std;

bool uniqueOccurrences(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        vector<int> a;
        vector<int> b;
        int k;
        for(int i=0 ; i<arr.size()-1 ; i++){
            if(arr[i]<arr[i+1]){
                b.push_back(arr[i]);
            }
            if(arr[i]==arr[i+1] && i== arr.size()-2){
                b.push_back(arr[i]);
            }
            
        }
        for(int x: b){
            cout<<x<<" ";
        }
        cout<<endl;
        for(int i=0 ; i<b.size() ; i++){
            k = count(arr.begin(),arr.end(),b[i]);
            a.push_back(k);
        }
        sort(a.begin() , a.end());
        for(int i=0 ; i<a.size() ; i++){
            for(int j=i+1 ; j<a.size() ; j++){
                if(a[i]==a[j]){
                    return false;
                }
            }
        }
        return true;
    }


int main(){
    vector<int> ans={1,2,2,3,3};
    cout<<uniqueOccurrences(ans);
}