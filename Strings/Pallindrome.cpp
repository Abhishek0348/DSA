#include <bits/stdc++.h>

using namespace std;

string reverse(string s){
    stack<string> st;
        string word = "";
        string result = "";
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == ' ') {
                if (!word.empty()) {
                    st.push(word);
                    word = "";
                }
            } else {
                word += s[i];
            }
        }
        if (!word.empty()) {
            st.push(word);
        }
        while (st.size() != 1) {
            result += st.top() + " ";
            st.pop();
        }
        result+=st.top();
        return result;
    
}

int main()
{
  string s = "The   Sky is Blue";

  cout << reverse(s);
  return 0;
}