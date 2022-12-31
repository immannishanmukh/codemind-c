#include<stdio.h>
int pal(int x)
{
    int t,r,rev=0;
    t=x;
    while(t!=0)
    {
        r=t%10;
        rev=rev*10+r;
        t=t/10;
    }
    if(x==rev)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int re(int c)
{
    int l=0,k;
    while(c!=0)
    {
        k=c%10;
        l=l*10+k;
        c=c/10;
    }
    return l;
}
int main()
{
    int n;
    scanf("%d",&n);
    n=n+re(n);
    while(pal(n)!=1)
    {
        n=n+re(n);
    }
     printf("%d",n);
}