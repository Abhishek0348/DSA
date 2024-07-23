#include <iostream>
#include <bits\stdc++.h>

using namespace std;

int MoveZeros(vector<int> arr, int n)
{
   int j = -1;
   for(int i = 0; i<n; i++){
    if(arr[i]==0){
        j=i;
        break;
    }
   }

   if(j == -1){
    return 0;
   }

   for(int i = j+1; i<n; i++){
    if(arr[i]!=0){
        swap(arr[i],arr[j]);
        j++;
    }
   }

   for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
   return 0;
}

int main()
{
    vector<int> arr = {10, 0, 33, 0, 55};
    int n = arr.size();
    MoveZeros(arr, n);
    return 0;
}