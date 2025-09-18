// Write a program to modify a file containing an integer to double its value.

#include <stdio.h>

int main()
{
    int num;
    FILE *fp = fopen("number.txt", "r");
    if (!fp)
    {
        printf("File error!\n");
        return 1;
    }
    fscanf(fp, "%d", &num);
    fclose(fp);
    fp = fopen("number.txt", "w");
    if (!fp)
    {
        printf("File error!\n");
        return 1;
    }
    fprintf(fp, "%d", num * 2);
    fclose(fp);
    printf("Done.\n");
    return 0;
}
