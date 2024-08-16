#include <bits\stdc++.h>

using namespace std;

void totalHouse(int r, int unit, vector<int> arr){
    int total_req = r * unit;
    int total = 0;
    for(int i=0; i<arr.size();i++){
        total += arr[i];
        if(total >= total_req){
            cout << i+1 << endl;
            break;
        }
    }
}

int main()
{
  int r,unit;
  cin>>r >> unit;
  vector<int> arr = {2,8,3,5,7,4,1};
  totalHouse(r,unit,arr);
}