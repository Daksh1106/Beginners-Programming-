// Write a program in C language where the program is capable of playing the 'Snake, water, gun' game with me. The program should be able to print the result after i choose snake/water/gun.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to generate the computer's choice randomly
char getComputerChoice()
{
    int num = rand() % 3; // Random number between 0 and 2

    if (num == 0)
        return 's'; // Snake
    else if (num == 1)
        return 'w'; // Water
    else
        return 'g'; // Gun
}

// Function to determine the winner
// Returns: 0 = draw, 1 = you win, -1 = computer wins
int determineWinner(char you, char comp)
{
    // If both choices are same → draw
    if (you == comp)
        return 0;

    // Expanded logic for when the user wins
    if (you == 's' && comp == 'w') // Snake drinks water
    {
        return 1;
    }
    else if (you == 'w' && comp == 'g') // Water douses gun
    {
        return 1;
    }
    else if (you == 'g' && comp == 's') // Gun kills snake
    {
        return 1;
    }

    // If none of the above, then the computer wins
    return -1;
}

// Function to print the full name of the choice
void printChoice(char choice)
{
    if (choice == 's')
        printf("Snake");
    else if (choice == 'w')
        printf("Water");
    else if (choice == 'g')
        printf("Gun");
    else
        printf("Invalid Choice");
}

int main()
{
    char you, comp;
    int result;
    srand(time(0)); // Seed the random number generator with current time
    // Display welcome message and instructions
    printf("====== Welcome to the Snake, Water, Gun Game ======\n");
    printf("Instructions:\n");
    printf("Type 's' for Snake\n");
    printf("Type 'w' for Water\n");
    printf("Type 'g' for Gun\n");
    printf("--------------------------------------------------\n");
    printf("Enter your choice (s/w/g): "); // Taking input from user
    scanf(" %c", &you);                    // Space before %c helps avoid newline issues

    comp = getComputerChoice();          // Get's computer's random choice
    result = determineWinner(you, comp); // Determine game result

    // Print user and computer choices
    printf("\nYou chose: ");
    printChoice(you);
    printf("\nComputer chose: ");
    printChoice(comp);
    printf("\n");

    // Print result with explanation
    if (result == 0)
    {
        printf("Result: It's a draw! You both chose the same.\n");
    }
    else if (result == 1)
    {
        printf("Result:You win! ");

        // Explain why the user won
        if (you == 's' && comp == 'w')
            printf("Snake drinks Water.\n");
        else if (you == 'w' && comp == 'g')
            printf("Water douses Gun.\n");
        else if (you == 'g' && comp == 's')
            printf("Gun kills Snake.\n");
    }
    else
    {
        printf("Result: You lose! ");

        // Explain why the computer won
        if (comp == 's' && you == 'w')
            printf("Snake drinks Water.\n");
        else if (comp == 'w' && you == 'g')
            printf("Water douses Gun.\n");
        else if (comp == 'g' && you == 's')
            printf("Gun kills Snake.\n");
    }
    return 0;
}