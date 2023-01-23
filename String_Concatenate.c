#include <stdio.h>
#include <string.h>
int main ( )
{
    char s [ 100 ] , d [ 100 ];
    scanf ( "%s" , s ) ;
    scanf ( "%s" , d ) ;
    strcat( s , d ) ;
    for ( int i = 0 ; s [ i ] != NULL ; i++ )
    {
        for ( int j = 0 ; s [ j ] != NULL ; j++ )
        {
            if ( s [ i ] < s [ j ] )
            {
                int t = s [ i ] ;
                s [ i ] = s [ j ] ;
                s [ j ] = t ;
            }
        }
    }
    printf ( "%s" , s ) ;
}