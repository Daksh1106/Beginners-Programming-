// Create a structure representing a bank account of a customer. What fields did you use and why?

#include <stdio.h>
#include <string.h>

struct BankAccount
{
    char holder_name[50];
    long long int account_num;
    char branch_num[20];
    int money_amount;
};

void print(struct BankAccount acc)
{
    printf("\nAccount details:\n");
    printf("Name: %s\n", acc.holder_name);
    printf("Account number: %lld\n", acc.account_num);
    printf("Branch number: %s\n", acc.branch_num);
    printf("Amount of money available: %d\n", acc.money_amount);
}

// Removed old print() function as it is not needed anymore

int main()
{
    struct BankAccount harry, ravi, subham;

    // Set details for Harry
    strcpy(harry.holder_name, "Harry");
    harry.account_num = 7492856310987LL;
    strcpy(harry.branch_num, "SBIN0001537");
    harry.money_amount = 5717271;

    // Set details for Ravi
    strcpy(ravi.holder_name, "Ravi");
    ravi.account_num = 2697142216661LL;
    strcpy(ravi.branch_num, "HDFC000065");
    ravi.money_amount = 3256998;

    // Set details for Subham
    strcpy(subham.holder_name, "Subham");
    subham.account_num = 3491943778826LL;
    strcpy(subham.branch_num, "ICICI0006561");
    subham.money_amount = 70256672;

    char input_name[50];
    printf("Enter the account holder's name: ");
    scanf("%s", input_name);

    if (strcmp(input_name, harry.holder_name) == 0)
    {
        print(harry);
    }
    else if (strcmp(input_name, ravi.holder_name) == 0)
    {
        print(ravi);
    }
    else if (strcmp(input_name, subham.holder_name) == 0)
    {
        print(subham);
    }
    else
    {
        printf("No account found for '%s'.\n", input_name);
    }
    return 0;
}
