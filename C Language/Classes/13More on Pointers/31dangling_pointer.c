#include <stdio.h>
#include <stdlib.h>

int *functionDanglingPointer()
{
    int a, b, sum;
    a = 34;
    b = 290;
    sum = a + b;
    return &sum; // Returning address of a local variable
}

int main()
{
    // case 1: De-allocation of memory block
    int *ptr = (int *)malloc(7 * sizeof(int));
    ptr[0] = 10;
    ptr[1] = 20;
    ptr[2] = 30;
    ptr[3] = 40;
    free(ptr); // ptr is now dangling pointer

    // case 2: Function returning address of local variable address
    int *dangPtr = functionDanglingPointer(); // ptr is now dangling
    int *danglingPtr3;
    // case 3: If a variable goes out of scope
    {
        int a = 10;
        danglingPtr3 = &a;
    }
    // Here variable `a` goes out of scope which means danglingPtr3 is a pointing to a location which is freed and hence danglingPtr3 is now a dangling pointer.
    return 0;
}