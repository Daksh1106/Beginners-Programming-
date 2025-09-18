#include <stdio.h>
int main(int argc, char const *argv[])
{
    int marks, m, p, c;
    
    printf("Enter the marks you have obtained in Mathematics: \n");
    scanf("%d", &m);
    
    printf("Enter the marks you have obtained in Physics: \n");
    scanf("%d", &p);
    
    printf("Enter the marks you have obtained in Chemistry: \n");
    scanf("%d", &c);
    
    float total = m + p + c;
    float percentage = (total / 300.0) * 100;
    
    printf("Total marks obtained: %.2f\n", total);
    printf("Percentage: %.3f\n", percentage);

    if (m<33||p<33||c<33)
    {
        printf("You have failed the exam.");
    }
    

    else if (percentage < 33)
    {
        printf("You have failed in the exam because you have scored less than 33 in any one of the subjects.");
    }
    else
    {
        printf("You have passed in the exam.");
    }
    return 0;
}
