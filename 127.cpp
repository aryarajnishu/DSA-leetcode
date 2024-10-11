#include <iostream>
using namespace std;
int valid(char ch){
    if((ch>='a' && ch<= 'z') || (ch>='A' && ch<='B') || (ch>='1'&& ch<='9')){
        return 1;
    }
    return 0;
}
char change(char ch){
    char temp;
    if(ch>='A' && ch<= 'Z'){
        temp = ch -'A'+'a';
    }
    return temp;
}
bool palindrom(string str){
    int n = str.size();
    int s =0,e = n-1;
    while(s<e){
        if(str[s] != str[e]){
            return 0;
        }
        e--,s++;
    }
    return 1;
}
int main(){
     
}
