// Write a program to determine whether a character entered by the user is lower case or not.
#include <stdio.h>
int main(int argc, char const *argv[])
{
    char a;
    printf("Enter the letter here:");
    scanf(" %c", &a);
    if (a >= 'a' && a <= 'z')
    {
        printf("The character is lowercase.\n");
    }
    else
    {
        printf("The character is upper case.\n");
    }
    return 0;
}
