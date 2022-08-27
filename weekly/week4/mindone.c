#include <stdio.h>
int main()
{
    int x;
    int num;
    printf("Enter number: ");
    scanf("%d",&num);
    for ( x = 0; x < num ; x++)
    {
        printf ("*");
    }  
    return 0;
}