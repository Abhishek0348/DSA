#include <bits/stdc++.h>
using namespace std;

bool compareByValue(const pair<char, int>& a, const pair<char, int>& b) {
    return a.second > b.second;
}

void descendingString(string s, int n) {
    map<char, int> mp;
    for (auto& ch : s) {
        mp[ch]++;
    }
    vector<pair<char, int>> vec(mp.begin(), mp.end());
    sort(vec.begin(), vec.end(), compareByValue);

    string result;
    for (const auto& p : vec) {
        result += string(p.second, p.first);
    }

    cout << result << endl; 
}

int main() {
    string s = "aaabcdd";
    int n = s.length();
    descendingString(s, n);
    return 0;
}
