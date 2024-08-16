#include <bits\stdc++.h>

using namespace std;

void differenceofSum(int m, int n){
    int sum1 = 0, sum2 = 0;
    for(int i=1; i<=m; i++){
        if(i % n == 0){
            sum1 += i;
        }
        else{
            sum2 += i;
        }
    }
    cout << (sum2 - sum1);
}

int main()
{
  int m,n;
  cin >> m >> n;
  differenceofSum(m,n);
}