#include <bits\stdc++.h>

using namespace std;

void anagram(string s1, string s2){
    sort(s1.begin(), s1.end());
    sort(s2.begin(),s2.end());
    if(s1 == s2)
        cout << "Anagram" << endl;
    else    
        cout << "No" <<endl;
}

int main()
{
  string s1 = "silent";
  string s2 = "listen";
  anagram(s1,s2);
}