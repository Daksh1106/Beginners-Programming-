#include <stdio.h>

int main()
{
    label:
        printf("\n");
    printf("This is a goto statement example.\n");
    goto end;
    printf("This line will be skipped.\n");
    goto label; 
    end:
        printf("This is the end of the program.\n"); 
    return 0;
}