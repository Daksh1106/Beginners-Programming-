#include <stdio.h>
int main()
{
    int arr[] = {71, 69, 11, 402};
    printf("Value of first element: %d\n", &arr[0]);
    printf("Value of first element: %d\n", arr);
    printf("Value of first element: %d\n", *(&arr[0]));
    printf("Value of first element: %d\n", arr[0]);
    printf("Value of first element: %d\n\n\n", *arr);
    
    // arr++; // This line would cause an error because array names are not modifiable values
    printf("Value of second element: %d\n", &arr[1]);
    printf("Value of second element: %d\n", arr + 1);
    printf("Value of second element: %d\n", *(&arr[1]));
    printf("Value of second element: %d\n\n\n", arr[1]);
    
    
    printf("Value of third element: %d\n", &arr[2]);
    printf("Value of third element: %d\n", arr + 2);
    printf("Value of third element: %d\n", *(&arr[2]));
    printf("Value of third element: %d\n\n\n", arr[2]);
    
    
    printf("Value of fourth element: %d\n", &arr[3]);
    printf("Value of fourth element: %d\n", arr + 3);
    printf("Value of fourth element: %d\n", *(&arr[3]));
    printf("Value of fourth element: %d\n\n\n", arr[3]);
    return 0;
}