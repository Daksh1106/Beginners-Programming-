// Write a program to generate multiplication table of a given number in text format. Make sure that the file is readable and well formatted.

#include <stdio.h>

int main() {
    int n;
    printf("Enter a number for multiplication table: ");
    scanf("%d", &n);

    FILE *fp = fopen("table.txt", "w");
    if (!fp) {
        printf("File error!\n");
        return 1;
    }
    fprintf(fp, "Multiplication Table of %d\n", n);
    fprintf(fp, "--------------------------\n");
    for (int i = 1; i <= 10; i++) {
        fprintf(fp, "%2d x %2d = %3d\n", n, i, n * i);
    }
    fclose(fp);
    printf("Table written to table.txt\n");
    return 0;
}
