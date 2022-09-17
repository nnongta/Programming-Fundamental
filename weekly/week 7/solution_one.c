#include <stdio.h>
int main()
{
    int n , m , sum ;
    int max = 0 ;
    int pig[n+1] , check[m+1] ;
    int mem[m+1] ;
    
    printf("input n :");
    scanf("%d",&n);
    printf("input m :");
    scanf("%d",&m);

    for ( int i = 0 ; i < n ; i++ )  
    {
        scanf( "%d" , &pig[i] );
    }

    for ( int i = 0 ; i < n - m + 1 ; i++ )
    {
        sum = 0 ;

        for ( int j = 0 ; j < m ; j++ ) 
        {
            check[j] = pig[i+j] ;
        }

        for ( int k = 0 ; k < m ; k++ ) 
        {
            sum = sum + check[k] ;
        }

        if( sum >= max )  
        {
            max=sum ;
            for ( int r = 0 ; r < m ; r++ ) 
            {
                mem[r]=check[r] ;
            }
        }
    }

    for ( int p = 0 ; p < m ; p++ )  
    {
        printf ( "%d " , mem[p] ) ;
    }

    return 0;
}