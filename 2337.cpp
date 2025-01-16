#include <bits/stdc++.h>
using namespace std;

bool canChange(string start, string target) {
    int n = start.size();
    string s1 = "";
    string s2 = "";
    for(int i=0 ; i<n ; i++){
        if(start[i] != '_'){
            s1.push_back(start[i]);
        }
        if(target[i] != '_'){
            s2.push_back(target[i]);
        }
    }

    int i = 0;
    while(i<n){
        if(target[i]=='L'){
            int j=i;
            while(start[j] != 'R'){
                if(start[j++] == 'L'){
                    break;
                }
                if(start[j++] == 'R'){
                    return false;
                }
            }
        }
        else if(target[i]=='R'){
            int j=i;
            while(start[j] != 'L'){
                if(start[j--] == 'R'){
                    break;
                }
                if(start[j--] == 'L'){
                    return false;
                }
            }
        }
        else{
            i++;
        }
    }
    return true;

    // return true && (s1==s2);
    // return s1==s2;
}

int main(){
    string s1 = "__L_R_L_RR__";
    string s2 = "L____RL___RR";
    cout<<canChange(s1, s2);
}