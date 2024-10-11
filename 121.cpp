#include <bits/stdc++.h>
using namespace std;

int main(){

   int max1 = 0;

   vector<int> prices = {7,6,5,4,3,2,1};
        if (prices.empty()) return 0;
        for(int i=0 ; i<prices.size() ; i++){
            int max2 = 0;
            for(int j=i+1 ; j<prices.size() ; j++){
                max2 = max(max2 , prices[j]);
            }
            if(max2 > prices[i]){
                // max1 = max2 - prices[i];
                max1 = max(max1 , max2 - prices[i]);
            }
            
        }
        cout<<"ans is :- "<< max1<<" ";
}
