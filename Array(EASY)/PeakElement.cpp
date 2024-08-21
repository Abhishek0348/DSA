#include <iostream>
#include <vector>
#include <utility>

using namespace std;

class Solution {
public:
    void swap(pair<int,int>& a, pair<int,int>& b) {
        pair<int,int> temp = a;
        a = b;
        b = temp;
    }

    void maxHeapify(vector<pair<int,int>>& arr, int n, int i) {
        int largest = i;
        int left = 2 * i + 1;
        int right = 2 * i + 2;

        if (left < n && arr[left].first > arr[largest].first)
            largest = left;

        if (right < n && arr[right].first > arr[largest].first)
            largest = right;

        if (largest != i) {
            swap(arr[i], arr[largest]);
            maxHeapify(arr, n, largest);
        }
    }

    void heapify(vector<pair<int,int>>& arr, int n) {
        for (int i = n / 2 - 1; i >= 0; i--) {
            maxHeapify(arr, n, i);
        }
    }

    int findPeakElement(vector<int>& nums) {
        vector<pair<int,int>> Element;
        for (int i = 0; i < nums.size(); i++) {
            Element.push_back({nums[i], i});
        }
        heapify(Element, nums.size());

        return Element[0].second;
    }
};

int main() {
    Solution solution;
    vector<int> nums = {1, 3, 20, 4, 1, 0};  
    int peakIndex = solution.findPeakElement(nums);
    
    cout << "The index of the peak element is: " << peakIndex << endl;
    cout << "The peak element is: " << nums[peakIndex] << endl;
    
    return 0;
}
