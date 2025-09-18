#include <stdio.h>

int b = 34; // Global variable

int ret()
{
    return 43; // Accessing global variable
}

int func1(int b1)
{
    static int myvar = 10; // Static variable
    printf("The value of myvar inside is: %d\n", myvar);
    myvar++;
    // printf("The value of b inside func1 is: %d\n", b);
    // printf("The value of b inside func1 is: %d\n", &b);
    return b1 + myvar;
}

int main()
{
    int b = 402; // Local variable
    // printf("The value of b inside main is: %d\n", &b);
    int val = func1(b);
    val = func1(b);
    val = func1(b);
    val = func1(b);
    val = func1(b);
    val = func1(b);
    int *ptr = &val;
    // printf("The value of func1 is %d\n", val);
    //  printf(" %d", loc);
    return 0;
}