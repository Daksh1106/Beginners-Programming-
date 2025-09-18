#include <stdio.h>
#include <string.h>

void parser(char *str)
{
    int in = 0; // variable to indicate if we are inside a tag
    int index = 0;
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == '<')
        {
            in = 1;
            continue;
        }
        else if (str[i] == '>')
        {
            in = 0;
            continue;
        }
        if (in == 0)
        {
            str[index] = str[i];
            index++;
        }
    }
    str[index] = '\0'; // Null-terminate the string

    // Remove trailing spaces from the beginning
    while (str[0] == ' ')
    {
        // Shift the string left to remove leading spaces
        for (int i = 0; i < strlen(str); i++)
        {
            str[i] = str[i + 1];
        }
    }
    // Remove trailing spaces from the end
    while (str[strlen(str) - 1] == ' ')
    {
        str[strlen(str) - 1] = '\0'; // Null-terminate the string to remove trailing spaces
    }
}

int main()
{
    char str[] = "<h1>      this is a heading      <h1>";
    parser(str);
    printf("The parsed string is ~~%s~~\n", str);
    return 0;
}