//03 นักโทษที่หายไป
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, max = -1, found = 0;
    cin >> n;
    vector<int> prisoners(n);
    
    for(int i = 0; i < n; i++) {
        int number;
        cin >> number;
        prisoners[i] = number;
        if(number > max) {
            max = number;
        }
    }
    for(int i = 1; i <= max; i += 2) {
        for(int j = 0; j < n; j++) {
            if(prisoners[j] == i) {
                found = 1;
                break;
            }
        }
        if(found == 0) {
            cout << i << " ";
        } else {
            found = 0;
        }
    }
    printf("\n");
    for(int i = 2; i <= max; i += 2) {
        for(int j = 0; j < n; j++) {
            if(prisoners[j] == i) {
                found = 1;
                break;
            }
        }
        if(found == 0) {
            cout << i << " ";
        } else {
            found = 0;
        }
    }
}