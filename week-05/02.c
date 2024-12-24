//02 Pythagorean Triple
#include <stdio.h>
#include <math.h>

int triple_pytha(int n, int *a, int *b, int *c){
    int x, y, z;
    for(x = 1; x < n; x++) {
        for(y = x + 1; y < n; y++) {
            z = sqrt(x * x + y * y);
            if((x + y + z == n ) && (x * x + y * y == z * z)) {
                *a = x;
                *b = y;
                *c = z;
                return 1;
            }
        }
    }
    return 0;
}

int main() {
    int n, a = 0, b = 0, c = 0;
    scanf("%d", &n);
    if(triple_pytha(n, &a, &b, &c)){
        printf("(%d, %d, %d)", a, b, c);
    } else {
        printf("No triple found.");
    }
}