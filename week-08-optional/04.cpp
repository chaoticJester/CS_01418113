//4 Signed Ratio
#include <iostream>
#include <vector>
#include <iomanip>
#include <cstdio>
using namespace std;

void signedRatio(vector<int> arr) {
    double p = 0, z = 0, n = 0;
    int s = arr.size();
    
    for(int i = 0; i < s; i++) {
        if(arr[i] > 0) {
            p++;
        } else if(arr[i] == 0) {
            z++;
        } else if (arr[i] < 0) {
            n++;
        }
    }

    printf("%.6lf", p/(double)s);
    printf("\n%.6lf", n/(double)s);
    printf("\n%.6lf", z/(double)s);
}

int main() {
    int n;
    cin >> n;
    vector<int> ar(n);

    for (int i = 0; i < n; ++i) {
        int temp;
        cin >> temp;
        ar[i] = temp;
    }

    signedRatio(ar);
    return 0;
}
