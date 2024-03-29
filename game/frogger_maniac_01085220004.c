// Frogger Game with C
//
// This program was written by Muhamad Rifai (01085220004)

//#MY GITHUB LINK -> track update code in repo my frog love [https://github.com/rifaimartin/uph-code-contest/tree/master/game]
// on 21 November 2022, 6:53 AM Phase 1
// on 03 Desember 2022, 18:13 PM Phase 2
// on 09 Desember 2022, 18:13 PM Phase 3
// on 14 Desember 2022, 19.00 PM Phase 3.1 , 3.2 , 3.3
// on 19 Desember 2022, 04.00 AM phase 3.4 - adding feature increses life when u frog placed in lyypad
// on 21 desember 2022 -> i will adding combo to jump with one step to lylypad HAHAHA

//klo tile nya bisa bergerak lebih baik
#include <stdio.h>

// first define 4 8 frog object ... 

// Provided constants
#define SIZE 9
#define TRUE 1
#define FALSE 0
#define XSTART 8
#define YSTART 4
#define LEFT 0
#define RIGHT 1
#define STATIC -1
// Provided Enums
enum tile_type
{
    LILLYPAD,
    BANK,
    WATER,
    TURTLE,
    LOG
};

struct bug {
    int present;
    int move;
    int done;
};


// Provided structs
struct board_tile
{
    enum tile_type type; // The type of piece it is (water, bank, etc.)
    int occupied;        // TRUE or FALSE based on if Frogger is there.
    // int bug_present;
};

// Prints out the current state of the board.
void init_board(struct board_tile board[SIZE][SIZE], struct bug bug_on_board[SIZE][SIZE]);
// this function used for print board initiate 
void print_board(struct board_tile board[SIZE][SIZE], struct bug bug_on_board[SIZE][SIZE]);
// this function used for add log in board when play a game by command l
void add_log(struct board_tile board[SIZE][SIZE], int, int, int);
// this function used for add bug in board when play a game by command l
void add_bug(struct board_tile board[SIZE][SIZE], struct bug bug_on_board[SIZE][SIZE], int, int);
// this function used for add remove row in board when play a game by command c
void clear_row(struct board_tile board[SIZE][SIZE], int);
// this function used for add remove log by rane in board when play a game by command R
void remove_log(struct board_tile board[SIZE][SIZE], int, int);
// this function used for moving frog by command a,w,s,d with koordinat
void move_frog(struct board_tile board[SIZE][SIZE], char, int*, int*);
// this function used for moving frog by command a,w,s,d with koordinat
void move_bug(struct board_tile board[SIZE][SIZE],struct bug bug_on_board[SIZE][SIZE]);
// this function identify object tyoe in a game whit tile type
char type_to_char(enum tile_type type);

int main(void)
{

    printf("Welcome to Frogger Game!\n");
    struct board_tile game_board[SIZE][SIZE];
    struct bug bug_on_board[SIZE][SIZE];

    init_board(game_board, bug_on_board);
    
    int num_turtles;
    printf("How many turtles? "); scanf("%d", &num_turtles);
    printf("Enter pairs:\n");
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
    print_board(game_board, bug_on_board);
    // Phase 1.3: create a command loop, to read and execute commands!

    char command;
    int x,y;
    int y_start, y_end;
    int x_frog = XSTART, y_frog = YSTART;
    int lives = 3;

    printf("Enter command: ");
    while (scanf("%c", &command) != EOF) {
      
        if (command == 'l') {
            scanf(" %d %d %d",  &x, &y_start, &y_end);
            if ((x > 0) && (x < 8)) {
                add_log(game_board, x, y_start, y_end);
            }

            print_board(game_board,bug_on_board);
            printf("Enter command: ");
        } else if (command == 'c') {
            scanf(" %d",  &x);
            if ((x > 0) && (x < 8)) {
                clear_row(game_board, x);
            }

            print_board(game_board,bug_on_board);
            printf("Enter command: ");
        } else if (command == 'r') {
            scanf(" %d %d",  &x, &y);
            if ((x > 0) && (x < 8)) {
                remove_log(game_board, x, y);
            }

            print_board(game_board,bug_on_board);
            printf("Enter command: ");
        } else if (command == 'w' || command == 'a' || command == 's' || command == 'd') {

            move_frog(game_board, command, &x_frog, &y_frog);
            move_bug(game_board, bug_on_board);

            if(game_board[x_frog][y_frog].type == LILLYPAD) {
                print_board(game_board,bug_on_board);
                lives++;
                printf("Bro broooo!!!!  You won! \n");
                printf("your life increases wkwkw! lives = %d\n", lives);
                break;
            } else if ((game_board[x_frog][y_frog].type == WATER) || (bug_on_board[x_frog][y_frog].present) ) {
                // printf("MASUK SINI KAH?");
                lives--;
                print_board(game_board, bug_on_board);
                if (!lives) {
                    printf("Bro broooo!!!!  why jump to water bro? you fix losee, you DIED!!! \n");
                    break;
                } else {
                    game_board[x_frog][y_frog].occupied = FALSE;
                    printf("\n# LIVES LEFT : %d #\n\n", lives);
                    x_frog = XSTART;
                    y_frog = YSTART;
                    game_board[x_frog][y_frog].occupied = TRUE;
                    print_board(game_board, bug_on_board);
                    printf("Enter command: ");
                }
            } else {
               print_board(game_board, bug_on_board);
            //    printf("masuk sini fai");
               printf("Enter command: ");
            }
        } else if (command == 'b') {
            int x_bug, y_bug;
            scanf(" %d %d", &x_bug, &y_bug);
            if ((x > 0) && (x < 8)) {
                add_bug(game_board, bug_on_board, x_bug, y_bug);
                print_board(game_board, bug_on_board);
                printf("Enter command: ");
            }
        } 
    }


    // this my code. OH MY GOD. VERY BAD!!!! PHASE 2s
    // char row;
    // int start_column, middle_col, end_col;
    // scanf("%s %d %d %d", &row, &start_column, &middle_col, &end_col);
    // for (int startCol = start_column; startCol < end_col; startCol++) {
    //     if ((startCol > 0) && (startCol < 8) && (startCol >= 0) && (startCol < SIZE))
    //         game_board[start_column][startCol + 1].type = LOG;
    // }

  
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

// this function used for moving koordinat frog in a game board
void move_frog(struct board_tile board[SIZE][SIZE], char command, int* x_frog, int* y_frog) {
    int temp_x = *x_frog;
    int temp_y = *y_frog;

    switch(command)
    {
        case 'w':
            if(temp_x -1 >= 0) {
                board[temp_x][temp_y].occupied = FALSE;
                board[--temp_x][temp_y].occupied = TRUE;
            }
            break;
        case 's':
            if(temp_x +1 >= 8) {
                board[temp_x][temp_y].occupied = FALSE;
                board[++temp_x][temp_y].occupied = TRUE;
            }
            break;
        case 'a':
            if(temp_x -1 >= 0) {
                board[temp_x][temp_y].occupied = FALSE;
                board[temp_x][--temp_y].occupied = TRUE;
            }
            break;
        case 'd':
            if((temp_y +1) <= 8) {
                board[temp_x][temp_y].occupied = FALSE;
                board[temp_x][++temp_y].occupied = TRUE;
            }
            break;
        default:
            printf("Error! operator is not correct");
    }
    
    *x_frog = temp_x;
    *y_frog = temp_y;

    return;
}

// this function used for moving bug
void move_bug(struct board_tile board[SIZE][SIZE], struct bug bug_board[SIZE][SIZE]) {
    for (int row = 1; row <= 7; row++) {
        for (int col = 0; col <= 8; col++) {
            if (bug_board[row][col].present) {
                if ((bug_board[row][col].move == RIGHT) && (board[row][col+1].type != WATER)) {
                    if (!bug_board[row][col].done) {
                        bug_board[row][col+1].present = TRUE;
                        bug_board[row][col+1].move = RIGHT;
                        bug_board[row][col+1].done = TRUE;

                        bug_board[row][col].present = FALSE;
                        bug_board[row][col].move = STATIC;
                    }

                } else if (board[row][col + 1].type == WATER) {
                    bug_board[row][col].move = LEFT;

                }

                if ((bug_board[row][col].move == LEFT) && (board[row][col-1].type != WATER)) {
                    if (!bug_board[row][col].done) {
                        bug_board[row][col-1].present = TRUE;
                        bug_board[row][col-1].move = LEFT;
                        bug_board[row][col-1].done = TRUE;

                        bug_board[row][col].present = FALSE;
                        bug_board[row][col].move = STATIC;
                    }

                } else if (board[row][col-1].type == WATER) {
                    bug_board[row][col].move = RIGHT;

                }
            
            }
        }
    }
    


    return;
}

// this function used for define log in a game board
void add_log(struct board_tile board[SIZE][SIZE], int x, int y_start, int y_end) {
    if (y_start < 0) {
        y_start = 0;
    };
    if (y_end > 8) {
        y_end = 8;
    };
    for (int i = 0; i < SIZE; i++) {
        if (board[x][i].type == TURTLE) {
            return;
        }
    }
    for (int i = y_start; i <= y_end; i++) {
        // printf("trace:filled-log");
        board[x][i].type = LOG;
    }
}

// this function used for define bug in a game board
void add_bug(struct board_tile board[SIZE][SIZE], struct bug bug_on_board[SIZE][SIZE], int x_bug, int y_bug) {
    
    if ((y_bug >= 0) && (y_bug <= 8)) {
        if ((board[x_bug][y_bug].type == LOG) || (board[x_bug][y_bug].type == TURTLE))  {
            bug_on_board[x_bug][y_bug].present = TRUE;
            bug_on_board[x_bug][y_bug].move = RIGHT;

        }
    }
}

// this function used for clear row in a game board
void clear_row(struct board_tile board[SIZE][SIZE], int x) {
     for (int i = 0; i < 8; i++) {
         if (board[x][i].occupied) {
             return;
         }
     } 
     for (int i = 0; i < 8; i++) { 
         board[x][i].type = WATER;
     }
}

// this function used for remove log by range in row at a game board
void remove_log(struct board_tile board[SIZE][SIZE], int x, int y) {

      for (int i = 0; i < 8; i++) {
          if (board[x][i].occupied) {
              return;
          }
      }

      if (board[x][y].type != LOG) {
          return;
      } else {
          board[x][y].type = WATER;
      }

      int i=y+1, j=y-1;
      // remove right value in row
      while (board[x][i].type == LOG) {
          board[x][i].type = WATER;
          i++;
      }

        // remove left value in row
       while (board[x][j].type == LOG) {
          board[x][j].type = WATER;
          j--;
      }
}

// initiate firts board
void init_board(struct board_tile board[SIZE][SIZE], struct bug bug_on_board[SIZE][SIZE]) {
    for (int row = 0; row < SIZE; row++) {
        for (int col = 0; col < SIZE; col++) {
            board[row][col].occupied = FALSE;
            bug_on_board[row][col].present = FALSE;
            bug_on_board[row][col].move =  STATIC;
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

// print board the function always call after u running command
void print_board(struct board_tile board[SIZE][SIZE], struct bug bug_on_board[SIZE][SIZE]) {
    // char type_char = '\0';
    for (int row = 0; row < SIZE; row++) {
        for (int col = 0; col < SIZE; col++) {
            char type_char = '\0';
            if (board[row][col].occupied) {
                type_char = 'F';
            } else if (bug_on_board[row][col].present){
                type_char = 'B';
            } else {
                type_char = type_to_char(board[row][col].type);
                // printf("%c ", type_to_char(board[row][col].type));
            }
            printf("%c ", type_char);
            bug_on_board[row][col].done = FALSE;

        }
        printf("\n");
    }
}

