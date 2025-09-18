#include <stdio.h>

struct Driver
{
    char name[50];
    int dlNo;
    char route[47];
    int kms;
};


int main()
{
    struct Driver d1, d2, d3;
    printf("Enter the details of the drivers\n");

    printf("\n");

    printf("Enter the detail of first driver:\n");
    scanf("%s", &d1.name);
    printf("Enter the driving license number:\n");
    scanf("%d", &d1.dlNo);
    printf("Enter the route:\n");
    scanf(" %s", &d1.route);
    printf("Enter the distance in kms:\n");
    scanf("%d", &d1.kms);

    printf("\n");

    printf("Enter the detail of second driver:\n"); scanf("%s", &d2.name);
    printf("Enter the driving license number:\n");
    scanf("%d", &d2.dlNo);
    printf("Enter the route:\n");
    scanf(" %s", &d2.route);
    printf("Enter the distance in kms:\n");
    scanf("%d", &d2.kms);

    printf("\n");
    printf("Enter the detail of third driver:\n");
    scanf("%s", &d3.name);
    printf("Enter the driving license number:\n");
    scanf("%d", &d3.dlNo);
    printf("Enter the route:\n");
    scanf(" %s", &d3.route);
    printf("Enter the distance in kms:\n");
    scanf("%d", &d3.kms);

    printf("\n");

    printf("**********Printing information of these drivers:**********\n");

    printf("\n");

    printf("For Driver No 1:\nName is: %s\n", d1.name);
    printf("DL number is: %d\n", d1.dlNo);
    printf("Route is: %s\n", d1.name);
    printf("Kms is: %d\n", d1.kms);

    printf("\n");

    printf("For Driver No 2:\nName is: %s", d2.name);
    printf("DL number is: %d", d2.dlNo);
    printf("Route is: %s", d2.name);
    printf("Kms is: %d\n", d2.kms);

    printf("\n");

    printf("For Driver No 3:\nName is: %s", d3.name);
    printf("DL number is: %s", d3.dlNo);
    printf("Route is: %s", d3.name);
    printf("Kms is: %d\n", d3.kms);
}