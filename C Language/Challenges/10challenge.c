#include <stdio.h>
#include <stdlib.h>
int main()
{
    int m, n, sum = 0;
    int a[3][4], b[4][2], result[3][2];
    printf("Enter the first matrix\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the second matrix\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            // Calculate the result
            for (int k = 0; k < 4; k++)
            {
                sum += a[i][k] * b[k][j];
            }
            result[i][j] = sum;
            sum = 0;
        }
    }

    // Print the resultant matrix
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            // Print the result
            printf("%d \t", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
/*enter the values in this way->

Enter the first matrix
a b c d
e f g h
i j k l

Enter the second matrix
m n
o p 
q r
s t

->now we will get the result*/