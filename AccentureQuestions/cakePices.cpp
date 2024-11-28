#include <bits\stdc++.h>
#include<math.h>

using namespace std;

int main()
{
  int n;
  cin >> n;
  int peices;
  peices = (n*(n+1))/2 + 1;

  cout << peices%1000000007;
}