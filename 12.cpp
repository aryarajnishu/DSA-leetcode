#include <bits/stdc++.h>
using namespace std;

void maping(int num, vector<int>& digits) {
    if (num == 0) {
        digits.push_back(0);
    } else {
        while (num != 0) {
            digits.push_back(num % 10);
            num /= 10;
        }
        reverse(digits.begin(), digits.end());
    }
}

 string solveunite(int n, int index, unordered_map<int, string> um) {
    string str = "";
    int pow10[] = {1, 10, 100, 1000};

    if (index == 3) { 
        for (int i = 0; i < n; i++) {
            str += "M";
        }
    } else {
        int curr = pow10[index];
        int next = pow10[index + 1];

        if (n == 9) {
            str += um[curr];
            str += um[next];
        } else if (n >= 5) {
            str += um[5 * curr];
            for (int i = 0; i < n - 5; i++) {
                str += um[curr];
            }
        } else if (n == 4) {
            str += um[curr];
            str += um[5 * curr];
        } else {
            for (int i = 0; i < n; i++) {
                str += um[curr];
            }
        }
    }
    return str;
}

// I	1
// V	5
// X	10
// L	50
// C	100
// D	500
// M	1000

int main(){
    int num = 3749;

    // vector<int> arr = {1,5,10,50,100,500,1000};
    unordered_map<int , string> um;
    um[1] = "I";
    um[5] = "V";
    um[10] = "X";
    um[50] = "L";
    um[100] = "C";
    um[500] = "D";
    um[1000] = "M";

    vector<int> digits;
    maping(num , digits);

    string romanNumeral = "";
    for (int i = 0; i < digits.size(); ++i) {
        int index = digits.size() - i - 1;
        romanNumeral += solveunite(digits[i], index, um);
    }

    cout<<"ans is :- "<<romanNumeral;
    
    
}