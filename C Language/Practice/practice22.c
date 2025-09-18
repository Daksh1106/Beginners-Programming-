/*Write a program using a function which calculates the sum and average of two numbers. Use pointers and print the values of sum and average in main().*/
#include <stdio.h>

int sumM(int x, int y)
{
    return x + y;
}

int avgG(int sum)
{
    return sum / 2;
}

int main()
{
    int x, y, a, b;
    printf("Enter value of x:");
    scanf("%d", &x);
    printf("Enter value of y:");
    scanf("%d", &y);
    a = sumM(x, y);
    b = avgG(a);
    printf("Sum of x and y is: %d\n", a);
    printf("Average of x and y is: %d\n", b);
    return 0;
}