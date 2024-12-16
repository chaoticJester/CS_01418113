//08 แปลงเลขฐาน (recursion)
#include <stdio.h>
#include <stdlib.h>

long long binary_convert(long long x) {
    if(x == 0) {
        return 0;
    } else {
        return (x % 2 + 10 * binary_convert(x / 2));
    }
}

int main() {
    char input[10];
    fgets(input, 10, stdin);
    long long n = atoll(input);
    printf("%lld", binary_convert(n));
    return 0;
}
