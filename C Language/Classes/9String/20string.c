#include <stdio.h>

void printStr(char str[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        printf("%c", str[i]);
        i++;
    }
    printf("\n");
}

int main()
{
    // char str[] = {'d', 'a', 'k', 's', 'h', '\0'};
    // char str[6] = "daksh";
    char str[34];
    fgets(str, sizeof(str), stdin);
    printf("Using custom function printStr\n");
    printStr(str);
    printf("Using printf %s\n", str);
    printf("Using puts: \n");
    puts(str);

    return 0;
}
