#include <iostream>
#include <bits\stdc++.h>

using namespace std;

void leftRotate(vector<int> arr, int n, int k)
{
    do
    {
        int temp = arr[n-1];
        for (int i = n-2; i >= 0; i--)
        {
            arr[i+1] = arr[i];
        }
        arr[0] = temp;
        k--;
    }while(k>0);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    vector<int> arr = {10, 19, 33, 14, 55};
    int n = arr.size();
    int k = 3;
    leftRotate(arr, n, k);
    return 0;
}