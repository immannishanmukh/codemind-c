#include <stdio.h>
int main ( )
{
    int d , c , a1 , a2 , a3 , b1 , b2 , b3 , s = 0 , s1 = 0 , s2 = 0 , s3 = 0 ;
    scanf ( "%d %d" , &d , &c ) ;
    scanf ( "%d %d %d" , &a1 , &a2 , &a3 ) ;
    scanf ( "%d %d %d" , &b1 , &b2 , &b3 ) ;
    s = a1 + a2 + a3 ;
    s1 = b1 + b2 + b3 ;
    s2 = s + s1 + d + d ;
    if ( s >= 150 && s1 >= 150 )
    {
        s3 = s + s1 + c ;
    }
    else if ( s >= 150 && s1 < 150 || s < 150 && s1 >= 150 )
    {
        s3 = s + s1 + c + d ; 
    }
    else
    {
        s3 = s2 ;
    }
    if ( s3 < s2 )
    {
        printf ( "YES" ) ;
    }
    else
    {
        printf ( "NO") ;
    }
}