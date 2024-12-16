//GCD and LCM

#include <stdio.h>
#include <stdlib.h>

int main() {

    char M_in[15], N_in[15];
    long long int M, N;
    fgets(M_in, 15, stdin);
    fgets(N_in, 15, stdin);

    M = atoll(M_in);
    N = atoll(N_in);

    long long int GCD;

    //Euclidean Algorithm
    long long int n1 = M, n2 = N;
    long long int D, R;
    while(n1 > 0 && n2 > 0) {
        D = n1 / n2;
        R = n1 % n2;
        n1 = n2;
        n2 = R;
    }
    if(n1 != 0) {
        GCD = n1;
    } else {
        GCD = n2;
    }
    //--------------------

    long long int LCM = (M * N) / GCD;

    printf("GCD: %lld", GCD);
    printf("\nLCM: %lld", LCM);

    return 0;
}