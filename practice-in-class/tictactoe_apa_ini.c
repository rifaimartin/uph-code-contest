#include <stdio.h>

#define SIZE 3

void init_map(char board[SIZE][SIZE]);
void print_board(char board[SIZE][SIZE]);

int main(void)
{
    char board[SIZE][SIZE];
    printf("*\n---TIC-TAC-TOEH----*\n");
    init_map(board);
    printf("Current Boad:\n ");
    print_board(board);

    return 0;
}

// function init map
void init_map(char board[SIZE][SIZE])
{
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            board[i][j] = '_';
        }
    }
}

// function init print board
void print_board(char board[SIZE][SIZE])
{
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            printf("%c ", board[i][j]);
        }
        printf("\n");
    }
}