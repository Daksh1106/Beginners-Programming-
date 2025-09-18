#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a, i = 0;
    int *i2;
    while (i < 4555)
    {
        printf("Welcome to this world\n");
        i2 = malloc(34444 * sizeof(int));
        if (i % 100 == 0)
        {
            getchar();
        }
        i++;
        free(i2);
    }
    return 0;
}
/*Press ENTER for 3-4 times or more if u want and then check ur task manager and under that search of 'VISUAL CODE' and then under that look for the 39memory_leak and see the memory it has taken.....keep on pressing ENTER and u will notice the size of the file increasing.*/
/*But if we use free(i2); after i++ then the size will not increase and it will remain the same even after pressing on enter several number of times.*/