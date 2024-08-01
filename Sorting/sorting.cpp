#include <iostream>
#include <vector>

using namespace std;

void printSortedArr(vector<int> arr, int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl; 
}

/*void bubblesort(vector<int>& arr, int n){
    for (int i = 0; i < n-1; i++){
        for(int j = 0; j < n-i-1; j++){ 
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    cout<<"Bubble Sorted Array : ";
    printSortedArr(arr, n);
}*/

/*void selectionSort(vector<int>& arr, int n){
    int min;
    for (int i=0; i<n-1; i++){
      min = i;
      for(int j=i+1; j<n; j++){
        if(arr[j]<arr[min]){
          min = j;
        }
      }
      if (min != i)
        swap(arr[min], arr[i]);
    }
    cout<<"Selection Sorted Array : ";
    printSortedArr(arr,n);
}*/

/*void insertionSort(vector<int>& arr, int n){
  int key;
  for(int i=0; i<n; i++){
    key = arr[i];
    int j = i-1;
    while (j>=0 && arr[j]>key){
      arr[j+1] = arr[j];
      j = j-1;
    }
    arr[j+1] = key;
  }
  cout<<"Insertion Sorted Array : ";
  printSortedArr(arr,n);
}*/

int main()
{
    vector<int> arr;
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        int value;
        cin >> value;
        arr.push_back(value);
    }

//    bubblesort(arr, n);
//    selectionSort(arr, n);
//    insertionSort(arr,n);

    return 0;
}
