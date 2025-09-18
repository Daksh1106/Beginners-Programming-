#include <stdio.h>

int main()
{
    int marks[2][4] = {{10, 20, 30, 40}, {50, 60, 70, 80}};

    // for (int i = 0; i < 4; i++)
    // {
    //     printf("Enter the value of %d element of the array:\n", i);
    //     scanf("%d", &marks[i]);
    // }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            // printf("The value of %d, %d element of the array:%d\n", i, j, marks[i][j]);
            printf("%d ", marks[i][j]);
        }
        printf("\n");
    }

    // int marks[5];
    // marks[0]= 10;
    // marks[1]= 20;
    // marks[2]= 30;
    // marks[3]= 40;
    // marks[4]= 50;
    // printf("The marks are: %d\n", marks[0]);
    // printf("The marks are: %d\n", marks[1]);
    // printf("The marks are: %d\n", marks[2]);
    // printf("The marks are: %d\n", marks[3]);
    // printf("The marks are: %d\n", marks[4]);
    return 0;
}
