#include<stdio.h>
int fact(int x)
{
    int j,c=0;
    for(j=1;j<=x;j++)
    {
        if(x%j==0)
        {
            c++;
        }
    }
    if(c==9)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n,i,t=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(fact(i))
        {
        printf("%d ",i);
        t++;
        }
    }
    printf("
Total=%d",t);
}