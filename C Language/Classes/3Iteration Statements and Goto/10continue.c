#include <stdio.h>

int main()
{
    for (int i = 0; i <= 18; i++)
    {
        int age;
        printf("%d\nEnter your age:\n", i);
        scanf("%d", &age);
        if (age > 18)
        {
            printf("You are an adult.\n");
            continue;
        }
        if (age < 18)
        {
            printf("You are not an adult.\n");
            continue;
        }
    }
    return 0;
}