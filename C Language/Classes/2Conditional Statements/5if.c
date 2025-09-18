#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("You have entered %d as age.\n", age);
    if (age >= 18)
    {
        printf("You are eligible to drive.\n");
    }
    else if (age > 11)
    {
        printf("You are not under the legal age to drive.\n");
    }
    else
    {
        printf("You are not eligible to drive.\n");
    }

    return 0;
}

