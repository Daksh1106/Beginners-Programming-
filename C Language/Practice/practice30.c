// Write a program to take string as an input from the user using %c and %s, Confirm that the strings are equal.
#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100], str2[100];
    printf("Enter a string using %%s: ");
    scanf("%s", str1);
    printf("Enter the same string using %%c (end with Enter): ");
    scanf("%s", str2);
    if (strcmp(str1, str2) == 0)
        printf("The strings are equal.\n");
    else
        printf("The strings are NOT equal.\n");
    return 0;
}