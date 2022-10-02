#include <stdio.h>
#include <string.h>

char text[255];
int main(){
    
    FILE *tofile;
    char dot[] = ".";

    tofile = fopen("data01.txt", "w");
    printf("Input data string:");
    scanf("%[^\.]" ,text);
  
    strcat(text,dot);
    int size =strlen(text);

    for( int i = 0 ; i < size ; i++){
        fputc(text[i] ,tofile);
    }

    fclose(tofile);
    return 0;
}
