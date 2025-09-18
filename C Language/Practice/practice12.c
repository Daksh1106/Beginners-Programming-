#include <stdio.h>
int main()
{
    int sum = 0 , a;
    for(a=1; a <= 10; a++)
    {
        sum+=a;
    }
    printf("Sum of first 10 natural numbers:%d\n", sum);
    return 0;
}
