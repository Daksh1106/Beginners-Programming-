/*Write a program having a variable 'i'. Print the address of i. Pass this variable to a function and print its address. Are these addresses same? Why?*/
#include <stdio.h>
void printAddress(int x)
{
    printf("Address of variable inside function: %p\n", (void*)&x);
}

int main()
{
    int i = 10;
    printf("Address of variable in main: %p\n", (void*)&i);
    printAddress(i);
    return 0;
}

/*The addresses should be different because the function gets a copy of the variable. If they are the same, it's due to compiler optimization reusing the same memory location.*/