/* Tic Tac Toe written in C */
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

char board[3][3]; //Makes a 3*3 board
const char PLAYER = 'X';
const char COMPUTER = 'Y';
char winner = ' ';

/* Variables List */
void resetBoard();
void printBoard();
int checkFreeSpaces();
void playerMove();
void computerMove();
char checkWinner();
void printWinner(char);

/* Main Function */
int main() {

    resetBoard();
    
    while(winner == ' ' && checkFreeSpaces() != 0) {
    printBoard();

    playerMove();
    winner = checkWinner();
    if(winner != ' ' || checkFreeSpaces() == 0) {
        break;
    }

    computerMove();
    winner = checkWinner();
    if(winner != ' ' || checkFreeSpaces() == 0) {
        break;
    }
}

    return 0;
}

/* Bodies for variables */

// Section for reseting the board
void resetBoard() {

    for(int i = 0; i < 3; i++) { // I goes from 0 to 3, incrementing by 1
        for(int j = 0; j < 3; j++) { // J goes from 0 to 3, incrementing by 1
            board[i][j] = ' '; // Fills each square with an empty character, resetting the board
        }
    }   


}

// Body for printing board
void printBoard() {

    printf(" %c | %c | %c ", board[0][0], board[0][1], board[0][2]);
    printf("\n---|---|---\n");
    printf(" %c | %c | %c ", board[1][0], board[1][1], board[1][2]);
    printf("\n---|---|---\n");
    printf(" %c | %c | %c ", board[2][0], board[2][1], board[2][2]);
    printf("\n");

}

//  Body in charge of spaces in the board
int checkFreeSpaces() {

    int freeSpaces = 9;

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            if(board[i][j] != ' ') {
                freeSpaces--;
            }
        }
    }
    return freeSpaces;
}

void playerMove() {
    int x;
    int y;

    do {
        printf("Enter row #(1-3): ");
    scanf("%d", &x);
    x--;

    printf("Enter row #(1-3): ");
    scanf("%d", &y);
    y--;

    if(board[x][y] != ' ') {
        printf("Invalid move!\n");

    } else {
        board[x][y] = PLAYER;
        break;

    }
     
    } while(board[x][y] != ' ');

}

// Body for the computer to make its' moves
void computerMove() {
    // creates a seed that is based on the current time
    srand(time(0));
    int x;
    int y;
}

// Body for checking the winner
char checkWinner() {
    // Check rows
    for(int i = 0; i < 3; i++) {
        if(board[0][i] == board[1][i] && board[0][i] == board[2][i]) {
            return board[0][i];
        }

    }
    // Check Columns
    for(int i = 0; i < 3; i++) {
        if(board[0][i] == board[1][i] && board[0][i] == board[2][i]) {
            return board[0][i];
        }
    }
}

// Prints the winner of the game
void printWinner(char winner) {

}