// Write a program to dynamically create an array of size 6 capable of storing 6 integers.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr = malloc(6 * sizeof(int));
    if (!arr)
    {
        printf("Error!\n");
        return 1;
    }
    for (int i = 0; i < 6; i++)
        scanf("%d", &arr[i]);
    for (int i = 0; i < 6; i++)
        printf("%d ", arr[i]);
    free(arr);
    return 0;
}
