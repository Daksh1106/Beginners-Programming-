// Write a program to create an array of 10 integers and store multiplication table of 5 in it. 
 #include <stdio.h>
int main()
{
    int table[10];
    int num = 5;
    for (int i = 0; i < 10; i++)
    {
        table[i] = num * (i + 1);
    }
    printf("Multiplication table of 5 is:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("5 x %d = %d\n", i + 1, table[i]);
    }
    return 0;
}
