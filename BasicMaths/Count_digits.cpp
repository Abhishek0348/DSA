#include <iostream>

using namespace std;

void countdigits(int n){
    int count = 0;
    while(n!=0){
        int digit = n%10;
        n= n/10;
        count++;
    }
    cout<<count;
}

int main()
{
  int n = 4000;
  countdigits(n);
  return 0;
}