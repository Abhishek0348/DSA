#include <iostream>
#include <bits\stdc++.h>

using namespace std;

void Second_largestinArray(vector<int> arr, int n){
    int max = arr[0];
    int max2 = INT_MIN;
    for(int i = 1; i < n; i++){
        if(arr[i] > max){
            max2 = max;
            max = arr[i];
        }
        else if(arr[i]<max && arr[i]>max2){
            max2 = arr[i];
        }
    }
    cout << "Largest element is " << max << endl;
    cout << "Second largest element is " << max2 << endl;
}

int main()
{
  vector<int> arr = {10,19,33,14,55};
  int n = arr.size();
  Second_largestinArray(arr,n);
  return 0;
}