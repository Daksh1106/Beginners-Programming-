#include <stdio.h>
int avg(int a, int b, int c);
int main()
{
    int a, b, c, result;
    printf("Value of a: \n");
    scanf("%d", &a);
    printf("Value of b: \n");
    scanf("%d", &b);
    printf("Value of c: \n");
    scanf("%d", &c);
    result = avg(a, b, c);
    printf("The average of three values is: %d\n", result);
    return 0;
}
int avg(int a, int b, int c)
{
    return (a + b + c) / 3;
}
