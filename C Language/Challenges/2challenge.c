#include <stdio.h>

int main()
{
    int marks;
    char subject;
    printf("Enter your total mark obtained: ");
    scanf("%d", &marks);
    if (marks == 100)
    {
        printf("You have passed in both Mathematics and Physics!!!\n");
        printf("You have been awarded 25 points!\n");
    }
    if (marks > 50)
    {
        printf("Enter the subject:\n");
        scanf(" %c", &subject);
        if (subject == 'A')
        {
            printf("You have passed with full marks in Mathematics and less than 50 in Physics\n");
            printf("You have been awarded 15 points!\n");
        }
        else if (subject == 'B')
        {
            printf("You have passed with full marks in Physics and less than 50 in Mathematics\n");
            printf("You have been awarded 15 points!\n");
        }
        else if (subject == 'C')
        {
            printf("You have not scored full marks in any of the subjects.\n");
            printf("You have been awarded only 12.5 points!\n");
        }
    }
    if (marks < 50)
    {
        printf("Enter subject you have passed in:\n");
        scanf(" %c", &subject);
        if (subject == 'M')
        {
            printf("You have passed in Mathematics!\n");
            printf("You have been awarded 10 points!\n");
        }
        else if (subject == 'P')
        {
            printf("You have passed in Physics!\n");
            printf("You have been awarded 10 points!\n");
        }
    }

    return 0;
}
