#include<iostream>
#include<vector>
#include<math.h>
#include <algorithm>
using namespace std;

int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        int x = -1;
        int k = 0;
        int mid = n/2;
        while(k <= n){
            int s1 =0 , s2 = 0;
            for(int i=0 ; i<n ; i++){
                if(i<mid) s1 = s1 + nums[i];
                if(i>mid) s2 = s2 + nums[i];
            }
            
            if(mid == 0) s1 = 0;
            if(mid == (n-1)) s2 =0;
            cout<<s1<<"  "<<s2<<endl;
            if(s1>s2) mid--;
            else if(s1<s2) mid++;
            else {
                x = mid;
                break;
            }
            k++;
        }
        return x;
    }

int main(){
    vector<int> a = {1,1,1,1,1,0};
    cout<<endl;
    cout<<pivotIndex(a);
}