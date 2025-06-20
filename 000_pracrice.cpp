#include<bits/stdc++.h>
using namespace std;



int main(){
    string s = "cbacdcbc";
    stack<char> st;
    vector<int> li(26, 0);
    vector<int> seen(26, 0);

    for(int i=0 ; i<s.size() ; i++){
        li[s[i] - 'a'] = i;;
    }

    // for(auto i : um){
    //     cout << i.first << " " << i.second << endl;
    // }

    for(int i=0 ; i<s.size() ; i++){
        if(seen[s[i] - 'a'] == 1) continue; // if already seen, skip
        while(!st.empty() && st.top() > s[i] && li[st.top() - 'a'] > i){
            seen[st.top() - 'a'] = 0; // mark as not seen
            st.pop();
        }
        st.push(s[i]);
        seen[s[i] - 'a'] = 1; // mark as seen
    }
    string ans= "";

    while(!st.empty()){
        ans += st.top();
        st.pop();
    }

    reverse(ans.begin(), ans.end());
    cout << ans << endl; // Output the result
    
}