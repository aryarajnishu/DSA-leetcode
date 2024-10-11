#include<iostream>
#include<vector>
#include<math.h>
#include <algorithm>
using namespace std;

int thirdMax(vector<int>& arr) {
        vector<int> ans;
        int size = arr.size();
        int i = 0;
        sort(arr.begin(),arr.end());
        for(int y:arr){
            cout<<y<<" ";
        }
        cout<<endl;
        while(i<size){
            int count = 1;
            for(int j =i+1;j<size;j++){
                if(arr[i]==arr[j]){
                    count++;
                }
                else{
                    break;
                }
            }
            ans.push_back(arr[i]);
            i = i+count;
        }
        for(int x:ans){
            cout<<x<<" ";
        }
        cout<<endl;
        if(ans.size()<=2){
            return ans[ans.size()-1];
        }
        return ans[ans.size()-3];
    }

int main(){
    vector<int> ans ={1,4,3,6,6,6,6,4,7,7,8,8,8,3,4,5,5,4,5,3,4};
    cout<<thirdMax(ans);
}