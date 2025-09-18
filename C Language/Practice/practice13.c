#include <stdio.h>
int main()
{
    int a=1, sum=0;

    do
    {
        sum += a;
        a++;
    } while (a<=10);
    printf("Sum of first 10 natural numbers: %d\n", sum);

    return 0;
}