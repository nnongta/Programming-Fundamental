#include <stdio.h>
int main()
{
   int i = 0;
   int num;
   char str[500];
   printf("Enter number: ");
   scanf("%d",&num);
   while (i < num)
   {
    str[i]='*';
    i++;
   }
   str[i]='\0';
   printf("%s",str);
    return 0;
}