// Create an array of multiplication table of 7 upto 10. Use realloc to make it store 15 numbers (from 7x1 to 7x15).

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *table;
    int i;

    // Step 1: Allocate memory for 10 integers
    table = (int *)malloc(10 * sizeof(int));

    // Check if memory allocation was successful
    if (table == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }
    
    // Step 2: Fill in the multiplication table of 7 up to 10
    for (i = 0; i < 10; i++)
    {
        table[i] = 7 * (i + 1);
    }

    // Step 3: Reallocate memory to hold 15 integers
    table = (int *)realloc(table, 15 * sizeof(int));

    // Check if reallocation was successful
    if (table == NULL)
    {
        printf("Memory reallocation failed!\n");
        return 1;
    }

    // Step 4: Fill in the remaining values (7x11 to 7x15)
    for (i = 10; i < 15; i++)
    {
        table[i] = 7 * (i + 1);
    }

    // Step 5: Print the full multiplication table
    for (i = 0; i < 15; i++)
    {
        printf("7 x %d = %d\n", i + 1, table[i]);
    }

    // Free the allocated memory
    free(table);

    return 0;
}
