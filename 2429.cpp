#include <bits/stdc++.h>
using namespace std;

string decimalToBinary(int n) {
    string binary = "";
    while (n > 0) {
        binary = to_string(n % 2) + binary; 
        n /= 2;                            
    }
    return binary.empty() ? "0" : binary;  
}

int binaryToInt(const string& binary) {
    int result = 0;
    int n = binary.size();
    for (int i = 0; i < n; i++) {
        if (binary[n - i - 1] == '1') {
            result += pow(2, i); // Add the corresponding power of 2
        }
    }
    return result;
}


void minimizeXor(int num1, int num2) {
    int x = __builtin_popcount(num1) , y = __builtin_popcount(num2);
    string s1 = decimalToBinary(num1), s2 = decimalToBinary(num2);
    cout<<s1<<"  "<<s2<<endl;
    cout<<x<<"  "<<y<<endl;

    string str="";

    if(x==y){
        cout<<num1;
        return;
    }
    else if(x > y){
        int z = 0;
        for(int i=0 ; z<y && i<s1.size(); i++){
            if(s1[i] == '1'){
                z++;
            }
            str += s1[i];
        }
        cout<<"str is "<<str<<endl;
        int s = s1.size();
        int a = str.size();
        cout<<s<<" "<<a<<endl;
        for(int i=0 ; i<(s-a) ; i++){
            str.push_back('0');
        }

        cout<<"case 2 str is "<<str<<endl;
    }
    else{
        int n = pow(2,y)-1;
        cout<<n<<" "<<num1<<endl;
        if(n>=num1){
            cout<<n<<endl;
            return;
        }
        else{
            int remain = y-x;
            str = s1;
            for(int i=s1.size()-1 ;remain > 0 && i>=0 ; i--){
                if(s1[i] == '0'){
                    str[i] = '1';
                    remain--;
                }
            }
        }

        cout<<"case 3 is "<<str;

    }
    int ans = binaryToInt(str);
    cout<<str<<endl;
    cout<<"ans is :-" <<ans;
}

int main(){
    int num1 = 5,num2 = 29;
    minimizeXor(num1 , num2);
}