// Write a program to sum first ten natural numbers using while loop.

#include <stdio.h>
int main()
{
    int sum = 0, a = 1;
    while (a < 11)
    {
        sum = sum + a;
        a = a + 1;
    }
    printf("Sum of the first ten natural numbers= %d\n", sum);
    return 0;
}