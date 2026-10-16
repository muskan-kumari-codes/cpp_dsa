#include <iostream>
#include <vector>
using namespace std;

// Function to print matrix in spiral order
void spiralOrder(const vector<vector<int>>& matrix) {
    if (matrix.empty() || matrix[0].empty()) {
        cout << "Matrix is empty.\n";
        return;
    }

    int top = 0;
    int bottom = matrix.size() - 1;
    int left = 0;
    int right = matrix[0].size() - 1;

    while (top <= bottom && left <= right) {
        // Traverse from left to right
        for (int i = left; i <= right; ++i)
            cout << matrix[top][i] << " ";
        top++;

        // Traverse from top to bottom
        for (int i = top; i <= bottom; ++i)
            cout << matrix[i][right] << " ";
        right--;

        // Traverse from right to left
        if (top <= bottom) {
            for (int i = right; i >= left; --i)
                cout << matrix[bottom][i] << " ";
            bottom--;
        }

        // Traverse from bottom to top
        if (left <= right) {
            for (int i = bottom; i >= top; --i)
                cout << matrix[i][left] << " ";
            left++;
        }
    }
    cout << endl;
}

int main() {
    int rows, cols;
    cout << "Enter number of rows and columns: ";
    if (!(cin >> rows >> cols) || rows <= 0 || cols <= 0) {
        cout << "Invalid input. Rows and columns must be positive integers.\n";
        return 1;
    }

    vector<vector<int>> matrix(rows, vector<int>(cols));
    cout << "Enter matrix elements:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (!(cin >> matrix[i][j])) {
                cout << "Invalid input. Please enter integers only.\n";
                return 1;
            }
        }
    }

    cout << "Spiral order: ";
    spiralOrder(matrix);

    return 0;
}
