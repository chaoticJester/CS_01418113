// Alphabet Reflection

#include <stdio.h>
#include <stdlib.h>

int main() {

    char n_in[5];
    fgets(n_in, 5, stdin);
    int n = atoi(n_in);

    if(n <= 0 || n > 26) {
        printf("-");
    } else{
        n --;
        int letter = (int)'a';
        for(int i = letter + n; i > letter; i--) {
            printf("%c-", i);
        }
        printf("%c", letter);
        for(int j = letter + 1; j <= letter + n; j++) {
            printf("-%c", j);
        }
    }
    return 0;
}