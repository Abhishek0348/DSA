#include <bits/stdc++.h>


using namespace std;


void singleNo(vector<int> nums, int n){
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum ^ nums[i];
    }
    cout<<sum;
    
}

void singleNo(vector<int> nums, int n){
    map<int,int> mp;
    for(int i = 0; i<n; i++){
        mp[nums[i]]++;
    }
    for(auto it = mp.begin(); it!=mp.end(); it++){
        if(it->second == 1){
            cout<<it->first;
        }
    }
}

int main()
{
  vector<int> nums = {3,3,4,5,5};
  int n = nums.size();
  singleNo(nums,n);
  return 0;
}