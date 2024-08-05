#include <bits\stdc++.h>

using namespace std;

bool isIsomorphic(string s, string t) {
    if (s.length() != t.length())
        return false;
    
    unordered_map<char, char> mp1, mp2;
    for (int i = 0; i < s.length(); ++i) {
        char original = s[i];
        char target = t[i];

        if (mp1.find(original) != mp1.end()) {
            if (mp1[original] != target)
                return false;
        } else {
            mp1[original] = target;
        }

        if (mp2.find(target) != mp2.end()) {
            if (mp2[target] != original)
                return false;
        } else {
            mp2[target] = original;
        }
    }
    return true;
}

int main()
{
  string s = "egg", t = "add";
  cout << isIsomorphic(s, t) << endl;
  return 0;
}