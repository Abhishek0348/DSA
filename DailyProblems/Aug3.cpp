#include <bits\stdc++.h>

using namespace std;

bool CheckIfSame(vector<int>& target, vector<int>& arr){
    sort(target.begin(),target.end());
    sort(arr.begin(),arr.end());
    for(int i = 0; i < target.size(); i++){
        if(target[i] != arr[i]) cout<< false;
        }
        cout<< true;
}

int main()
{
  vector<int> target = {392,360};
  vector<int> arr = {392,360};
  CheckIfSame(target,arr);
  return 0;
}