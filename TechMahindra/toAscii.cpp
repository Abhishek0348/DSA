#include <bits\stdc++.h>

using namespace std;

void Encrypt(string s){
    string res = "";
    for(char c : s){
        int i = (int)c + 3;
        res = res + (char)i; 
    }
    cout << res;
}

int main()
{
    string s = "nmacd";
    Encrypt(s);
}