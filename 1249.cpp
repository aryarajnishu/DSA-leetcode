// #include<bits/stdc++.h>
// using namespace std;

// void minRemoveToMakeValid(string s) {
//         stack<char> stk;

//         for(int i=0 ; i<s.size() ; i++){
//             if(!stk.empty() && s[i] == ')' && stk.top() == '('){
//                     stk.pop();
//                 }else if(s[i] == '('){
//                     stk.push(s[i]);
//             }
//         }
//         cout<<stk.size();

//         while (!stk.empty())
//         {
//             cout<<stk.top()<<" ";
//             stk.pop();
//         }
        
//     }

// int main(){
//     string s  = "(())))()())";
//     minRemoveToMakeValid(s);
// }



#include <bits/stdc++.h>
using namespace std;

string minRemoveToMakeValid(string s) {
    stack<char> stk;
        for (int i = 0; i < s.size(); i++) { 
            if(s[i] == '(' || s[i] == ')'){
                if (!stk.empty() && s[i] == ')' && stk.top() == '(') {
                    stk.pop();
                }
                else {
                    stk.push(s[i]);
                }
            }
        }
    string ans = "";

    char ch = stk.top();
    int size = stk.size();

    cout<<ch<<size<<endl;



    for(int i=0 ; i<(s.size())  ; i++){
        if(size > 0 && s[i] == ch){
            size--;
            continue;
        }
        else{
            ans += s[i];
        }
    }

    return ans;

}

int main() {
    // string s = "lee(t(c)o)de)";
    string s = "))((";
    cout<<minRemoveToMakeValid(s);
    return 0;
}
