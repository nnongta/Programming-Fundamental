#include<stdio.h>

int main(){

    FILE *tofile, *fromfile;
    fromfile = fopen("data1.txt", "r");
    tofile = fopen("data2.txt", "w");

    char sentence[300];
    while ( fscanf(fromfile, "%s", sentence) != EOF)
    {
        fprintf(tofile, "%s", sentence);
    }
    fclose(tofile);
    fclose(fromfile);

}