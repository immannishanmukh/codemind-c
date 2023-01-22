#include <stdio.h>
int main ( )
{
    int n ;
    scanf ( "%d" , &n ) ;
    int a [ n ] , i , j ;
    for ( i = 0 ; i < n ; i++ )
    {
        scanf ( "%d" , &a [ i ] ) ;
    }
    int  c , s = 100 , max = 0;
    for ( i = 0 ; i < n ; i++ )
    {
        c = 0 ;
        for ( j = 0 ; j < n ; j++ )
        {
            if (a [ i ] == a [ j ] )
            {
                c++ ;
            }
        }
        if ( c > max )
        {
            max = c ;
            s = a [ i ] ;
        }
        else if( c == max )
        {
            if ( a [ i ] < s )
            {
                s = a [ i ] ;
            }
        }
    }
    printf ( "%d" , s ) ;
}