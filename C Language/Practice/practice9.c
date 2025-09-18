#include <stdio.h>

int main()
{
    int num;
    printf("Enter the number for which you want to see the multiplication table: ");
    scanf("%d", &num);
    printf("Multiplication table for %d is as follows:\n", num);
    for (int i = 10; i >= 1; i--)
    {
        printf("%d x %d = %d\n", num, i, num * i);
    }
    return 0;
}