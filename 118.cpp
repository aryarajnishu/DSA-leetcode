#include<iostream>
#include<vector>
#include<math.h>
#include <algorithm>
using namespace std;

int factorial(int n){
        int pro =1;
        for(int i=1 ; i<=n ;i++){
            pro = pro *i;
        }
        return pro;
    }

    int ncr(int n , int r){
        return factorial(n)/(factorial(n-r)*factorial(r));
    }

    void generate(int numRows) {
       vector<vector<int>> ans;
       for(int i=0 ; i<numRows ; i++){
        vector<int> v1;
           for(int j=0 ; j<=i ; j++){
              int x = ncr(i,j); 
              v1.push_back(x);
           }
           ans.push_back(v1);
       } 
       for(int i=0 ; i<ans.size() ; i++){
        for(int j=0 ; j<ans[i].size() ; j++){
            cout<<ans[i][j]<<"  ";
           }
        cout<<endl;
        }
    }

int main(){
    int n = 5;
    cout<<factorial(5);
    generate(n);
    // for(int i=0 ; i<ans.size() ; i++){
    //     for(int j=0 ; j<ans[i].size() ; j++){
    //         cout<<ans[i][j]<<"  ";
    //     }
    //     cout<<endl;
    // }
}
