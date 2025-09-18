// Write your own version of strcpy function from <string.h>

#include <stdio.h>
#include <string.h>
int main()
{
    char m1[]="Who are you??";
    char m2[]="Why are you??";
    char m3[100] = "I am someone who wonders both who and why.";
    strcpy(m3, m1);
    printf("After copying m1: %s\n", m3);
    strcpy(m3, m2);
    printf("After copying m2: %s\n", m3);
    return 0;
}