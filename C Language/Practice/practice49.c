//  Create an array dynamically capable of storing 5 integers. Now use realloc so that it can now store 10 integers.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Allocate initial array of 5 integers
    int *arr = (int *)malloc(5 * sizeof(int));

    if (arr == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }
    // Initialize the array (optional)
    for (int i = 0; i < 5; i++)
    {
        arr[i] = i + 1;
    }
    // Print initial array
    printf("Initial array: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d \n", arr[i]);
    }
    // Reallocate to store 10 integers
    arr = (int *)realloc(arr, 10 * sizeof(int));
    if (arr == NULL)
    {
        printf("Memory reallocation failed\n");
        return 1;
    }
    // Initialize the newly allocated part of the array
    for (int i = 5; i < 10; i++)
    {
        arr[i] = i + 1;
    }
    // Print reallocated array
    printf("Reallocated array: ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d \n", arr[i]);
    }
    // Free the dynamically allocated memory
    free(arr);
    return 0;
}
