// Write a structure to store dates. Write a function to compare dates
#include <stdio.h>
#include <string.h>
typedef struct calender
{
    int date;
    int month;
    int year;
} calender;

int compareDates(calender date1, calender date2)
{
    // 0: equal, -1: date1 < date2, 1: date1 > date2
    if (date1.year < date2.year)
        return -1;
    if (date1.year > date2.year)
        return 1;
    if (date1.month < date2.month)
        return -1;
    if (date1.month > date2.month)
        return 1;
    if (date1.date < date2.date)
        return -1;
    if (date1.date > date2.date)
        return 1;
    // All equal
    return 0;
}

int main()
{
    calender date1, date2;
    printf("Enter the first date (dd mm yyyy):");
    scanf("%d %d %d", &date1.date, &date1.month, &date1.year);
    printf("Enter the second date (dd mm yyyy):");
    scanf("%d %d %d", &date2.date, &date2.month, &date2.year);
    
    int cmp = compareDates(date1, date2);

    if (cmp == 0)
        printf("Both dates are equal.\n");
    else if (cmp < 0)
        printf("The first date is earlier than the second date.\n");
    else
        printf("The first date is later than the second date.\n");
    return 0;
}
