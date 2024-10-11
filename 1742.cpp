#include<iostream>
#include<vector>
#include<math.h>
#include <algorithm>
using namespace std;

int countBalls(int lowLimit, int highLimit) {
        vector<int> ans;
        vector<int> a;
        for(int i=lowLimit ; i<=highLimit ; i++){
            int sum = 0;
            int a = i;
            while(a!=0){
                sum = sum + a%10;
                a = a/10;
            }
            ans.push_back(sum);
        }
        sort(ans.begin() , ans.end());
        // for(int x:ans){
        //     cout<<x<<" ";
        // }
        // cout<<endl;
        int i =0;
        while(i<ans.size()){
            int count = 0;
            for(int j=0 ; j<ans.size() ; j++){
                if(ans[i] == ans[j]){
                    count++;
                }
            }
            a.push_back(count);
            i = i+ count;
        }
        // for(int x:a){
        //     cout<<x<<" ";
        // }
        // cout<<endl;
    return *max_element(a.begin() , a.end());
}
int main(){
    cout<<countBalls(21, 60);
    
}