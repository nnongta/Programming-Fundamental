#include<stdio.h>

int main()
{
    FILE *fromfile, *tofile;
    fromfile = fopen("data1.txt", "r");
    tofile = fopen("data2.txt", "w");

    char c;
    while ((c =fgetc(fromfile)) != EOF)
    {
        fputc(c, tofile);
    }

    fclose(fromfile);
    fclose(tofile);

    return 0;
}