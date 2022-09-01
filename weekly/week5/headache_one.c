#include <stdio.h>
int main(){
   int i,length;
   printf("\nInput number of student = ");
   scanf("%d",&length);
   
   int score[length];
   int sum = 0;
 
 for(i=0;i<length;i++){
  printf("\nheight [%d] = ",i);
  scanf("%d",&score[i]);
  sum += score[i] / 10;
 }
 
 printf("\naverageheight = %d",sum);
}