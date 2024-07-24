#include <bits\stdc++.h>

using namespace std;

int MissingNo(vector<int> nums, int n){
    int sum = n*(n+1)/2;
    int sum2 = 0;
    for(int i=0; i<n; i++){
        sum2 = sum2 + nums[i];
    }
    int res = sum - sum2;
    cout<<res;
}

int main()
{
  vector<int> nums = {1,0,3,4,5};
  int n = nums.size();
  MissingNo(nums,n);
  return 0;
}