#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num, index = 0;
    printf("Enter a number:");
    scanf("%d", &num);
    
    do
    {
        printf("%d\n", index + 6);
        index++;
    } while (index < num);

    return 0;
}
