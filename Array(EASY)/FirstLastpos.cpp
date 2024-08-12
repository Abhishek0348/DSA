#include <bits\stdc++.h>

using namespace std;

vector<int> searchRange(vector<int>& nums, int target){
    int start = -1, end = -1;
    
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] == target) {
            if (start == -1) {
                start = i; 
            }
            end = i; 
        }
    }
    
    if (start == -1) {
        return {-1, -1};
    }
    
    return {start, end}; 
}

int main()
{
    vector<int> nums = {5,7,7,8,8,10};
    int target = 8;
    vector<int> result = searchRange(nums, target);
    for(int i=0; i<result.size(); i++){
        cout<<result[i]<<" ";
    }
    return 0;
}