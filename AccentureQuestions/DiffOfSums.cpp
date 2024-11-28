#include <iostream>

using namespace std;

void diffSum(int m, int n){
    int sum1 = 0;
    int sum2 = 0;
    for(int i=1; i<=n; i++){
        if(i%m == 0){
            sum1 = sum1+i;
        }
        else{
            sum2 = sum2+i;
        }
    }
    cout << sum2-sum1 << endl;
}


int main()
{
  int m,n;
  cin >> m >> n;
  diffSum(m,n);
  return 0;
}