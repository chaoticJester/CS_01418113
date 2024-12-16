//07 Nested For loop (draw triangle 4)
#include <stdio.h>
#include <stdlib.h>

int main() {
    char input[5];
    fgets(input, 5, stdin);
    int n = atoi(input);
    int height = n - 1;

    for(int i = 1; i <= height; i++) {
        for(int j = 0; j < i; j ++) {
            printf("*");
        }
        printf("\n");
    }
    for(int i2 = 0; i2 < n; i2++) {
        printf("*");
    }
    printf("\n");
    for(int i3 = height; i3 > 0; i3--) {
        for(int j2 = 0; j2 < i3; j2++) {
            printf("*");
        }
        if(i3 - 1 > 0) {
            printf("\n");
        }
    }
    return 0;
}