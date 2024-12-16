//05 Alphabet Rangoli
#include <stdio.h>
#include <stdlib.h>

void pyramid_letter(int sigma) {
    int slash = (sigma - 1) * 2;
    int f_letter = (int)'a' + (sigma - 1);
    int middle_l = f_letter;
    for(int row = 1; row < sigma; row++) {
        for(int f = 0; f < slash; f++) {
            printf("-");
        }
        for(int a = f_letter; a > middle_l; a--) {
            printf("%c-", a);
        }
        printf("%c", middle_l);
        for(int b = middle_l + 1; b <= f_letter; b++) {
            printf("-%c", b);
        }
        for(int f = 0; f < slash; f++) {
            printf("-");
        }
        middle_l--;
        slash -= 2;
        if(row == sigma - 1) {
            break;
        } else {
            printf("\n");
        }
    }
}

void reflection(int x){ 
    x --;
    int letter = (int)'a';
    for(int i = letter + x; i > letter; i--) {
        printf("%c-", i);
    }
    printf("%c", letter);
    for(int j = letter + 1; j <= letter + x; j++) {
        printf("-%c", j);
    }
}

void reverse_pyramid_letter(int sigma) {
    int slash = 2;
    int f_letter = (int)'a' + (sigma - 1);
    int middle_l = (int)'b';
    for(int row = 1; row < sigma; row++) {
        for(int f = 0; f < slash; f++) {
            printf("-");
        }
        for(int a = f_letter; a > middle_l; a--) {
            printf("%c-", a);
        }
        printf("%c", middle_l);
        for(int b = middle_l + 1; b <= f_letter; b++) {
            printf("-%c", b);
        }
        for(int f = 0; f < slash; f++) {
            printf("-");
        }
        middle_l++;
        slash += 2;
        if(row == sigma - 1) {
            break;
        } else {
            printf("\n");
        }
    }
}

int main() {
    
    char input[4];
    fgets(input, 4, stdin);
    int n = atoi(input);

    if(n <= 0 || n > 26) {
        printf("-");
    } else if(n == 1) {
        printf("a");
    } else {
        pyramid_letter(n);
        printf("\n");
        reflection(n);
        printf("\n");
        reverse_pyramid_letter(n);
    }
    return 0;
}