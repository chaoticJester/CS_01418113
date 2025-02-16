//6 Birthday Cake Candles
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int birthdayCakeCandles(vector<int> candles) {
    int h = -9999999, n = 0;
    for(int i = 0; i < candles.size(); i++) {
        if(candles[i] > h) {
            h = candles[i];
        }
    }
    for(int i = 0; i < candles.size(); i++) {
        if(candles[i] == h) {
            n++;
        }
    }
    return n;
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

    int result = birthdayCakeCandles(ar);
    cout << result << endl;
    return 0;
}