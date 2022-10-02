#include <stdio.h>
#include <string.h>

struct input{
        char text[255];
}s;
int main(){

    FILE *tofile;
    char dot[] = ".";

    tofile = fopen("data01.txt", "w");
    printf("Input data string:");
    scanf("%[^\.]", s.text);
  
    strcat(s.text,dot);
    fwrite(s.text,sizeof(s.text), 1,  tofile);
    fclose(tofile);
    return 0;		

}
