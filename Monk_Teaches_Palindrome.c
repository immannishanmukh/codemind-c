#include <stdio.h>
#include <string.h>
int main ( )
{
    int t ;
    scanf ( "%d" , &t ) ;
    while ( t-- )
    {
        char s [ 100 ] , b [ 100 ] ;
        scanf ( "%s" , s ) ;
        int i , l = strlen ( s ) , c = 0 , j = 0 ;
        for ( i = 0 ; i <= l - 1 ; i++ )
        {
            if ( s [ i ] == s [ l - i - 1 ] )
            {
               c++;
            }
        }
        if ( c == i && l % 2 == 0 )
        {
            printf ( "YES EVEN
" ) ;
        }
        else if ( c == i && l % 2 != 0 )
        {
            printf ( "YES ODD
" ) ;
        }
        else
        {
            printf ( "NO
" ) ;
        }
    }
}