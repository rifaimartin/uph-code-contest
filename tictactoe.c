#include <stdio.h>

#define SIZE 3

void init_map(char board[SIZE][SIZE]);
void print_board(char board[SIZE][SIZE]);

int main (void)
{
    char board[SIZE][SIZE];
    printf("\n*------TIC-TAC-TOE------*\n");
    init_map(board);

    printf("Current Board:\n");
    print_board(board);

    int x, y;
    printf("Player 1 to move:\n");
    scanf("%d %d", &x, &y);

    board[x][y] = 'o';
    print_board(board);

    printf("Player 2 to move:\n");
    scanf("%d %d", &x, &y);

    board[x][y] = 'x';
    print_board(board);

    return 0;
}

void init_map(char board[SIZE][SIZE])
{
    for(int i=0; i < SIZE; i++)
    {
        for(int j=0; j<SIZE; j++)
        {
            board[i][j] = '_';
        }
    }
}

void print_board(char board[SIZE][SIZE])
{
    for(int i=0; i<SIZE; i++)
    {
        for(int j=0; j<SIZE; j++)
        {
            printf("%c ", board[i][j]);
        }
        printf("\n");
    }
}