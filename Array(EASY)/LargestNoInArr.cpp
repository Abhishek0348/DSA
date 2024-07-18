#include <iostream>
#include <bits\stdc++.h>

using namespace std;

void largestinArray(vector<int> arr, int n){
    int max = arr[0];
    for(int i = 1; i < n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    cout << "Largest element is " << max << endl;
}

int main()
{
  vector<int> arr = {10,19,33,14,55};
  int n = arr.size();
  largestinArray(arr,n);
  return 0;
}