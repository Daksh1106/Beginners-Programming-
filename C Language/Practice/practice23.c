// Write a program to print the value of variable 'i' by using "pointer to pointer" type of variable
#include <stdio.h>

int main()
{
    int i = 42;
    int *ptr = &i;
    int **pptr = &ptr;

    printf("Value of i using pointer to pointer: %d\n", **pptr);
    return 0;
}
