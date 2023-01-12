#include<stdio.h>
int main()
{
    char s[100],i;
    int l,u;
    fgets(s,100,stdin);
    scanf("%d",&l);
    scanf("%d",&u);
    for(i=l;i<=u;i++)
    {
        printf("%c",s[i]);
    }
}