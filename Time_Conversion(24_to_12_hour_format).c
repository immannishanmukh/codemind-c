#include <stdio.h>
int main ( )
{
    char s [ 5 ] ;
    scanf ( "%[^
]s" , s ) ;
    if ( s [ 0 ] == '0' && s [ 1 ] == '0' ) 
    {
        printf ( "12:%c%c AM" , s [ 3 ] , s [ 4 ] ) ;
    }
    else if ( s [ 0 ] == '1' && s [ 1 ] == '2' )
    {
        printf ( "12:%c%c PM" , s [ 3 ] , s [ 4 ] ) ;
    }
    else if ( s [ 0 ] == '1' && s [ 1 ] == '3' )
    {
        printf ( "01:%c%c PM" , s [ 3 ] , s [ 4 ] ) ;
    }
    else if ( s [ 0 ] == '1' && s [ 1 ] == '4' )
    {
        printf ( "02:%c%c PM" , s [ 3 ] , s [ 4 ] ) ;
    }
    else if ( s [ 0 ] == '1' && s [ 1 ] == '5' )
    {
        printf ( "03:%c%c PM" , s [ 3 ] , s [ 4 ] ) ;
    }
    else if ( s [ 0 ]  == '1' && s [ 1 ] == '6' )
    {
        printf ( "04:%c%c PM" , s [ 3 ] ,s [ 4 ] ) ;
    }
    else if ( s [ 0 ] == '1' && s [ 1 ] == '7' )
    {
        printf ( "05:%c%c PM" , s [ 3 ] , s [ 4 ] ) ;
    }
    else if ( s [ 0 ] == '1' && s [ 1 ] == '8' )
    {
        printf ( "06:%c%c PM" , s [ 3 ] , s [ 4 ] ) ;
    }    
    else if ( s [ 0 ] == '1' && s [ 1 ] == '9' )
    {
        printf ( "07:%c%c PM" , s [ 3 ] , s [ 4 ] ) ;
    }
    else if ( s [ 0 ] == '2' && s [ 1 ] == '0' )
    {
        printf ( "08:%c%c PM" , s [ 3 ] , s [ 4 ] ) ;
    }
    else if ( s [ 0 ] == '2'&& s [ 1 ] == '1' )
    {
        printf ( "09:%c%c PM" , s [ 3 ] , s [ 4 ] ) ;
    }    
    else if ( s [ 0 ] == '2' && s [ 1 ] == '2' )
    {
        printf ( "10:%c%c PM" , s [ 3 ] , s [ 4 ] ) ;
    }    
    else if ( s [ 0 ] == '2' && s [ 1 ] == '3' )
    {
        printf ( "11:%c%c PM" , s [ 3 ] , s [ 4 ] ) ;
    }
    else if ( s [ 0 ] == '2' && s [ 1 ] == '4' ) 
    {
        printf ( "12:%c%c PM" , s [3] , s [ 4 ] ) ;
    }
    else
    {
        printf ( "%s AM" , s ) ;
    }
}