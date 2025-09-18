// Write a program containing a function which reverses the array passed to it.
#include <stdio.h>
void reverseArray(int arr[], int size)
{
    int temp;
    for (int i = 0; i < size / 2; i++) {
        temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
}

int main()
{
    int num[] = {1, 2, 3, 4, 5};
    int size = sizeof(num) / sizeof(num[0]);
    reverseArray(num, size);
    printf("Reversed array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", num[i]);
    }
    printf("\n");
    return 0;
}   