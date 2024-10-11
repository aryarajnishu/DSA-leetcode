#include<bits/stdc++.h>
using namespace std;

string remove(string s){
    char ch = s[s.size()-1];
    string s2="";
    s2=s2+ch;
    for(int i=0 ; i<s.size()-1 ; i++){
        s2 = s2+s[i];
    }
    return s2;
}
string firstdel(string s){
    string s2="";
    for(int i=1 ; i<s.size() ; i++){
        s2 = s2+s[i];
    }
    return s2;
}

void sortSentence(string s) {
    vector<string> ans;
    s.push_back(' ');
    int i=0;
    string s1="";
    while(i<s.size()){
        while(s[i] != ' '){
                s1=s1+s[i];
                i++;
            }
            ans.push_back(s1);
            s1="";
        i++;
    }
    
    for(int i=0 ; i<ans.size() ; i++){
        ans[i] = remove(ans[i]);
    }

    sort(ans.begin() , ans.end());

    for(int i=0 ; i<ans.size() ; i++){
        ans[i] = firstdel(ans[i]);
    }
    
    string str="";
    for(int i=0 ; i<ans.size() ; i++){
        ans[i] = ans[i]+" ";
        str = str+ans[i];
    }
    str.pop_back();
    cout<<"Final String is :- "<<str<<endl;
    cout<<str.size();
    
}

int main(){
    string s = "is2 sentence4 This1 a3"; 
    sortSentence(s);
   
}