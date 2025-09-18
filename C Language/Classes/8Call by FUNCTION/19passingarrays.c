#include <stdio.h>

int func1(int array[])
{
    for (int i = 0; i < 4; i++)
    {
        printf("The value at %d is %d\n", i, array[i]);
    }
    array[0] = 402; // Very important line. If you change any value here it will be reflected in main().
    return 0;
}
void func2(int *ptr)
{
    // for (int i = 0; i < 4; i++)
    // {
    //     printf("The value at %d is %d\n", i, ptr[i]);
    // }
    for (int i = 0; i < 4; i++)
    {
        printf("The value at %d is %d\n", i, *(ptr + i));
    }
    *(ptr + 2) = 7169;
}
    
void func3(int arr[2][2])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("The value at %d,%d is %d\n", i, j, arr[i][j]);
        }
    }
}

int main()
{
    int arr[][2] = {{2, 13}, {9, 3}};
    // int arr[] = {11, 12, 69, 8};
    //  printf("The value at index 0 is: %d\n", arr[0]);
    //  func1(arr);
    //  printf("The value at index 1 is: %d\n", arr[0]);
    // func2(arr);
    // func2(arr);
    func3(arr);
    
    return 0;
}