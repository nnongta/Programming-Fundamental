#include<stdio.h>

int x[5], y[5]; //new for check

int main(){
   int temp;
   for(int i =0 ; i<5 ; i++)
        scanf("%d" ,&x[i]);
    int index=0, check = 0;
   for(int i =0 ; i<5 ; i++)
   {
        scanf("%d" ,&temp);
        check = 0;
        for(int i=0 ; i<5 ;i++)
            if(temp == x[i])
                check = check + 1;
        if (check !=0)
        {
            y[index] = temp;
            index = index + 1;
        }
    }
    for (int i=0 ;i < index ; i++)
        printf("%d ", y[i]);

}
    
