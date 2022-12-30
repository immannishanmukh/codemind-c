#include<stdio.h>
#include<string.h>
int main()
{
    char n[100];
    int i,c=0,g,m;
    scanf("%s",&n);
    m=strlen(n);
    for(i=0;i<m;i++)
    {
        if(n[i]=='1')
        {
            c++;
        }
    }
    printf("%d",c);
}