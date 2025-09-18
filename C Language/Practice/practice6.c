// Leap year
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int year;
    printf("Enter the year:\n");
    scanf("%d", &year);
    int isLeap = (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);
    if (isLeap)
    {
        printf("The year is a leap year!!!");
    }
    else
    {
        printf("The year is not a leap year.");
    }
    return 0;
}
