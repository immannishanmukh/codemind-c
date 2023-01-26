#include <stdio.h>
int main ( )
{
    int n , k , i , l = 0 , t ;
    scanf ( "%d" , &n ) ;
    int a [ n ] , c [ k ] ;
    for ( i = 0 ; i < n ; i++ )
    {
        scanf ( "%d" , &a [ i ] ) ;
    }
    scanf ( "%d" , &k ) ;
    for ( i = 0 ; i < n ; i++ )
    {
        for ( int j = i + 1 ; j < n ; j++ )
        {
        if ( a [ j ] > a [ i ] )
        {
            t = a [ i ] ;
            a [ i ] = a [ j ] ; 
            a [ j] = t ;
        }
        }
    }
    for ( i = 0 ; i < n ; i++ )
    {
        if ( a [ i ] != a [ i + 1 ] )
        {
            c [ l++ ] = a [ i ] ;
        }
    }
    printf ( "%d" , c [ k - 1 ] ) ;
}