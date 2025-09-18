#include <stdio.h>
#include <string.h>
int main()
{
    char s1[]= "Daksh";
    char s2[]= "Keshri";
    char s3[54];
    strcpy(s3, s1);           // Copy s1 to s3
    strcat(s3, s2);           // Concatenate s2 to s3
    puts(s3);                 // Print the concatenated string
    printf("The length of s1 is:%d\n", strlen(s1)); // s1 remains unchanged, length is 5
    printf("The length of s2 is:%d\n", strlen(s2));
    // printf("The reversed string s1 is:");
    // strrev(s1);
    // puts(s1);
    // printf("The reversed string s2 is:");   
    // strrev(s2);
    // puts(s2);
    // strcpy(s3,strcat(s1, s2));
    // puts(s3);
    // printf("The strcamp of s1 and s2 is:%d\n", strcmp(s1, s2));
    return 0;
}
