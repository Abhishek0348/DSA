#include <bits\stdc++.h>

#include <vector>

using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> spiral;
        if (matrix.empty() || matrix[0].empty()) return spiral;

        int top = 0, right = matrix[0].size() - 1;
        int left = 0, bottom = matrix.size() - 1;

        while (top <= bottom && left <= right) {
            // Traverse from left to right across the top row
            for (int i = left; i <= right; i++) {
                spiral.push_back(matrix[top][i]);
            }
            top++;

            // Traverse from top to bottom down the rightmost column
            for (int i = top; i <= bottom; i++) {
                spiral.push_back(matrix[i][right]);
            }
            right--;

            // Traverse from right to left across the bottom row (if rows remain)
            if (top <= bottom) {
                for (int i = right; i >= left; --i) {
                    spiral.push_back(matrix[bottom][i]);
                }
                bottom--;
            }

            // Traverse from bottom to top up the leftmost column (if columns remain)
            if (left <= right) {
                for (int i = bottom; i >= top; --i) {
                    spiral.push_back(matrix[i][left]);
                }
                left++;
            }
        }
        return spiral;
    }
};

int main() {
    Solution solution;
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    vector<int> result = solution.spiralOrder(matrix);
    
    for (int num : result) {
        cout << num << " ";
    }
    
    return 0;
}
