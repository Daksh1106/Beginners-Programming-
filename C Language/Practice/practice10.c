#include <stdio.h>
int main()
{
    int num, count = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    do
    {
        printf("You entered: %d\n", count + 6);
        count++;
    } while (count < 1); // Loop runs once

    // do
    // {
    //     printf("You entered: %d\n", count + 6);
    //     count++;
    // } while (count < 2); // Loop runs twice

    // do
    // {
    //     printf("You entered: %d\n", count + 6);
    //     count++;
    // } while (count < 3); // Loop runs thrice
    return 0;
}