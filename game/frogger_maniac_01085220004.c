// Frogger Game with C
//
// This program was written by Muhamad Rifai (01085220004)
// on 21 November 2022, 6:53 AM Phase 1
// on 03 Desember 2022, 18:13 PM Phase 2
#include <stdio.h>

// Provided constants
#define SIZE 9
#define TRUE 1
#define FALSE 0

// Provided Enums
enum tile_type
{
    LILLYPAD,
    BANK,
    WATER,
    TURTLE,
    LOG
};

// Provided structs
struct board_tile
{
    enum tile_type type; // The type of piece it is (water, bank, etc.)
    int occupied;        // TRUE or FALSE based on if Frogger is there.
};

// Prints out the current state of the board.
void init_board(struct board_tile board[SIZE][SIZE]);
// this function used for print board initiate 
void print_board(struct board_tile board[SIZE][SIZE]);
// this function identify object tyoe in a game whit tile type
char type_to_char(enum tile_type type);

int main(void)
{

    printf("Welcome to Frogger Game!\n");
    struct board_tile game_board[SIZE][SIZE];

    init_board(game_board);
    
    int num_turtles;
    printf("How many turtles? "); scanf("%d", &num_turtles);
    printf("Enter pairs:\n ");
    int turtle_x, turtle_y;
    // mapping position turtle x & y in game map. and adding condition if occupied, pair max length etc.
    if (num_turtles > 0) {
        for (int i = 0; i < num_turtles; i++) {
            scanf("%d %d", &turtle_x, &turtle_y);
            if ((turtle_x > 0) && (turtle_x < 8) && (turtle_y >= 0) && (turtle_y < SIZE) && (!game_board[turtle_x][turtle_y].occupied))
                game_board[turtle_x][turtle_y].type = TURTLE;
        }
    }
    
    printf("Game Started");
    printf("\n");
    
    // print board when after set positon turtle x & y in maps
    print_board(game_board);

    printf("Enter command: ");
    char row;
    int start_column, middle_col, end_col;
    scanf("%s %d %d %d", &row, &start_column, &middle_col, &end_col);
    for (int startCol = start_column; startCol < end_col; startCol++) {
        if ((startCol > 0) && (startCol < 8) && (startCol >= 0) && (startCol < SIZE))
            game_board[start_column][startCol + 1].type = LOG;
    }

    print_board(game_board);

    printf("Thank you for playing Frogger Game!\n");
    return 0;
}

char type_to_char(enum tile_type type) {
    char type_char = ' ';
    if (type == LILLYPAD) {
        type_char = 'o';
    } else if (type == BANK) {
        type_char = 'x';
    } else if (type == WATER) {
        type_char = '~';
    } else if (type == TURTLE) {
        type_char = 'T';
    } else if (type == LOG) {
        type_char = 'L';
    }
    return type_char;
}


//function
// void validation_outOfBound(int colX, int colY, int middleCol) {}

void add_log(struct board_tile board[SIZE][SIZE],int x, int y_start, int y_end) {
    
}

void init_board(struct board_tile board[SIZE][SIZE]) {
    for (int row = 0; row < SIZE; row++) {
        for (int col = 0; col < SIZE; col++) {
            board[row][col].occupied = FALSE;
            if (row == 0) {
                if (col%2==0) board[row][col].type = LILLYPAD;
                else board[row][col].type = WATER;
            } else if (row == 8) {
                board[row][col].type = BANK;
                if (col == 4) board[row][col].occupied = TRUE;
            } else {
                board[row][col].type = WATER;
            }
        }
    }
}

void print_board(struct board_tile board[SIZE][SIZE]) {
    // char type_char = '\0';
    for (int row = 0; row < SIZE; row++) {
        for (int col = 0; col < SIZE; col++) {
            if (board[row][col].occupied) {
                printf("F ");
            } else {
                printf("%c ", type_to_char(board[row][col].type));
            }
        }
        printf("\n");
    }
}

