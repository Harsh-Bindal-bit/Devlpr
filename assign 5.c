#include <stdio.h>
#include <string.h>

int main() {
    char word[] = "COMPUTER";  // Word to guess
    char display[] = "________";  // Hidden word display
    int chances = 3;
    char guess;
    int correct=0;

    printf("Welcome to Hangman Game!\n");
    printf("You have %d chances to guess the word.\n\n", chances);

    while (chances > 0) {
        printf("Word: %s\n", display);
        printf("Enter a letter: ");
        scanf(" %c", &guess);

        for (int i = 0; i < strlen(word); i++) {
            if (word[i] == guess) {
                display[i] = word[i];
                correct = 1;
            }
        }

        if (!correct) {
            chances--;
            printf("Wrong guess! Chances left: %d\n\n", chances);
        } else {
            printf("Good guess!\n\n");
        }

        if (strcmp(word, display) == 0) //strcmp is used to compare 2 strings and returns value -1,0,+1
        {
            printf("Congratulations! You saved the man! The word was '%s'.\n", word);
            return 0;
        }
    }

    printf("Game Over! The man is hanged. The word was '%s'.\n", word);
    return 0;
}
