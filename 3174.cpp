#include <bits/stdc++.h>
using namespace std;

int main(){
    string s = "cb3ef4fze";

    stack<char> st;
    for(int i=0 ; i<s.size() ; i++){
        if(s[i] <='z' && s[i] >= 'a'){
            st.push(s[i]);
        }
        else if(s[i] >= '0' && s[i] <= '9'){
            st.pop();
        }
    }
    string ans = "";
    while(!st.empty()){
        ans.push_back(st.top());
        st.pop();
    }
    reverse(ans.begin(), ans.end());

    cout <<"ans is :- "<< ans << endl;
}