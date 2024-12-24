//05 พิมพ์สามเหลี่ยมไปทางขวาด้วยอักขระ 2 ตัว
#include <stdio.h>

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    int height = n - 1;

    for(int i = 1; i <= height; i++) {
        for(int j = 0; j < i; j ++) {
            if(j % 2 != 0) {
                printf("x");
            } else {
                printf("-");
            }
        }
        printf("\n");
    }
    for(int i2 = 0; i2 < n; i2++) {
        if(i2 % 2 != 0) {
            printf("x");
        } else {
            printf("-");
        }
    }
    printf("\n");
    for(int i3 = height; i3 > 0; i3--) {
        for(int j2 = 0; j2 < i3; j2++) {
            if(j2 % 2 != 0) {
                printf("x");
            } else {
                printf("-");
            }
        }
        if(i3 - 1 > 0) {
            printf("\n");
        }
    }
    return 0;
}