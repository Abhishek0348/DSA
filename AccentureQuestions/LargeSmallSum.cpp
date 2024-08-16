#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int LargeSmallSum(const vector<int>& arr) {
    if (arr.size() < 4) {
        return 0;
    }

    vector<int> odd_elements;
    vector<int> even_elements;

    for (size_t i = 0; i < arr.size(); ++i) {
        if (i % 2 == 0) {
            even_elements.push_back(arr[i]);
        } else {
            odd_elements.push_back(arr[i]);
        }
    }

    if (odd_elements.size() < 2 || even_elements.size() < 2) {
        return 0;
    }


    sort(odd_elements.begin(), odd_elements.end());
    int second_smallest_odd = odd_elements[1];


    sort(even_elements.begin(), even_elements.end(), greater<int>());
    int second_largest_even = even_elements[1];


    return second_smallest_odd + second_largest_even;
}

int main() {
    vector<int> arr = {9, 2, 1, 7, 5, 4};
    int result = LargeSmallSum(arr);
    cout << "Result: " << result << endl;  
    return 0;
}
