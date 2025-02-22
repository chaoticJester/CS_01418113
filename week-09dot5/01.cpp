//01 Reduce to Zero
#include <iostream>
using namespace std;

int main() {
    int n, steps = 0;
    cin >> n;
    while(n > 0) {
        if(n % 2 == 0) {
            n = n / 2;
        } else {
            n--;
        }
        steps++;
    }
    cout << steps << endl;
}