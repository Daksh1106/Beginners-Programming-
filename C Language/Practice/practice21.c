/*Write a program to change the value of a variable to ten times of its current value. Write a function and pass the value by reference.*/

#include <stdio.h>
int tenTimes(int x) {
    return x * 10;
}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    num = tenTimes(num);
    printf("Value after multiplying by 10: %d\n", num);
    return 0;
}