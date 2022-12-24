#include<stdio.h>
int main()
{
    int n,r,rr,b,rc,m,p,f;
    scanf("%d%d%d%d",&n,&r,&rr,&b);
    rc=r*rr;
    m=n-r;
    if(rr<b)
    {
       p = rr*m;
       f=p+rc;
       printf("%d",f);
    }
    else
    {
     p = b*m;
       f=p+rc;
       printf("%d",f);
    }
}