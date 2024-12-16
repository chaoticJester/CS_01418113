//06 Collection Bank
#include <stdio.h>
#include <stdlib.h>

int main() {
    char input[10];
    printf("Enter your goal amount: ");
    fgets(input, 10, stdin);
    float goal = atof(input);

    float collect = 0, collect_td;
    int count = 1;

    while(1) {
        char input_2[10];
        printf("Enter money collected today: ");
        fgets(input_2, 10, stdin);
        collect_td = atof(input_2);
        collect += collect_td;
        if(collect >= goal) {
            if(count == 1) {
                printf("Congratulations! You take %d day to reach your goal.", count);
            } else {
                printf("Congratulations! You take %d days to reach your goal.", count);
            }
            break;
        }
        printf("Total money collected up to day %d is %.2lf. You need %.2lf more.\n", count, collect, goal - collect);
        count ++;
    }
    return 0;
}