#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int num, secret;
    printf("~~~~~~    Welcome to the NUMBER GUESSING GAME!!!    ~~~~~~\n\n\n");

    // Seed the random number generator
    srand(time(NULL));
    secret = (rand() % 20) + 1;

    // Player guessing the number
    int attempts = 0;
    int max_attempts = 5;
    while (attempts < max_attempts)
    {
        printf("Enter your guess (Attempt %d of %d):\n", attempts + 1, max_attempts);
        scanf("%d", &num);
        attempts++;

        if (num == secret)
        {
            printf("Congratulations, the number you have guessed is correct!!! It's number %d\n\n\n", secret);
            printf("You guessed the number in %d attempt(s).\n\n", attempts);
            break;
        }
        else if (num < secret)
        {
            printf("Think of a number higher than this.\n");
        }
        else if (num > secret)
        {
            printf("Think of a number lower than this.\n");
        }

        if (attempts == max_attempts)
        {
            printf("Sorry, you've used all your attempts! The correct number was %d.\n", secret);
        }
    }
    return 0;
}


/*
Program 1: Number Guessing Game
We will write a programme that generates random number and asks the player to guess it. If the player's guess is higher than the actual number the programme displays "Lower Number Please" .Similarly if the users gives is too low the programme prints "Higher Number Please".
When the user guesses the correct number the program displays the number of cases the players used to arrive at the number.

Hint: Use loops
*/