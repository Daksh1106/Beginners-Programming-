// Write a program to check whether a given number is prime or not using loops.

#include <stdio.h>
int main()
{
    int num, isPrime = 1, i = 2;
    
    printf("Enter the number here:\n");
    scanf("%d", &num);
    
    while (num > i)
    {
        if (num % i == 0)
        {
            isPrime = 0;
            break;
        }
        i++;
    }

    if (isPrime && num > 1)
    {
        printf("The number enetered is prime number!!!");
    }
    else
    {
        printf("The number entered is not prime number.");
    }
    return 0;
}