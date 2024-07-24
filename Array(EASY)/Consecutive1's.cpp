#include <bits/stdc++.h>

using namespace std;

void Consecutives(vector<int> nums, int n)
{
    vector<int> temp;
    int count = 0;
    int max_count = 0;  

    for (int i = 0; i < n; i++)
    {
        if (nums[i] == 1)
        {
            count++;
        }
        else
        {
            temp.push_back(count);
            count = 0;
        }
    }
    temp.push_back(count);

    for (int i = 0; i < temp.size(); i++)
    {
        if (temp[i] > max_count)
        {
            max_count = temp[i];
        }
    }

    cout << max_count;
}

int main()
{
    vector<int> nums = {1, 0, 1, 1, 1, 1, 0, 1, 1};
    int n = nums.size();
    Consecutives(nums, n);
    return 0;
}
