//07 Fill-in the 2D array
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, j;
    printf("Enter the number of rows or columns: ");
    scanf("%d",&n);
    int **a = (int**) malloc(n * sizeof(int**));
    for(i=0; i < n; i++) {
        a[i] = (int*) malloc(n * sizeof(int*));
    }
     // Assign value to array a
        for(int i = 0; i < n; i++) {
        int k = i + 1;
        for(int j = 0; j < n; j++) {
            a[i][j] = k;
            k++;
        }
    }
    // Print all values in array a
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) 
        printf("%2d ", a[i][j]);
        printf("\n");
    }
}