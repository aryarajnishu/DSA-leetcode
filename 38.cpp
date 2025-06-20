#include <bits/stdc++.h>
using namespace std;

void converter(string s) {
    int n = s.size();
    vector<pair<char, int>> v;
    int i = 0;
    while (i < n) {
        int cnt = 1;  // count current char itself
        while (i + cnt < n && s[i] == s[i + cnt]) {
            cnt++;
        }
        v.push_back({s[i], cnt});
        i += cnt;
    }

    for (auto it : v) {
        cout << it.second << it.first;  // say count and then character
    }
    cout << endl;
}

int main() {
    string s = "111223343646667";
    converter(s);
}
