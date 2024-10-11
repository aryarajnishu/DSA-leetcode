#include<bits/stdc++.h>
using namespace std;


void findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n = A.size();
        vector<int> nishu;
        for(int i=0 ; i<n ; i++){
            int count = 0;
            sort(A.begin() , A.begin()+i+1);
            sort(B.begin() , B.begin()+i+1);
            int x = i;
            while(x>=0){
                if(A[x]==B[x]){
                    count++;
                    x--;
                }
                else{
                    break;
                }
            }
            nishu.push_back(count);
        }
        for(int x: nishu){
            cout<<x<<" ";
        }
    }

int main(){
    vector<int> A={1,3,2,4};
    vector<int> B={3,1,2,4};
    findThePrefixCommonArray(A, B);
}