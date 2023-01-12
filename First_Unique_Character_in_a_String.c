#include<stdio.h>
int main()
{
    char s[100];
    int c=0,i,j,d=0;
    fgets(s,100,stdin);
    for(i=0;s[i]!=NULL;i++)
    {
        for(j=0;s[j]!=NULL;j++)
        {
            if(i!=j)
            {
                if(s[i]==s[j])
                {
                    c=1;
                }
            }
        }
        if(c==0)
        {
            printf("%d",i);
            d=1;
            break;
        }
        c=0;
    }
    if(d==0)
    {
        printf("-1");
    }
    
}