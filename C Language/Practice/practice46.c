/* Take name and salary of two employees as input from the user and write them to a text file in the following format->
name1, 3300
name2, 7700
*/

#include <stdio.h>
#include <string.h>
int main()
{
    char name1[50], name2[50];
    int salary1, salary2;
    FILE *fp;

    // Get input from user
    printf("Enter name of first employee: ");
    scanf("%s", name1);
    printf("Enter salary of first employee: ");
    scanf("%d", &salary1);

    printf("Enter name of second employee: ");
    scanf("%s", name2);
    printf("Enter salary of second employee: ");
    scanf("%d", &salary2);

    // Open file for writing
    fp = fopen("employee.txt", "w");
    if (!fp) {
        printf("File error!\n");
        return 1;
    }

    // Write to file in required format
    fprintf(fp, "%s, %d\n", name1, salary1);
    fprintf(fp, "%s, %d\n", name2, salary2);
    fclose(fp);

    printf("Employee data written to employee.txt\n");
    return 0;
}