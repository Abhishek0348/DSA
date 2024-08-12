#include <bits\stdc++.h>

using namespace std;

//Anagram is like two words are formed with the same chars

bool CheckAnagram(string s, string t)
{
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    return s == t;
}

int main()
{
    string s = "ant", goal = "tna";
    cout << CheckAnagram(s, goal);
    return 0;
}