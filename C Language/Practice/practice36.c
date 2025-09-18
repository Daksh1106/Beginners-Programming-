// Write a program to check whether a given character is present in a string or not.
#include <stdio.h>

int main()
{
    char str[100], ch;
    int found = 0, i = 0;
    printf("Enter a string (no spaces): ");
    scanf("%s", str);
    printf("Enter the character to search: ");
    scanf(" %c", &ch);
    while (str[i] != '\0')
    {
        if (str[i] == ch)
        {
            found = 1;
            break;
        }
        i++;
    }
    if (found)
        printf("The character '%c' is present in the string.\n", ch);
    else
        printf("The character '%c' is NOT present in the string.\n", ch);
    return 0;
}
