#include<iostream>
#include<vector>
#include<string>
#include<bits/stdc++.h>
using namespace std;

string interpret(string s) {
        string ans="";
	for(int i=0; i<s.size(); i++){
		if(s[i]=='G'){
			ans+=s[i];
        
			continue;
		}
		if(s[i]=='(' && s[i+1]==')')
			ans+='o', i++;
		if(s[i]=='(' && s[i+1]=='a')
			ans+="al", i+=3;
	}
	return ans;

    }

int main(){
    string command = "G()(al)";
    string ans = interpret(command);
    cout<<ans<<endl;
}