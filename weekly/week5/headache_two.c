#include <stdio.h>
int main(){
    int n[9];
    scanf("%d %d %d %d %d %d %d %d %d %d" ,&n[0] ,&n[1] ,&n[2] ,&n[3] ,&n[4] ,&n[5] ,&n[6] ,&n[7] ,&n[8] ,&n[9]);
    

    int sum,median;
    sum = n[0] + n[1] + n[2] + n[3] + n[4] + n[5] + n[6] + n[7] + n[8] + n[9];
    median = sum/10 ;

    printf("median = %d" , median);
}