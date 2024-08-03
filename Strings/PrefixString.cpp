#include <bits\stdc++.h>

using namespace std;


void PrefixString(vector<string>& strs){
    string ans = "";
    string initial = strs[0];
    for( int i=1; i<strs.size(); i++){
        string s = strs[i];
        int j = 0;
        while(j < s.size() && j < initial.size() && s[j] == initial[j]){
            j++;
        }
        ans += s.substr(0, j);
        initial = s;    
    }
}

int main()
{
  vector<string> strs = {"flower","flow","flight"};
  PrefixString(strs);
}