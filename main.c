/* Tic Tac Toe written in C */
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

char board[3][3]; //Makes a 3*3 board
const char PLAYER = 'X';
const char COMPUTER = 'Y';

/* Variables List */
void resetBoard();
void printBoard();
int checkFreeSpaces();
void computerMove();
void checkWinner();
void printWinner(char);

/* Main Function */
int main() {

resetBoard();
printBoard();

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
    printf("\n---|---|---\n");

}

//  Body in charge of spaces in the board
int checkFreeSpaces() {

}

// Body for the computer to make its' moves
void computerMove() {

}

// Body for checking the winner
void checkWinner() {

}

// Prints the winner of the game
void printWinner(char winner) {

}