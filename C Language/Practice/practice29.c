// Create a 3-D array and print the address of its elements in increasing order.

#include <stdio.h>
int main()
{
    int num[2][3][4];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 4; k++)
            {
                printf("Address of num[%d][%d][%d] = %p\n", i, j, k, (void *)&num[i][j][k]);
            }
        }
    }
    return 0;
}