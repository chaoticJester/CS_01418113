//08 Climbing Ladder Simulator
#include <stdio.h>
#include <stdlib.h>

int main() {
    int num_stairs;
    printf("Input number of stairs: ");
    scanf("%d", &num_stairs);
    char **stairs = (char**) malloc(num_stairs * sizeof(char**));
    for(int i = 0; i < num_stairs; i++) {
        stairs[i] = (char*) malloc(num_stairs * sizeof(char*));
    }

    for(int i = 0; i < num_stairs; i++) {
        for(int j = 0; j < 5; j++) {
            if(j == 2 && i == num_stairs - 2) {
                stairs[i][2] = 'O';
            } else if(j == 2 && i == num_stairs - 1) {
                stairs[i][2] = '^';
            } else if(j == 0 || j == 4) {
                stairs[i][j] = '|';
            } else{
                stairs[i][j] = '-';
            }
        }
    }

    int step0, count = 1;
    while(1){
        printf("---- round %d ----\n", count);
        for(int i = 0; i < num_stairs; i++) {
            for(int j = 0; j < 5; j++) {
                printf("%c", stairs[i][j]);
            }
            printf("\n");
        }    
        printf("Input step command: ");
        scanf("%d", &step0);
        if(step0 == 0) {
            break;
        } else {
            int step = step0;
            if(step > 0) {
                while(step != 0) {
                    if(stairs[0][2] == 'O') {
                        break;
                    }
                    char temp[5];
                    for(int i = 0; i < 5; i++) {
                        temp[i] = stairs[0][i];
                    }
                    for(int i = 1; i < num_stairs; i++) {
                        stairs[i - 1] = stairs[i];
                    }
                    stairs[num_stairs - 1] = temp;
                    step--;
                }
            } else if(step < 0) {
                while(step != 0) {
                    if(stairs[num_stairs - 1][2] == '^') {
                        break;
                    }
                    char temp[5];
                    for(int i = 0; i < 5; i++) {
                        temp[i] = stairs[num_stairs-1][i];
                    }
                    for(int i = num_stairs - 1; i > 0; i--) {
                        stairs[i] = stairs[i-1];
                    }
                    stairs[0] = temp;
                    step++;
                }
            }
        }
        count++;
    }
    return 0;
}