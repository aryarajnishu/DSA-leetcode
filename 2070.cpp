#include <bits/stdc++.h>
using namespace std;



int main(){
    vector<vector<int>> items = {{193, 732}, {781, 962}, {864, 954}, {749, 627}, {136, 746}, 
                                {478, 548}, {640, 908}, {210, 799}, {567, 715}, {914, 388}, 
                                {487, 853}, {533, 554}, {247, 919}, {958, 150}, {193, 523}, 
                                {176, 656}, {395, 469}, {763, 821}, {542, 946}, {701, 676}};
                                    
    vector<int> queries = {885,1445,1580,1309,205,1788,1214,1404,572,1170,989,265,153,151,1479,1180,875,276,1584};
    // [962,962,962,962,746,962,962,962,946,962,962,919,746,746,962,962,962,919,962]
    sort(items.begin(), items.end(), [](const vector<int>& a, const vector<int>& b) {
        return a > b; 
    });

    int m = items.size();

    for(auto i : items){
        cout<<i[0]<<" "<<i[1]<<endl;
    }

    int n = queries.size();
    vector<int> ans(n ,0);

    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<m ; j++){
            if(items[j][0]<=queries[i]){
                ans[i]=items[j][1];
                break;
            }
        }
    }
    cout<<endl;
    for(int i=0 ; i<n ; i++){
        cout<<ans[i]<<" ";
    }

}
