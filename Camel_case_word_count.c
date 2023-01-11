#include<stdio.h>
#include<string.h>
int main()
{
    int i,c=0;
    char s[30];
    scanf("%[^
]s",&s);
    for(i=1;i<strlen(s);i++)
    {
        if(s[i]>=65 && s[i]<=90)
           c++;
    }
    printf("%d",c+1);
    return 0;
}