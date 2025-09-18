#include <stdio.h>

int fib_recusive(int n)
{
    if (n == 1 || n == 2)
    {
        return n - 1;
    }
    else
    {
        return fib_recusive(n - 1) + fib_recusive(n - 2);
    }
}

int fib_iterative(int n)
{
    int a = 0, b = 1;
    for (int i = 0; i < n - 1; i++)
    {
        b = a + b;
        a = b - a;
    }
    return a;
}

int main()
{
    int number;
    printf("Enter the index to find the Fibonacci number:\n");
    scanf("%d", &number);
    printf("The value of Fibonacchi number at position number %d using recusive approach: %d\n", number, fib_recusive(number));
    printf("The value of Fibonacchi number at position number %d using iterative approach: %d\n", number, fib_iterative(number));
    return 0;
}