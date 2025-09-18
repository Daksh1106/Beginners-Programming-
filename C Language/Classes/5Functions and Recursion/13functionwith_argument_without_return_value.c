#include <stdio.h>
int sum(int a, int b);
void printstar(int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%c", '*');
    }
    printf("%c", '*');
}
int main()
{
    int a,b,c;
    a=11;
    b=12;
    c = sum(a, b);
    printstar(11);
    return 0;
}
int sum(int a, int b)
{
    return a + b;
}
