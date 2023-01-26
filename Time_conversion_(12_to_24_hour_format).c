#include<stdio.h>
int main( )
{
    char s[8];
    scanf("%[^
]s",s);
    if (s[6]=='A'&&s[7]=='M')
    {
        if(s[0]=='1'&&s[1]=='2')
        printf("00:%c%c",s[3],s[4]);
        else
        printf("%c%c%c%c%c",s[0],s[1],s[2],s[3],s[4]);
    }
    else
    {
        if(s[0]=='1'&&s[1]=='2')
        printf("%c%c%c%c%c",s[0],s[1],s[2],s[3],s[4]);
        else
        {
           printf("%c%c%c%c%c",s[0]+1,s[1]+2,s[2],s[3],s[4]) ;
        }
        
    }
}