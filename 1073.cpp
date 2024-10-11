#include<bits/stdc++.h>
using namespace std;

int add(vector<int>& arr, int size) {
        int sum = 0;
        for (int i = 0; i < size; ++i) {
            if (arr[i] > 0) {
                sum += pow(-2, i);
            }
        }
        return sum;
}

void addNegabinary(vector<int>& arr1, vector<int>& arr2) {
        int x = arr1.size();
        int y = arr2.size();
        reverse(arr1.begin() , arr1.end());
        reverse(arr2.begin() , arr2.end());
        cout<<add(arr1, x)<<"  "<<add(arr2, y)<<endl;
        // int finalsum = add(arr1, x) + add(arr2, y);
        int finalsum=31;
        cout<<"final sum is:- "<<finalsum<<endl;
        vector<int> ans;

        while (finalsum != 0) {
           int remainder = finalsum % -2;
           finalsum /= -2;
 
           if (remainder < 0){
                remainder += (2);
                finalsum += 1;
           }
           ans.push_back(remainder);
        }
        cout<<endl;

        // if (ans.empty()) {
        //     ans.push_back(0);
        // }

        reverse(ans.begin(), ans.end());
        for(int x: ans){
            cout<<x<<" ";
        }
}

int main(){
    vector<int> arr1 = {1,1,1,1,1};
    vector<int> arr2 = {1,0,1};
    addNegabinary(arr1, arr2);
}

// int powNeg2(int exponent) {
//         return -(1 << exponent);
//     }

//     int add(vector<int>& arr, int size) {
//         int sum = 0;
//         for (int i = 0; i < size; ++i) {
//             if (arr[i] > 0) {
//                 sum += powNeg2(i);
//             }
//         }
//         return sum;
//     }
