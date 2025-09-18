//  Write a program containing functions which count the number of positive integers in an array.
#include <stdio.h>

int countPositive(int arr[], int size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > 0)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int arr[] = {1, -2, 3, 0, 5, -6, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    int result = countPositive(arr, size);
    printf("Number of positive integers: %d\n", result);
    return 0;
}