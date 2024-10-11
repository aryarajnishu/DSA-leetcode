
#include<bits/stdc++.h>

using namespace std;

void print(stack<char> s){
    cout<<"satck is :-"<<" ";
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
}

void removeDuplicates(string s) {
        stack<char> stk ;
        stk.push(s[0]);
        for(int i=1 ; i<s.size() ; i++){
            char ch = s[i];
            char ch1 = ch-32;
            // cout<<ch<<" "<<ch1<<" ";
            // cout<<endl;
            if(!stk.empty() && (stk.top() == ch1)){
                stk.pop();
            }
            else{
                stk.push(ch);
            }
        }
        string str = "";
        while(!stk.empty()){
            str = str + stk.top();
            stk.pop();
        }
        reverse(str.begin() , str.end());
        cout<<str;
    }


int main(){
    string str= "leEeetcode";
	removeDuplicates(str); 
    // char ch = 'a';
    // char ch2 = ch - 32;
    // cout<<ch2<<" ";
}