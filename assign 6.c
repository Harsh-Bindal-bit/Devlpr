#include <stdio.h>
#include <stdlib.h>

// Function prototypes
void displayBoard(char board[3][3]);
int checkWinner(char board[3][3]);
void playerMove(char board[3][3], char symbol);

int main() {
    char board[3][3] = { {'1', '2', '3'},
                         {'4', '5', '6'},
                         {'7', '8', '9'} };
    int turn = 0; // 0 for computer, 1 for player
    int moves = 0, winner = 0;

    printf("Welcome to Tic Tac Toe!\n");
    printf("Player symbol: X\nComputer symbol: O\n\n");

    while (moves < 9 && winner == 0) {
        displayBoard(board);

        if (turn == 0) {
            // Computer's move (always starts with O)
            printf("Computer's turn (O):\n");
            playerMove(board, 'O');
        } else {
            // Player's move
            printf("Player's turn (X):\n");
            playerMove(board, 'X');
        }

        winner = checkWinner(board);
        turn = 1 - turn; // Alternate turns
        moves++;
    }

    displayBoard(board);

    if (winner == 1) {
        printf("Player wins! Congratulations!\n");
    } else if (winner == -1) {
        printf("Computer wins! Better luck next time.\n");
    } else {
        printf("It's a draw!\n");
    }

    return 0;
}

// Function to display the Tic Tac Toe board
void displayBoard(char board[3][3]) {
    printf("\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf(" %c ", board[i][j]);
            if (j < 2) printf("|");
        }
        printf("\n");
        if (i < 2) printf("---|---|---\n");
    }
    printf("\n");
}

// Function to check for a winner
int checkWinner(char board[3][3]) {
    // Check rows and columns
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2]) {
            return board[i][0] == 'X' ? 1 : -1;
        }
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i]) {
            return board[0][i] == 'X' ? 1 : -1;
        }
    }

    // Check diagonals
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2]) {
        return board[0][0] == 'X' ? 1 : -1;
    }
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0]) {
        return board[0][2] == 'X' ? 1 : -1;
    }

    return 0; // No winner yet
}

// Function to handle a move
void playerMove(char board[3][3], char symbol) {
    int choice;
    char valid = 0;

    while (!valid) {
        printf("Enter the position (1-9): ");
        scanf("%d", &choice);

        if (choice < 1 || choice > 9) {
            printf("Invalid position. Try again.\n");
            continue;
        }

        int row = (choice - 1) / 3;
        int col = (choice - 1) % 3;

        if (board[row][col] == 'X' || board[row][col] == 'O') {
            printf("Position already taken. Try again.\n");
        } else {
            board[row][col] = symbol;
            valid = 1;
        }
    }
}
