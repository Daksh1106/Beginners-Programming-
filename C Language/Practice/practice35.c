// Write a program to count the occurence of a given character in a string.

#include <stdio.h>
#include <string.h>
int main()
{
    char str[100], ch;
    int count = 0, i = 0;
    printf("Enter a string (no spaces): ");
    scanf("%s", str);
    printf("Enter the character to count: ");
    scanf(" %c", &ch);
    while (str[i] != '\0')
    {
        if (str[i] == ch)
            count++;
        i++;
    }
    printf("The character '%c' occurs %d times.\n", ch, count);
    return 0;
}