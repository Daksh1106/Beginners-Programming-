// Create an array of 10 numbers. Verify using pointer arithmetic that (ptr+2) points to the third element where ptr is a pointer pointing to the first element of the array.
#include <stdio.h>
int main()
{
    int num[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *ptr = num; // ptr points to the first element

    printf("Value at ptr: %d\n", *ptr);
    printf("Value at ptr+2: %d\n", *(ptr + 2));
    printf("Value at num[2]: %d\n", num[2]);

    if ((ptr + 2) == &num[2])
    {
        printf("(ptr+2) points to the third element of the array.\n");
    }
    else
    {
        printf("(ptr+2) does NOT point to the third element.\n");
    }

    return 0;
}