#include <stdio.h>
#include <stdlib.h>

unsigned long *fibo_array(unsigned int n, double *golden_ratio);

int main() {
    unsigned int n;
    double golden_ratio = 0;
    double *goldenPtr = &golden_ratio;
    scanf("%u", &n);

    unsigned long *array;
    array = fibo_array(n, goldenPtr);
    for(int i = 0; i < n; i++) {
        printf("%lu ", array[i]);
    }
    printf("\n%lf", golden_ratio);
    return 0;
}

unsigned long *fibo_array(unsigned int n, double *golden_ratio) {
    unsigned long *array = (unsigned long*) malloc(sizeof(unsigned long) * n);
    array[0] = 0;
    array[1] = 1;
    for(int i = 2; i < n; i++) {
        array[i] = array[i - 1] + array[i - 2];
    }
    unsigned long fibo_n = array[n - 1] + array[n - 2], fibo_n1 = fibo_n + array[n-1];
    *golden_ratio = (double)fibo_n1 / fibo_n;
    return array;
}