#include <stdio.h>
int main ( )
{
    int n,max=0,min=9999,k=0,l=0;
    scanf ( "%d" , &n ) ;
    int a [ n ] ;
    float s = 0 , t = 0 ;
    for ( int i = 0 ; i < n ; i++ )
    {
        scanf ( "%d" , &a [ i ] ) ;
    }
    
    for ( int  i = 0 ; i < n ; i++ )
    {
        int c = 0 ;
        for ( int j = 0 ; j < n ; j++ )
        {
            if ( a [ i ] == a [ j ] )
            {
                c++;
                if(i!=j)
                {
                    a[j]=0;
                }
            }
        }
        if ( c == a [i ] ) 
        {
           if(max<a[i])
           {
               max=a[i];
               k=1;
           }
           if(min>a[i])
           {
               min=a[i];
               l=1;
           }
           
        }
    }
    if(k==1 && l==1)
    {
printf("%d %d",min,max);
}
else
{
    printf("-1");
}
}