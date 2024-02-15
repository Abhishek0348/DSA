#include <iostream>

using namespace std;

void reverseno(int n){
    int rev = 0;
    while(n!=0){
        int digit = n%10;
        n = n/10;
        rev = (rev*10)+digit;
    }
    cout<<rev;
}

int main()
{
  int n;
  cin >> n;
  reverseno(n);
  return 0;
}