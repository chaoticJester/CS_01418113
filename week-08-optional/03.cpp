//3 Diagonal Difference
#include <iostream>
#include <vector>
using namespace std;

int diagonalDifference(vector<vector<int>> arr) {
    int r1 = 0, r2 = 0;
    int s = arr.size();
    for(int i = 0; i < s; i++) {
        r1 += arr[i][i];
    }
    for(int j = s - 1, k = 0; j >= 0; j--, k++) {
        r2 += arr[k][j];
    }
    return abs(r1 - r2);
}

int main() {
    int n;
    cin >> n;
    vector<vector<int>> arr(n);

    for (int i = 0; i < n; ++i) {
        arr[i].resize(n);
        for (int j = 0; j < n; ++j) {
            int temp;
            cin >> temp;
            arr[i][j] = temp;
        }
    }

    int result = diagonalDifference(arr);
    cout << result << endl;
    return 0;
}
