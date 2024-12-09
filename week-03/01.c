//Counting
#include <stdio.h>
#include <stdlib.h>


int main() {
    char n_in[4];
    fgets(n_in, 4, stdin);
    int num = atoi(n_in);

    if(num >= 0) {
        while(num >= 0) {
            printf("%d\n", num);
            num --;
        }
    }

    return 0;
}