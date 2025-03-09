#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums = {1,2,3,4,5};
    int k = 15;

    priority_queue<int, vector<int>, greater<int>> pq;
    for(int i : nums) pq.push(i);

    int count = 0;

    while(!pq.empty() && pq.top() < k){
        int x = pq.top();
        pq.pop();
        int y = pq.top();
        pq.pop();
        // if(y >= k){
        //     break;
        // }

        count++;

        int z = 2*x+y;
        pq.push(z);
    }

    cout<<count<<endl;

}