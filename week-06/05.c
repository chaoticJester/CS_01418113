//05 Bishop's Way (function)
#include <stdio.h>
#define BOARD_SIZE 8

void bishopMoves (int board[][BOARD_SIZE], int xPos, int yPos) {
    int left_up = xPos - 1, up = xPos + 1;
    for(int i = yPos - 1; i >= 0; i--) {
        if(left_up >= 0) {
            board[i][left_up] = (int)'X';
        }
        if(up <= 7) {
            board[i][up] = (int)'X';
        }
        left_up --;
        up ++;
    }
    int left_d = xPos - 1, rigth_d = xPos + 1;
    for(int i = yPos + 1; i <= 7; i++) {
        if(left_d >= 0) {
            board[i][left_d] = (int)'X';
        }
        if(rigth_d <= 7) {
            board[i][rigth_d] = (int)'X';
        }
        left_d --;
        rigth_d ++;
    }
}

int main() {
    int x, y;
    printf("Enter Bishop's X Y position: ");
    scanf("%d %d", &x, &y);
    int chess_board[BOARD_SIZE][BOARD_SIZE];
    for(int i = 0; i < BOARD_SIZE; i++) {
        for(int j = 0; j < BOARD_SIZE; j++) {
            chess_board[i][j] = 0;
        }
    }
    chess_board[y][x] = (int)'B';
    bishopMoves(chess_board, x, y);
    printf("  0 1 2 3 4 5 6 7\n");
    for(int i = 0; i < BOARD_SIZE; i++) {
        printf("------------------\n");
        printf("%d", i);
        for(int j = 0; j < BOARD_SIZE; j++) {
            if(chess_board[i][j] == 0) {
                printf("| ");
                continue;
            }
            printf("|%c", chess_board[i][j]);
        }
        printf("|\n");
    }
    printf("------------------\n");
    return 0;
}