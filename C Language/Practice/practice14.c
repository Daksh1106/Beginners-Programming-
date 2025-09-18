#include <stdio.h>

int main()
{
    int num = 8, sum = 0, i;
    printf("Multiplication table for %d is as follows:\n", num);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    do
    {
        sum += num * i;
        i++;
    } while (i <= 10);

    printf("Sum of the results:%d\n", sum);

    return 0;
}