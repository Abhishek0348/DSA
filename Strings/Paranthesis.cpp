#include <bits/stdc++.h>

using namespace std;

string checkParenthesis(string s){
    int balance = 0;
    string result;
    
    for (char c : s) {
        if (c == '(') {
            if (balance > 0) {
                result += c;
            }
            balance++;
        } else if (c == ')') {
            balance--;
            if (balance > 0) {
                result += c;
            }
        }
    }
    
    return result;
}

int main()
{
  string s = "(()())(())(()(()))";

  cout << checkParenthesis(s);
}