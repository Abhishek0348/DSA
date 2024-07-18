#include <bits\stdc++.h>

using namespace std;

int Duplicates(vector<int> nums, int n){
    int i=0;
    for(int j=1;j<n;j++){
        if(nums[i]!=nums[j]){
            nums[i+1]=nums[j];
            i++;
        }
    }
    return i+1;
}

int main()
{
  vector<int> nums = {3,3,4,4,5,5,5};
  int n = nums.size();
  cout<<Duplicates(nums,n);
  return 0;
}