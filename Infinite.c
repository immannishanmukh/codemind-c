#include <stdio.h>
int main ( ) 
{
    int n ;
    scanf ( "%d" , &n ) ;
    while ( n != -1 )
    {
        int sq ;
        sq = n * n ;
        printf ( "%d
" , sq ) ;
        scanf ( "%d" , &n ) ;
    }
}