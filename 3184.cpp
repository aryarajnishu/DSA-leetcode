#include<bits/stdc++.h>
using namespace std;

void canArrange(vector<int>& arr, int k) {
    int n = arr.size();
    int c1=0,c2=0;
    unordered_map<int,int> m;
    for(int i : arr){
        int rem = i%k;
        if(rem == 0){
            c1++;
        }
        if(rem != 0){
            m[k-rem]++;
        }
        if(m[rem] > 0){
            c2++;
            m[rem] = 0;
        }
        if(m[rem] == 0){
            m[rem]++;
        }
    }
    cout<<"c1 is :"<<c1<<" "<<c2<<" ";
}

int main(){
    vector<int> arr = {1,2,3,4,5,6};
    int k = 10;
    canArrange(arr, k);
    
}





















































// #include<bits/stdc++.h>
// using namespace std;

// int canArrange(vector<int>& arr, int k) {
//        int count = 0;
//         int n = arr.size();
//         for (int i = 0; i < n; i++) {
//             for (int j = i + 1; j < n; j++) {
//                 if ((arr[i] + arr[j]) % k == 0 && arr[j] != -1) {
//                     arr[j] = -1; 
//                     break;
//                 }
//             }
//         }
//         return count ;
//     }

// int main(){
//     vector<int> hours = {1,2,3,4,5,10,6,7,8,9};
//     int k = 5;
//     cout<<"ans is :- "<<canArrange(hours , k);
    

// }