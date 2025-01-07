//04 Chess Board
#include <stdio.h>

#define BOARD_SIZE 8

void setPieceOnTable(int board[][BOARD_SIZE], char piece, int xPos, int yPos);

int main() {
    int total_piece, x, y;
    char piece; 
    int chess_board[BOARD_SIZE][BOARD_SIZE];
    for(int i = 0; i < BOARD_SIZE; i++) {
        for(int j = 0; j < BOARD_SIZE; j++) {
            chess_board[i][j] = 0;
        }
    }
    scanf("%d", &total_piece);

    for(int i = 0; i < total_piece; i++){
        scanf("\n%c(%d, %d)", &piece, &x, &y);
        setPieceOnTable(chess_board, piece, x, y);
    }
    printf("------------------");
    printf("\n  0 1 2 3 4 5 6 7");
    printf("\n");
    for(int i = 0; i < BOARD_SIZE; i++) {
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

    return 0;
}

void setPieceOnTable(int board[][BOARD_SIZE], char piece, int xPos, int yPos ) {
    board[yPos][xPos] = (int)piece;
}