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
int prime(int v)
{
    int i,c=0;
    for(i=1;i<=v;i++)
    {
        if(v%i==0)
        {
            c++;
        }
    }
    if(c==2)
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
    int n,j;
    scanf("%d",&n);
    for(j=n+1;;j++)
    {
        if(prime(j) && pal(j))
        {
            printf("%d",j);
            break;
        }
    }
}