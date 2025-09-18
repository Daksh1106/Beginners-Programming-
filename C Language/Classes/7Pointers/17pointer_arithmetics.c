#include <stdio.h>
int main()
{
    int a = 34;
    int *ptra = &a;
    printf("Value when using int:%d\n",  ptra); 
    printf("Value when using int:%d\n", ptra+2); 

    printf("\n");
    
    char b = 3;
    char *ptrb = &b;

    printf("Value when using char:%d\n", ptrb-2);
    ptrb++;
    printf("Value when using char:%d\n", ptrb);
    printf("Value when using char:%d\n", ptrb-2);
    return 0;
}