// Create ur own version of strlen function from <string.h>.

#include <stdio.h>
#include <string.h>
int main()
{
    char m1[]="Where are you??";
    char m2[]="Why are you??";
    char q1[]="Why do you have to hurt me so much??";
    char q2[]="You will never know how much u hurt me so much by saying those things...";
    printf("Length of m1 is:%d\n", strlen(m1));
    printf("Length of m2 is:%d\n", strlen(m2));
    printf("Length of q1 is:%d\n", strlen(q1));
    printf("Length of q2 is:%d\n", strlen(q2));
    return 0;
}