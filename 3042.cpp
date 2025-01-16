#include <iostream>
#include <string>

using namespace std;

void naiveStringMatching(string &text, string &pattern) {
    int n = text.length();
    int m = pattern.length();

    for (int i = 0; i <= n - m; i++) {
        bool match = true;
        for (int j = 0; j < m; j++) {
            if (text[i + j] != pattern[j]) {
                match = false;
                break;
            }
        }
        if (match) {
            cout << "Pattern found at position: " << i << endl;
        }
    }
}

int main() {
    string text = "abracadabra";
    string pattern = "abra";

    naiveStringMatching(text, pattern);

    return 0;
}
