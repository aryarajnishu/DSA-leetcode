#include<bits/stdc++.h>
using namespace std;

long long dividePlayers(vector<int>& skill) {
        int n = skill.size(),i=0,j=n-1;
        long long count =0;
        int ans;
        sort(skill.begin() , skill.end());
        for(int x : skill){
            cout<<x<<" ";
        }
        cout<<endl;
        int k = skill[0]+skill[n-1];
        cout<<k<<endl;
        while(i<j){
            if(skill[i]+skill[j] == k){
                ans = skill[i]*skill[j];
                cout<<ans<<endl;
                count = count + ans;
                i++,j--;
            }
            else{
                return -1;
            }
        }
        return count;
    }

int main(){
    vector<int> skill ={3,2,5,1,3,4};
    dividePlayers(skill);
}