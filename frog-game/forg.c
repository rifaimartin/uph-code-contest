#include <stdio.h>

enum tile_type{LILYPAD, BANK, WATER, TURTLE , LOG};

struct board_tile
{
    enum tile_type type;
    int occupied;
};

int main(void) {
    printf("Welcome to Frogger Game!\n");

    struct board_tile game_board[9][9];
    printf("How Many Turtle");  printf("\n");
    printf("Enter pairs: ");  printf("\n");
    printf("Game Stared: ");  printf("\n");
    return 0;

};
