#include<stdio.h>
int main()
{
    int n,r=0,rev=0,c=0,v,f;
    scanf("%d",&n);
    while(n!=0)
    {
        v=n%10;
        r=r*10+v;
        n=n/10;
    }
    while(r)
    {
        f=r%10;
        if(r%10==6 && c==0)
        {
            rev=(rev*10)+9;
            c++;
        }
        else
        {
            rev=(rev*10)+f;
        }
        r=r/10;
    }
    printf("%d",rev);
}