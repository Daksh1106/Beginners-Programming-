// Create an array of size 3x10 containing multiplication tables of the numbers 2,7 and 9 respectively.

#include <stdio.h>
int main()
{
    int tables[3][10];
    int numbers[3] = {2, 7, 9};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            tables[i][j] = numbers[i] * (j + 1);
        }
    }

    // Print the tables
    for (int i = 0; i < 3; i++)
    {
        printf("Multiplication table of %d:\n", numbers[i]);
        for (int j = 0; j < 10; j++)
        {
            printf("%d x %d = %d\n", numbers[i], j + 1, tables[i][j]);
        }
        printf("\n");
    }
    return 0;
}