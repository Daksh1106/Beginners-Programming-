#include <stdio.h>
int *myvalue()
{
    int a = 10;
    return &a;
}

int main()
{
    int *ptr = myvalue();
    printf("%d", *ptr);
    return 0;
}

// This code will give an error or undefined behavior because the pointer `ptr` is pointing to a local variable `a` which goes out of scope after the function `myvalue()` returns. This results in a dangling pointer, as `ptr` is trying to access memory that is no longer valid.
