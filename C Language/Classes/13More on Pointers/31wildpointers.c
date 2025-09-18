#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a = 10;
    int *ptr; //This is a wild pointer
    *ptr=34; //This is not a good thing to do
    ptr=&a; // ptr is no longer a wild pointer
    printf("Value of a: %d\n", *ptr); 
    return 0;
}