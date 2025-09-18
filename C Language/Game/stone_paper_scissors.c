#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generateRandomNumber(int n)
{
    srand(time(NULL)); // srand takes seed as an input and is defined inside stdlib.h
    return rand() % n; // rand() generates a random number, and we take modulo
}

int greater(char char1, char char2)
{ // For rock paper scissors - Return 1 if c1>c2 and 0 otherwise. If c1==c2 it will return -1
    if (char1 == char2)
    {
        return -1;
    }
    else if ((char1 == 'R') && (char2 == 'S'))
    {
        return 1;
    }
    else if ((char2 == 'R') && (char1 == 'S'))
    {
        return 0;
    }

    else if ((char1 == 'P') && (char2 == 'R'))
    {
        return 1;
    }
    else if ((char2 == 'P') && (char1 == 'S'))
    {
        return 0;
    }

    else if ((char1 == 'S') && (char2 == 'P'))
    {
        return 1;
    }
    else if ((char2 == 'S') && (char1 == 'P'))
    {
        return 0;
    }
}

int main()
{
    int playerScore = 0, compScore = 0, temp;
    char playerChar, compChar;
    char dict[] = {'R', 'P', 'S'}; // R for rock, P for paper, S for scissors
    printf("Welcome to the Rock, Paper, Scissors.\n");
    for (int i = 0; i < 3; i++)
    {
        // Player's input
        printf("Your turn:\n");
        printf("Choose 1 for Rock, 2 for Paper, and 3 for Scissors.\n");
        scanf("%d", &temp);
        getchar(); 
        playerChar = dict[temp - 1];
        printf("You chose: %c\n\n", playerChar);

        // Computer's input
        printf("Computer's turn:\n");
        printf("Choose 1 for Rock, 2 for Paper, and 3 for Scissors.\n");
        temp = generateRandomNumber(3) + 1;
        compChar = dict[temp - 1];
        printf("Computer chose: %c\n", compChar);

        // Compare the scores
        if (greater(playerChar, compChar) == 1)
        {
            compScore += 1;
            printf("Computer Got it!\n");
        }
        else if (greater(playerChar, compChar) == -1)
        {
            compScore += 1;
            playerScore += 1;
            printf("It's a tie!\n");
        }
        else
        {
            playerScore += 1;
            printf("You Got it!\n");
        }
        printf("You:%d\nComputer: %d\n", playerScore, compScore);
    }
    
    if (playerScore > compScore)
    {
        printf("Player wins the game!\n");
    }
    else if (playerScore < compScore)
    {
        printf("Computer wins the game!\n");
    }
    return 0;
}