// Income tax
#include <stdio.h>
int main()
{
    int income;
    float tax;
    printf("Calculate your income tax here.\n");

    printf("Enter your income here: \n");
    scanf("%d", &income);
    
    if (income < 250000)
    {
        printf("Your are not required to pay any tax.\n");
    }
    else if (income <= 500000)
    {
        tax = (income - 250000) * 0.05;
        printf("You will be required to pay:%.2f\n", tax);
    }
    else if (income <= 1000000)
    {
        tax = (250000 * 0.05) + (income - 500000) * 0.20;
        printf("You will be required to pay:%.2f\n", tax);
    }
    printf("Please pay the tax before the due date.\nThank you!!");
    return 0;
}
