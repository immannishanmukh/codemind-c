#include <stdio.h>
int main ( ) 
{
    char s[1000],ch;
    int i,c=0;
    scanf ("%[^
]s",s);
    scanf("%s",&ch);
    for(i=0;s[i]!=NULL;i++)
    {
            if(s[i]==ch)
            {
                
                c++;
            }
    }
    if (c==0)
    {
        printf ("-1");
    }
    else
    {
        printf ("%d",c);
    }
    }
    