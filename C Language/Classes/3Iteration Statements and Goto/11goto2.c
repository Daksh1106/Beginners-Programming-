#include <stdio.h>

int main()
{
    int num;
    for(int i = 0; i < 5; i++)
    {
        printf("%d\n", i);
        for(int j = 0; j < 8; j++)
        {
           printf("Enter the number:\n");
           printf("Enter 0 to exit:\n");
           scanf("%d", &num);
           if(num == 0){
               goto end;
           }
           
        }
    }
    end:
    return 0;
}
