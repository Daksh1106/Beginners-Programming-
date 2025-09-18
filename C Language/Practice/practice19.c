/*Write a program to print the address of a variable. Use this address to get the value of this variable. */
 #include <stdio.h>
 int main()
{
    int x = 42;
    int *ptr;
    ptr = &x;
    printf("Address of x: %p\n", (void*)&x);
    printf("Value of x using pointer: %d\n", *ptr);
    return 0;
}