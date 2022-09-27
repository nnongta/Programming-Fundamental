#include <stdio.h>
int main(){
    int arr[5],n;
    for(int i=0;i<5;i++){
        scanf("%d" ,&arr[i]);
    }
    for(int i=0;i<5;i++){
        scanf("%d" ,&n);
        for(int j=0;j<5;j++)
        {
            if(n==arr[j])
            {
                printf("%d ",n);
                break;
            }
        }
    }
}