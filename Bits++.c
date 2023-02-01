#include<stdio.h>
int main()
{
    int t,c=0;
    scanf("%d",&t);
    t=t+1;
    while(t--)
    {
    char s[100],i,j;
    //int c=0;
    int d=0;
    fgets(s,100,stdin);
    for(i=0;s[i]!=NULL;i++)
    {
    if(s[i]=='+')
    {
        c=c+1;
        break;
    }
     else if(s[i]=='-')
    {
        c=c-1;
        break;
    }
    }
    
    }
    printf("%d",c);
}