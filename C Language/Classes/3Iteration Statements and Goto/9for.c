#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i = 0, j = 0, k = 0;
    
    for (; i < 15; i++, j++, k = k + 2)
    {
        printf("%d %d %d\n", i, j, k);
    }
    return 0;
}