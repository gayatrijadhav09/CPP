#include <iostream>
#include <utility>
using namespace std;

pair<int, int> linearsearch(int matrix[][3], int row, int cols, int key) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] == key) {
                return {i, j};
            }
        }
    }

    return {-1, -1};
}

int main() {
    int matrix[4][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
        {10, 11, 12}
    };

    int row = 4;
    int cols = 3;

    pair<int, int> ans = linearsearch(matrix, row, cols, 12);

    cout << "Row: " << ans.first << endl;
    cout << "Column: " << ans.second << endl;

    return 0;
}
