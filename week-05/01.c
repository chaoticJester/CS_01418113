//01 Automorphic Number
#include <stdio.h>
#include <stdlib.h>

int Automorphic(long long* x) {
    long long x2 = *x;
    long long xpx = x2 * x2;
    while(x2 > 0){
        if((xpx % 10) != (x2 % 10)){
            return 0;
        }
        x2 = x2 / 10;
        xpx = xpx / 10;
    }
    return 1;
}

int main() {
    long long n;
    printf("Input n = ");
    scanf("%lld", &n);
    long long npn = n * n;
    printf("n^2 = %lld\n", npn);
    if(Automorphic(&n)) {
        printf("Yes. %lld is automorphic number.", n);
    } else {
        printf("No. %lld is not automorphic number.", n);
    }
}