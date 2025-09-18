// Write a program to encrypt a string by adding 1 to the ASII value of its characters.
#include <stdio.h>

int main()
{
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Encrypt the string
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != '\n') // skip newline
            str[i] = str[i] + 1;
    }

    printf("Encrypted string: %s", str);
    return 0;
}