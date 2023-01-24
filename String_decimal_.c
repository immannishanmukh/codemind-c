#include <stdio.h>
#include <string.h>
int main ( )
{
    int t ;
    scanf ( "%d" , &t ) ;
    while ( t-- )
    {
       char s [ 1000 ] ;
       scanf ( "%s" , s ) ;
       int l = strlen ( s ) , c = 0 ;
       for ( int i = 0 ; s [ i ] != NULL ; i++ )
       {
          if ( s [ i ] >= 48 && s [ i ] <= 57 )
          {
              c++ ;
          }
       }
       if ( c == l )
       {
           printf ( "True
" ) ;
       }
       else
       {
           printf ( "False
" ) ;
       }
    }
}