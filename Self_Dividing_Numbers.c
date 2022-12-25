#include<stdio.h>
int fun(int i)
{
    int r,p,c=0,v=0;
    p=i;
    while(i!=0)
    {
        r=i%10;
        v++;
        if(r!=0 && p%r==0)
        {
            c++;
        }
        i=i/10;
    }
    if(v==c)
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
    int l,u,i;
    scanf("%d%d",&l,&u);
    for(i=l;i<=u;i++)
    {
        if(fun(i))
        {
            printf("%d ",i);
        }
    }
}