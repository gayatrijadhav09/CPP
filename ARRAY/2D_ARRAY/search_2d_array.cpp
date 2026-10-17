#include <iostream>
#include <vector>
using namespace std;

int main() {
    int m, n, target;
    cin >> m >> n;

    vector<vector<int>> matrix(m, vector<int>(n));

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    cin >> target;

    int r = 0, c = n - 1;

    while (r < m && c >= 0) {
        if (matrix[r][c] == target) {
            cout << "true";
            return 0;
        }
        else if (target < matrix[r][c]) {
            c--;
        }
        else {
            r++;
        }
    }

    cout << "false";
    return 0;
}
