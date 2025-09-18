#include <stdio.h>
void changeValue(int *address)
{
    *address = 1106; // Dereference the pointer to change the value at the address
}
int main()
{
    int a=34, b=56;
    printf("The value of a now is :%d\n", a);
    changeValue(&a);
    printf("The value of a now is :%d\n", a);
    return 0;
}