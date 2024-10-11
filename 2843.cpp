#include<iostream>
#include<vector>
#include<math.h>
#include <algorithm>
using namespace std;

int countSymmetricIntegers(int low, int high) {
        int count;
        for(int i=low ; i<=high ; i++){
            vector<int> a;
            int s1 =0,s2 =0;
            int b = i;
            while(b != 0){
                a.push_back(b);
                b = b/10;
            }
            
            if(a.size() == 2){
                s1 = a[0];
                s2 = a[1];
                if(s1 == s1){
                    count++;
                }
            }
            if(a.size() == 4){
                s1 = a[0] + a[1];
                s2 = a[2] + a[3];
                if(s1 == s2){
                    count++;
                }
            }
        }
        return count;
    }
int main(){
    int n = 1;
    int m = 100;
    cout<<countSymmetricIntegers(n, m);
    
}