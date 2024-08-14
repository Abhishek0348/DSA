#include <bits\stdc++.h>

using namespace std;

void CountEven(string args){
    int cnt1 = 0, cnt2 = 0;
    for(int i=0; i<args.length(); i++){
        if(args[i] == 'a' || args[i] == 'b'){
            cnt1++;
        }
        else{
            cnt2++;
        }
    }
    if(cnt1%2 == cnt2%2){
        cout << "True";
    }
    else {
        cout << "False";
    }
}

int main()
{
  string args = "ababacdccb";
  CountEven(args);
}