//04 พิมพ์สี่เหลี่ยมขนมเปียกปูน
#include <stdio.h>
#include <stdlib.h>

int main() {
    char inputX[5], inputY[5];
    fgets(inputX, 5, stdin);
    fgets(inputY, 5, stdin);
    int x = atoi(inputX);
    int y = atoi(inputY);

    for(int row = 0; row < y; row++) {
        for(int space1 = row; space1 > 0; space1--) {
                printf(" ");
            }
        if(row == 0 || row == y - 1) {
            for(int dot = 0; dot < x; dot++) {
                printf("*");
            }
            printf("\n");
        } else{
            printf("*");
            for(int space2 = x - 2; space2 > 0; space2--) {
                printf(" ");
            }
            printf("*\n");
        }
    }
}