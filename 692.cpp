#include<bits/stdc++.h>
using namespace std;
int index(vector<int> ans, int k){
    for(int i=0 ; i<ans.size() ; i++){
        if(ans[i] == k){
            return i;
        }
    }
    return -1;
}

void topKFrequent(vector<string>& words, int k) {
        sort(words.begin() , words.end());
        vector<int> ans;
        vector<string> str;
        vector<string> s;
        int n = words.size();
        int i=0;
        while(i<n){
            int count = 0;
            for(int j=0 ; j<words.size() ; j++){
                if(words[i] == words[j]){
                    count ++;
                }
            }
            ans.push_back(count);
            str.push_back(words[i]);
            i+= count;
        }
        for(int i=0 ; i<ans.size() ; i++){
            cout<<ans[i]<<" "<<str[i]<<endl;
        }
        for(int i=0 ; i<k ; i++){
            int maxis = INT_MIN;
            for(int j=0 ; j<ans.size() ; j++){
                maxis = max(maxis , ans[j]);
            }
            int x = index(ans, maxis);
            s.push_back(str[x]);
            ans[x] = -1;
        }
        cout<<endl;
        for(int i=0 ; i<s.size() ; i++){
            cout<<s[i]<<" ";
        }
}

int main(){
    vector<string> words={"the","day","is","sunny","the","the","the","sunny","is","is"};
    topKFrequent(words, 4);
}