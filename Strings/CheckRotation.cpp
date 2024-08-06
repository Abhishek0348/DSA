#include <bits\stdc++.h>

using namespace std;

bool CheckString(string s1, string s2)
{
    int n = s1.length();
    for (int i = 0; i < n; i++)
    {
        int last = n - 1;
        int start = 1;
        char key = s1[0];
        while (start < n)
        {
            s1[start - 1] = s1[start];
            start++;
            if (start == n)
            {
                s1[last] = key;
            }
        }
        if(s1 == s2)
            return true;
    }
    return false;
}

int main()
{
    string s = "abcde", goal = "cdeab";
    cout<< CheckString(s, goal);
    return 0;
}