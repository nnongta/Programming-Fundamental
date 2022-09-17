#include <stdio.h>
int main()
{
    int n,m;
    printf("n = ");
    scanf("%d",&n);
    printf("m = ");
    scanf("%d",&m);

    int pig[n+1];
    pig[0]=0;
    for(int i=1;i<=n;i++)
        scanf("%d",&pig[i]);
    
    int qs[n+1];
    qs[0]=0;
    for(int i=1;i<=n;i++)
        qs[i]=qs[i-1]+pig[i];
    int max=qs[m];
    int mem=m;
    for(int i=m+1;i<=n;i++)
    {
        if(max<qs[i]-qs[i-m])
        {
            max=qs[i]-qs[i-m];
            mem=i;
        }
    }
    for(int i=mem-m+1;i<=mem;i++)
        printf("\n%d",pig[i]);
}