// Write a program to find the greatest of the four numbers entered by the user.
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num1, num2, num3, num4, greatest, smallest;
    
    printf("Enter the numbers: ");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);
    
    greatest = num1;
    if (num2 > greatest)
    {
        greatest = num2;
    }
    if (num3 > greatest)
    {
        greatest = num3;
    }
    if (num4 > greatest)
    {
        greatest = num4;
    }
    printf("The greatest number of the four is:%d\n", greatest);
    
    smallest = num1;
    if (num2 < smallest)
    {
        smallest = num2;
    }
    if (num3 < smallest)
    {
        smallest = num3;
    }
    if (num4 < smallest)
    {
        smallest = num4;
    }
    printf("The smallest number of the four is: %d\n", smallest);
    return 0;
}
