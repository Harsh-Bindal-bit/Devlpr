#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int userChoice, computerChoice;
    int randomNumber;
    char *choices[] = {"Rock", "Paper", "Scissors"};

    //To make the sequence of random numbers less predictable seed the random number generator using srand(). A common seed is the current time, provided by time(0) from <time.h>:
    srand(time(0));

    printf("Welcome to Rock, Paper, Scissors!\n");
    printf("Choose your option:\n");
    printf("1. Rock\n2. Paper\n3. Scissors\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &userChoice);

    if (userChoice < 1 || userChoice > 3) {
        printf("Invalid choice! Please run the program again and select a valid option.\n");
        return 0;
    }

    //Random number to decide computer's choice
    //rand() is used Random number and % is used to decide the range
    randomNumber = rand() % 101; // Random number between 0-100

    if (randomNumber < 33) {
        computerChoice = 1; // Rock
    } else if (randomNumber < 66) {
        computerChoice = 2; // Paper
    } else {
        computerChoice = 3; // Scissors
    }

    printf("You chose: %s\n", choices[userChoice - 1]);
    printf("Computer chose: %s\n", choices[computerChoice - 1]);

    if (userChoice == computerChoice) {
        printf("It's a tie!\n");
    }
    else if ((userChoice == 1 && computerChoice == 3) || 
               (userChoice == 2 && computerChoice == 1) || 
               (userChoice == 3 && computerChoice == 2)) {
        printf("You win!\n");
    }
    else {
        printf("Computer wins!\n");
    }

    return 0;
}
