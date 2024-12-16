//Fibonacci (Easy)

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int fibo(int n) {
    //--------------------------
    if(n == 1 || n == 2) {
        return 1;
    } else if(n == 0) {
        return 0;
    } else {
        return fibo(n-2) + fibo(n-1);
    }
    //----------------------------
}

int main() {
    char input_n[5];
    fgets(input_n, 5, stdin);
    int n, i;
    n = atoi(input_n);
    //----------------------------
    for (int i = 0; i <= n; i++) { 
        int r = fibo(i);
        printf("F(%d) = %d\n", i, r);
    }
    //----------------------------
    return 0;
}