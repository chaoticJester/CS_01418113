//Simplest-Form Fractions

#include <stdio.h>
#include <stdlib.h>

int main() {

    char a_in[10], b_in[10];
    fgets(a_in, 10, stdin);
    fgets(b_in, 10, stdin);
    int nume = atoi(a_in);
    int deno = atoi(b_in);

    int GCD = 0;
    int D, R, M = nume, N = deno;
    while(M > 0 && N > 0) {
        D = M / N;
        R = M % N;
        M = N;
        N = R;
    }
    if(M > 0) {
        GCD = M;
    } else{
        GCD = N;
    }

    nume = nume / GCD;
    deno = deno / GCD;

    if(deno != 1) {
        printf("= %d/%d", nume, deno);
    } else {
        printf("= %d", nume);
    }

    return 0;
}