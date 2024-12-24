//04 The Value of PI
#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>

int main() {
    int n, one = -1;
    double result = 0;
    printf("Enter n: ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
            one = one * (-1);
            result += one * ((double)4.0 / (2.0 * i + 1.0));
    }
    printf("%.10lf", result);
}