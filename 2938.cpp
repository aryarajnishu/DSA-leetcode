#include <bits/stdc++.h>
using namespace std;

int solve(string s) {
    int i = 0, j = s.size() - 1;
    int count = 0;
    while (i <= j) {
        if (s[i] == '1' && s[j] == '1') {
            j--;
        }
        else if (s[i] == '0' && s[j] == '0') {
            i++;
        }
        else if (s[i] == '1' && s[j] == '0') {
            swap(s[i], s[j]);
            count++;
            i++;
            j--;
        }
        else if (s[i] == '0' && s[j] == '1') {
            i++;
            j--;
        }
    }
    cout << s << endl;
    return count;
}

int main() {
    string s = "1001101";
    cout << "ans is: " << solve(s) << endl;
}
