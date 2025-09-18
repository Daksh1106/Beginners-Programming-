#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("File name is %s\n", __FILE__);
    printf("Today's Date is %s\n", __DATE__);
    printf("Time Now is %s\n", __TIME__);
    printf("Line Number is %d\n", __LINE__);
    printf("ANSI: %D\n", __STDC__);
    return 0;
}