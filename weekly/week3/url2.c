#include <stdio.h>

int main(){
 int a,b,n;
 scanf("%d" ,&n);
   for(a = 1 ; a <= n ; a++)
   {
    for(b = 1 ; b<= n ; b++)
    {
        if((a+b)%2 == 0)
        printf("*");
        else
        printf(" ");
    }
    printf("\n");
   }
   return 0;
}
