//ประเภทสามเหลี่ยม

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char in_A[10], in_B[10], in_C[10];
    int A, B, C;

    printf("Enter length of side A: ");
    fgets(in_A, 10, stdin);
    printf("Enter length of side B: ");
    fgets(in_B, 10, stdin);
    printf("Enter length of side C: ");
    fgets(in_C, 10, stdin);

    A = atoi(in_A);
    B = atoi(in_B);
    C = atoi(in_C);

    if( (A + B <= C || B + C <= A || C + A <= B) || (A <= 0 || B <= 0 || C <= 0)) {
        printf("Triangle type is invalid.");
    } else if(A == B && B == C) {
        printf("Triangle type is equilateral.");
    } else if((A == B || B == C || A == C)) {
        printf("Triangle type is isosceles.");
    } else {
        printf("Triangle type is scalene.");
    }

    return 0;
}