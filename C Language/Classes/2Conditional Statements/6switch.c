#include <stdio.h>

int main(int argc, char const *argv[])
{
    int age, marks;
    printf("Enter your age:\n");
    scanf("%d", &age);
    printf("Enter your marks:\n");
    scanf("%d", &marks);
    
    switch (age)
    {
        case 3:
            printf("the age is 3.\n");
        switch (marks)
        {
        case 45:
            printf("Your marks is 45.\n");
            break;
        
        default:
            printf("Your marks is not 45.\n");
            break;
        }
        break;
        case 13:
            printf("the age is 13.\n");
        break;
        case 23:
            printf("the age is 23.\n");
        break;
    
    default:
        printf("Your age is not 3, 13 or 23.\n");
        break;
    }
    return 0;
}
