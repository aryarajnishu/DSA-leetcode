
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
		print(stk);
        for(int i=1 ; i<s.size() ; i++){
            if(!stk.empty() && s[i] == stk.top()){
                stk.pop();
            }
            else{
				stk.push(s[i]);
			}
        }
        string str = "";
        while(!stk.empty()){
            str = str + stk.top();
			// cout<<stk.top()<<" ";
            stk.pop();
        }
        reverse(str.begin() , str.end());
        cout<<str;
    }


int main(){
    string str= "abbaca";
	removeDuplicates(str); 
}