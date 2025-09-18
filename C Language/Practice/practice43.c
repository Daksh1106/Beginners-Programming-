// Write a program to read three integers from a file.

#include <stdio.h>
int main()
{
    int a, b, c;
    FILE *fp = fopen("input.txt", "r");
    if (!fp)
    {
        printf("File error!\n");
        return 1;
    }
    fscanf(fp, "%d%d%d", &a, &b, &c);
    fclose(fp);
    printf("%d %d %d\n", a, b, c);
    return 0;
}