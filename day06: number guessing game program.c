/*Write a C program that:
Generates a random number between 1 and 100.
Asks the user to guess the number.
After each guess, the program should tell the user:
“Too high! Try again.”
“Too low! Try again.”
or “Correct! You guessed it in X attempts.”
Keep track of how many guesses the player takes.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int randN = (rand() % 100) + 1;
    int guess, numOfGuess = 0;

    printf("Welcome to the Number Guessing Game !\n");
    printf("I have selected a number between 1 to 100\n");
    printf("Try to guess it !\n");
    printf("\n");

    do
    {
        printf("Enter your guess:");
        scanf("%d", &guess);
        if (guess > randN)
        {
            printf("Too high! Try again\n");
        }
        else if (guess < randN)
        {
            printf("Too low ! Try again.\n");
        }
        numOfGuess++;

    } while (randN != guess);
    printf("Correct ! YOu guessed it in %d attempts.\n", numOfGuess);

    return 0;
}
