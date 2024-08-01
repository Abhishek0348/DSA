#include <iostream>

using namespace std;

string LargestOdd(string s)
{
    int maxOdd = 0;
    string largestOddString = "";

    // Iterate through all substrings of s
    for (size_t i = 0; i < s.size(); ++i)
    {
        for (size_t j = i; j < s.size(); ++j)
        {
            string sub = s.substr(i, j - i + 1);
            int num = stoi(sub);
            if (num % 2 == 1 && num > maxOdd)
            {
                maxOdd = num;
                largestOddString = sub;
            }
        }
    }

    return largestOddString;
}

string largestOddEsy(string s)
{
    for (int i = s.size() - 1; i >= 0; --i)
    {
        if ((s[i] - '0') % 2 == 1)
        {
            return s.substr(0, i + 1);
        }
    }
    return "";
}

int main()
{
    string s = "72136";
    cout << LargestOdd(s) << endl;  // Efficient for short String 
    cout << largestOddEsy(s);      // Efficient for any string
}