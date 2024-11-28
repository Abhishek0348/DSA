#include <bits/stdc++.h>
using namespace std;

void revWords(string s) {
    string words = "";
    string answer = "";
    vector<string> rev;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] != ' ') {
            words += s[i];
        } else if (!words.empty()) {  
            rev.push_back(words);
            words = "";
        }
    }
    if (!words.empty()) { 
        rev.push_back(words);
    }

    int n = rev.size();
    for (int i = n - 1; i >= 0; i--) {
        answer += rev[i];
        if (i > 0) cout << " ";  
    }
    cout << endl;
}

int main() {
    string s = "the   sky   is   blue";
    cout << "original : " << s << endl;
    revWords(s);
    return 0;
}
