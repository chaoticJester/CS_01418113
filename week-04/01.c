//01 แปลงเลขฐานสิบเป็นเลขฐานสอง (ขนาด 4 บิต)

#include <stdio.h>
#include <stdlib.h>

int main() {
    char input[4];
    fgets(input, 4, stdin);
    int n = atoi(input);

    int d0 = n & 1;
    int d1 = n >> 1 & 1;
    int d2 = n >> 2 & 1;
    int d3 = n >> 3 & 1;

    printf("Binary number of %d is %d%d%d%d.", n, d3, d2, d1, d0);
    return 0;
}