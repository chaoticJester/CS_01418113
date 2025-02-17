//07 File Average Score
#include <stdio.h>

double findAverage(char *filename) {
    FILE *file = fopen(filename, "r");
    double total = 0, result, tmp;
    int n = 0;
    while(fscanf(file, "%lf\n", &tmp) != EOF) {
        total += tmp;
        n++;
    }
    result = total / (double)n;
    return result;
}

int main()
{
    char filename[20];
    double average;
    scanf("%s", filename);
    average = findAverage(filename);
    printf("Average score is %.4lf\n", average);
}