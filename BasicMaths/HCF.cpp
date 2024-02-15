#include <iostream>

using namespace std;

int main()
{
int n = 15,m=6,x=1;
  int a = (n < m) ? n : m;
    
    for (int i = 1; i <= a; i++) {
        if (n % i == 0 && m % i == 0) {
            x=i;
        }
    }
    cout<<x;
  return 0;
}