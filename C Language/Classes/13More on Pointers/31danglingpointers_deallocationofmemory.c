#include <stdio.h>
#include <stdlib.h>
int main()
{
    char *str = "Hello World";
    int a = 10;
    int *ptr = (int *)malloc(sizeof(int));
    free(ptr); // ptr now becomes a dangling pointer
    ptr = NULL; // ptr no longer dangling pointer
    return 0;
}