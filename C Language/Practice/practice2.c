// Simple Interest calculator
#include <stdio.h>

int main()
{
    printf("Lets calculate Simple Interest!!!\n");
    printf("Simple Interest = (P x R x T)/100\n");
    printf("P = Principle amount\n");
    printf("R = Annual rate of interest(in percentage)\n");
    printf("T = Time period(in years)\n");

    int p, r, t;

    printf("Enter the amount you have invested:\n");
    scanf("%d", &p);
    printf("Enter the rate of interest:\n");
    scanf("%d", &r);
    printf("Enter the number of years:\n");
    scanf("%d", &t);
    printf("The simple interest for the given data is:%d", (p * r * t) / 100);
    return 0;
}