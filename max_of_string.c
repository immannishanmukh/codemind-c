#include <stdio.h>
int main ( )
{
    char s [ 100 ] , max = 'a' ;
    scanf ( "%[^
]s" , s ) ;
    for ( int i = 0 ; s [ i ] != NULL ; i++ )
    {
        if ( max < s [ i ] )
        {
            max = s [ i ] ; 
        }
    }
    printf ( "%c" , max ) ;
}