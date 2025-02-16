//5 Mini-Max Sum
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void miniMaxSum(vector<int> arr, long *minSum, long &maxSum) {
    long tmpMin = 0, tmpMax = 0;
    sort(arr.begin(), arr.end());
    for(int i = 0; i < 4; i++) {
        tmpMin += arr[i];
    }
    for(int j = arr.size() - 1; j > 0; j--) {
        tmpMax += arr[j];
    }
    *minSum = tmpMin;
    maxSum = tmpMax;

}


int main() {
    int n = 5;
    long min, max;
    vector<int> ar;

    for (int i = 0; i < n; ++i) {
        long temp;
        cin >> temp;
        ar.push_back(temp);
    }

    miniMaxSum(ar, &min, max);
    cout << min << " " << max << endl;
    return 0;
}
