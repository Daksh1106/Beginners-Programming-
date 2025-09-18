// Write a program to read a text file charcater by character and write its content twice in a separate life.

#include <stdio.h>

int main()
{
    FILE *fin, *fout;
    int ch;

    // Open input file for reading
    fin = fopen("input.txt", "r");
    // Open output file for writing
    fout = fopen("output.txt", "w");

    if (!fin || !fout)
    {
        printf("File error!\n");
        return 1;
    }

    // Write the content of input.txt to output.txt (first time)
    while ((ch = fgetc(fin)) != EOF)
    {
        fputc(ch, fout);
    }

    // Go back to the start of input.txt
    rewind(fin);

    // Write the content of input.txt to output.txt (second time)
    while ((ch = fgetc(fin)) != EOF)
    {
        fputc(ch, fout);
    }

    fclose(fin);
    fclose(fout);

    printf("File content written twice to output.txt\n");
    return 0;
}
