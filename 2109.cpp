#include <bits/stdc++.h>
using namespace std;

void addSpaces(string s, vector<int>& spaces) {
    int n = s.size() , m = spaces.size();
    cout<<n<<" "<<m<<endl;
    string s1 = "";
    for(int i=0 ; i<n+m ; i++){
        s1 += '#';
    }

    for(int i=0 ; i<m ; i++){
        s1[spaces[i]] = '&';
    }
    cout<<"string is :-"<<s1<<endl;
        
}

int main(){
    string s = "icodeinpython";
    vector<int> gap = {1,5,7,9};
    addSpaces(s,gap);
}