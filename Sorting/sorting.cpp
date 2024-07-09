#include <iostream>
#include <vector>

using namespace std;

void printSortedArr(vector<int> arr, int n){
    cout<<"Sorted Array : ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl; 
}

void bubblesort(vector<int>& arr, int n){
    for (int i = 0; i < n-1; i++){
        for(int j = 0; j < n-i-1; j++){ 
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printSortedArr(arr, n);
}

int main()
{
    vector<int> arr;
    int n;
    cout<<"Define Size of Arr : ";
    cin >> n;

    cout<<"Enter the nos in arr ";
    for(int i = 0; i < n; i++){
        int value;
        cin >> value;
        arr.push_back(value);
    }

    bubblesort(arr, n);

    return 0;
}
