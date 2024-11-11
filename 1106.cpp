#include <bits/stdc++.h>
using namespace std;

bool parseBoolExpr(string expression) {
        int n = expression.size();
        vector<char> temp;
        int i = 0;
        while(i<n){
            while( i<n && expression[i] != ')'){
                if(expression[i] != ')' && expression[i] != '(' && expression[i] != ','){
                    temp.push_back(expression[i]);
                }
                i++;
            }
            i++;
        } 
        int a=0,b=0;

        for(int i=0 ; i<temp.size() ; i++){
            if(temp[i] == 'f') a++;
            if(temp[i] == 't') b++;
            cout<<temp[i]<<" ";
        }cout<<endl;

        vector<char> temp1;
        for(int i=0 ; i<temp.size() ; i++){
            if(temp[i] != 'f' && temp[i] != 't') temp1.push_back(temp[i]);
            else{
                break;
            }
        }
        reverse(temp1.begin() , temp1.end());
        for(int i=0 ; i<temp1.size() ; i++){
            cout<<temp1[i]<<" ";
        }cout<<endl;

        bool flag ;

        for(int i=0 ; i<temp1.size() ; i++){
            if(temp1[i] == '&' && a>0){
                flag = false;
            }

            if(temp1[i] == '|' && b==0){
                flag = false;
            }

            if(temp1[i] == '&' && a==0){
                flag = true;
            }

            if(temp1[i] == '|' && b>0){
                flag = true;
            }
            if(temp1[i] == '!'){
                flag = !flag;
            }
        }

        return flag;

        
    }

int main(){
    string expression = "!(f)";
    cout<<"ans is "<<parseBoolExpr(expression);
}