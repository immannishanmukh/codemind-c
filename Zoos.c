#include<stdio.h>
int main()
{
    char s[100],i,f;
    int c=0,b=0,n;
    fgets(s,100,stdin);
    for(i=0;s[i]!=NULL;i++)
    {
        if(s[i]=='z')
        {
            c++;
        }
        else if(s[i]=='o')
        {
            b++;
        }
    }
    if(c*2==b)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
}
    